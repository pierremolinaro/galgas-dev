#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList::~ GALGAS_typeNameFormalParameterNameList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeNameFormalParameterNameList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_typeNameFormalParameterNameList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_typeNameFormalParameterNameList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<list @typeNameFormalParameterNameList:" ;
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

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_typeNameFormalParameterNameList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_typeNameFormalParameterNameList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mFormalSelector,
                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = NULL ;
  macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (in_mFormalSelector,
                                                                     in_mFormalParameterTypeName,
                                                                     in_mFormalParameterName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_lstring & inOperand2
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_typeNameFormalParameterNameList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_lstring inOperand1,
                                                                   const GALGAS_lstring inOperand2,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_typeNameFormalParameterNameList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_typeNameFormalParameterNameList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_lstring & outOperand2,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_typeNameFormalParameterNameList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalParameterTypeName ;
      outOperand2 = element.mAttribute_mFormalParameterName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_typeNameFormalParameterNameList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalParameterTypeName ;
      outOperand2 = element.mAttribute_mFormalParameterName ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_typeNameFormalParameterNameList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalParameterTypeName ;
      outOperand2 = element.mAttribute_mFormalParameterName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_typeNameFormalParameterNameList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalParameterTypeName ;
      outOperand2 = element.mAttribute_mFormalParameterName ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_typeNameFormalParameterNameList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalParameterTypeName ;
      outOperand2 = element.mAttribute_mFormalParameterName ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::add_operation (const GALGAS_typeNameFormalParameterNameList & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
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

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_typeNameFormalParameterNameList (true) ;
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

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_typeNameFormalParameterNameList (true) ;
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

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_typeNameFormalParameterNameList (true) ;
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

void GALGAS_typeNameFormalParameterNameList::plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
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

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalSelector ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalParameterTypeName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalParameterName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeNameFormalParameterNameList::objectCompare (const GALGAS_typeNameFormalParameterNameList & inOperand) const {
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

cEnumerator_typeNameFormalParameterNameList::cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typeNameFormalParameterNameList::~ cEnumerator_typeNameFormalParameterNameList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_typeNameFormalParameterNameList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_typeNameFormalParameterNameList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_typeNameFormalParameterNameList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element cEnumerator_typeNameFormalParameterNameList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalSelector (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterTypeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalParameterName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @typeNameFormalParameterNameList type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ("typeNameFormalParameterNameList",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeNameFormalParameterNameList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeNameFormalParameterNameList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeNameFormalParameterNameList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  const GALGAS_typeNameFormalParameterNameList * p = (const GALGAS_typeNameFormalParameterNameList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeNameFormalParameterNameList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST::~ GALGAS_formalParameterListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_formalParameterListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_formalParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<list @formalParameterListAST:" ;
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

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_bool & inOperand4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_formalParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                               const GALGAS_bool & in_mIsUnused
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_formalParameterListAST (in_mFormalSelector,
                                                            in_mFormalArgumentPassingMode,
                                                            in_mFormalArgumentTypeName,
                                                            in_mFormalArgumentName,
                                                            in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_lstring & inOperand3,
                                                         const GALGAS_bool & inOperand4
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalParameterListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_lstring inOperand3,
                                                          const GALGAS_bool inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalParameterListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GALGAS_formalParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_formalParameterListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsUnused ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_bool & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalParameterListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsUnused ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_bool & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalParameterListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsUnused ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  GALGAS_bool & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalParameterListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsUnused ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 GALGAS_bool & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalParameterListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsUnused ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::add_operation (const GALGAS_formalParameterListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
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

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_formalParameterListAST (true) ;
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

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_formalParameterListAST (true) ;
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

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_formalParameterListAST (true) ;
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

void GALGAS_formalParameterListAST::plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
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

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalSelector ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalParameterListAST::objectCompare (const GALGAS_formalParameterListAST & inOperand) const {
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

cEnumerator_formalParameterListAST::cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalParameterListAST::~ cEnumerator_formalParameterListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalParameterListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalParameterListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_formalParameterListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST_2D_element cEnumerator_formalParameterListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mIsUnused ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @formalParameterListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListAST ("formalParameterListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  const GALGAS_formalParameterListAST * p = (const GALGAS_formalParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList::~ GALGAS_graphInsertModifierList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_graphInsertModifierList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_graphInsertModifierList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_graphInsertModifierList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<list @graphInsertModifierList:" ;
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

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_graphInsertModifierList (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_graphInsertModifierList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mInsertModifierName,
                                                                const GALGAS_lstring & in_mInsertErrorMessage
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = NULL ;
  macroMyNew (p, cCollectionElement_graphInsertModifierList (in_mInsertModifierName,
                                                             in_mInsertErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_graphInsertModifierList_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_graphInsertModifierList_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_graphInsertModifierList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_graphInsertModifierList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertModifierName ;
      outOperand1 = element.mAttribute_mInsertErrorMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_graphInsertModifierList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertModifierName ;
      outOperand1 = element.mAttribute_mInsertErrorMessage ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_graphInsertModifierList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertModifierName ;
      outOperand1 = element.mAttribute_mInsertErrorMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_graphInsertModifierList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertModifierName ;
      outOperand1 = element.mAttribute_mInsertErrorMessage ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_graphInsertModifierList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertModifierName ;
      outOperand1 = element.mAttribute_mInsertErrorMessage ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::add_operation (const GALGAS_graphInsertModifierList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
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

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_graphInsertModifierList (true) ;
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

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_graphInsertModifierList (true) ;
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

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_graphInsertModifierList (true) ;
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

void GALGAS_graphInsertModifierList::plusAssign_operation (const GALGAS_graphInsertModifierList inOperand,
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

typeComparisonResult GALGAS_graphInsertModifierList::objectCompare (const GALGAS_graphInsertModifierList & inOperand) const {
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

cEnumerator_graphInsertModifierList::cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_graphInsertModifierList::~ cEnumerator_graphInsertModifierList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_graphInsertModifierList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_graphInsertModifierList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_graphInsertModifierList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element cEnumerator_graphInsertModifierList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertModifierName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mInsertModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertErrorMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mInsertErrorMessage ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @graphInsertModifierList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphInsertModifierList ("graphInsertModifierList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_graphInsertModifierList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_graphInsertModifierList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphInsertModifierList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  const GALGAS_graphInsertModifierList * p = (const GALGAS_graphInsertModifierList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphInsertModifierList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphInsertModifierList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST::~ GALGAS_insertMethodListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_insertMethodListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_insertMethodListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<list @insertMethodListAST:" ;
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

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_insertMethodListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_insertMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mInsertMethodName,
                                                            const GALGAS_lstring & in_mErrorMessage,
                                                            const GALGAS_lstring & in_mShadowErrorMessage,
                                                            const GALGAS_lstring & in_mInitialStateName
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_insertMethodListAST (in_mInsertMethodName,
                                                         in_mErrorMessage,
                                                         in_mShadowErrorMessage,
                                                         in_mInitialStateName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1,
                                                      const GALGAS_lstring & inOperand2,
                                                      const GALGAS_lstring & inOperand3
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_insertMethodListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_lstring inOperand2,
                                                       const GALGAS_lstring inOperand3,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_insertMethodListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GALGAS_insertMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_insertMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mShadowErrorMessage ;
      outOperand3 = element.mAttribute_mInitialStateName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_insertMethodListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mShadowErrorMessage ;
      outOperand3 = element.mAttribute_mInitialStateName ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_insertMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mShadowErrorMessage ;
      outOperand3 = element.mAttribute_mInitialStateName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lstring & outOperand2,
                                               GALGAS_lstring & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_insertMethodListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mShadowErrorMessage ;
      outOperand3 = element.mAttribute_mInitialStateName ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              GALGAS_lstring & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_insertMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mShadowErrorMessage ;
      outOperand3 = element.mAttribute_mInitialStateName ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::add_operation (const GALGAS_insertMethodListAST & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
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

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_insertMethodListAST (true) ;
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

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_insertMethodListAST (true) ;
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

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_insertMethodListAST (true) ;
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

void GALGAS_insertMethodListAST::plusAssign_operation (const GALGAS_insertMethodListAST inOperand,
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

typeComparisonResult GALGAS_insertMethodListAST::objectCompare (const GALGAS_insertMethodListAST & inOperand) const {
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

cEnumerator_insertMethodListAST::cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_insertMethodListAST::~ cEnumerator_insertMethodListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_insertMethodListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_insertMethodListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_insertMethodListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element cEnumerator_insertMethodListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mInsertMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mShadowErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInitialStateName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mInitialStateName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @insertMethodListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodListAST ("insertMethodListAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  const GALGAS_insertMethodListAST * p = (const GALGAS_insertMethodListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST::~ GALGAS_mapSearchMethodListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapSearchMethodListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapSearchMethodListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_mapSearchMethodListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<list @mapSearchMethodListAST:" ;
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

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapSearchMethodListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSearchMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage,
                                                               const GALGAS_lstring & in_mActionName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapSearchMethodListAST (in_mSearchMethodName,
                                                            in_mErrorMessage,
                                                            in_mActionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_mapSearchMethodListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_mapSearchMethodListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_mapSearchMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_mapSearchMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSearchMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mActionName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapSearchMethodListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSearchMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mActionName ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapSearchMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSearchMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mActionName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapSearchMethodListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSearchMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mActionName ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapSearchMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSearchMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      outOperand2 = element.mAttribute_mActionName ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::add_operation (const GALGAS_mapSearchMethodListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
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

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_mapSearchMethodListAST (true) ;
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

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_mapSearchMethodListAST (true) ;
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

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_mapSearchMethodListAST (true) ;
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

void GALGAS_mapSearchMethodListAST::plusAssign_operation (const GALGAS_mapSearchMethodListAST inOperand,
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

typeComparisonResult GALGAS_mapSearchMethodListAST::objectCompare (const GALGAS_mapSearchMethodListAST & inOperand) const {
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

cEnumerator_mapSearchMethodListAST::cEnumerator_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapSearchMethodListAST::~ cEnumerator_mapSearchMethodListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapSearchMethodListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapSearchMethodListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_mapSearchMethodListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element cEnumerator_mapSearchMethodListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mSearchMethodName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mSearchMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mActionName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mActionName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapSearchMethodListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapSearchMethodListAST ("mapSearchMethodListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapSearchMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapSearchMethodListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapSearchMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapSearchMethodListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  const GALGAS_mapSearchMethodListAST * p = (const GALGAS_mapSearchMethodListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapSearchMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapSearchMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST::~ GALGAS_mapRemoveMethodListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapRemoveMethodListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapRemoveMethodListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_mapRemoveMethodListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<list @mapRemoveMethodListAST:" ;
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

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapRemoveMethodListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_mapRemoveMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (in_mMethodName,
                                                            in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_mapRemoveMethodListAST_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_mapRemoveMethodListAST_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_mapRemoveMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_mapRemoveMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapRemoveMethodListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapRemoveMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapRemoveMethodListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapRemoveMethodListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mErrorMessage ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::add_operation (const GALGAS_mapRemoveMethodListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
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

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_mapRemoveMethodListAST (true) ;
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

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_mapRemoveMethodListAST (true) ;
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

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_mapRemoveMethodListAST (true) ;
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

void GALGAS_mapRemoveMethodListAST::plusAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand,
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

typeComparisonResult GALGAS_mapRemoveMethodListAST::objectCompare (const GALGAS_mapRemoveMethodListAST & inOperand) const {
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

cEnumerator_mapRemoveMethodListAST::cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapRemoveMethodListAST::~ cEnumerator_mapRemoveMethodListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapRemoveMethodListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapRemoveMethodListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_mapRemoveMethodListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element cEnumerator_mapRemoveMethodListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mMethodName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mErrorMessage ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapRemoveMethodListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapRemoveMethodListAST ("mapRemoveMethodListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapRemoveMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapRemoveMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapRemoveMethodListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  const GALGAS_mapRemoveMethodListAST * p = (const GALGAS_mapRemoveMethodListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapRemoveMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapRemoveMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST::~ GALGAS_insertOrReplaceDeclarationListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_insertOrReplaceDeclarationListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_insertOrReplaceDeclarationListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<list @insertOrReplaceDeclarationListAST:" ;
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

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_listWithValue (const GALGAS_location & inOperand0
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_insertOrReplaceDeclarationListAST (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::addAssign_operation (const GALGAS_location & inOperand0
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_insertOrReplaceDeclarationListAST_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_insertOrReplaceDeclarationListAST_2D_element element (inOperand0) ;
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_insertOrReplaceDeclarationListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertOrReplaceDeclarationLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_insertOrReplaceDeclarationListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertOrReplaceDeclarationLocation ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::setter_popLast (GALGAS_location & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_insertOrReplaceDeclarationListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertOrReplaceDeclarationLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::method_first (GALGAS_location & outOperand0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_insertOrReplaceDeclarationListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertOrReplaceDeclarationLocation ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST::method_last (GALGAS_location & outOperand0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_insertOrReplaceDeclarationListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInsertOrReplaceDeclarationLocation ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::add_operation (const GALGAS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
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

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_insertOrReplaceDeclarationListAST (true) ;
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

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_insertOrReplaceDeclarationListAST (true) ;
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

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_insertOrReplaceDeclarationListAST (true) ;
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

void GALGAS_insertOrReplaceDeclarationListAST::plusAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand,
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

typeComparisonResult GALGAS_insertOrReplaceDeclarationListAST::objectCompare (const GALGAS_insertOrReplaceDeclarationListAST & inOperand) const {
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

cEnumerator_insertOrReplaceDeclarationListAST::cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_insertOrReplaceDeclarationListAST::~ cEnumerator_insertOrReplaceDeclarationListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_insertOrReplaceDeclarationListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_insertOrReplaceDeclarationListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_insertOrReplaceDeclarationListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element cEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mInsertOrReplaceDeclarationLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @insertOrReplaceDeclarationListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ("insertOrReplaceDeclarationListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  const GALGAS_insertOrReplaceDeclarationListAST * p = (const GALGAS_insertOrReplaceDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertOrReplaceDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_insertMethodMap::cMapElement_insertMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_insertMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_insertMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_insertMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_insertMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_insertMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_insertMethodMap * operand = (cMapElement_insertMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap::GALGAS_insertMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap::GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap & GALGAS_insertMethodMap::operator = (const GALGAS_insertMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_mapWithMapToOverride (const GALGAS_insertMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@insertMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' insert setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_insertMethodMap * GALGAS_insertMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * result = (cMapElement_insertMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_insertMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_insertMethodMap::cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_insertMethodMap::~ cEnumerator_insertMethodMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_insertMethodMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_insertMethodMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_insertMethodMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element cEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  return GALGAS_insertMethodMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @insertMethodMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  const GALGAS_insertMethodMap * p = (const GALGAS_insertMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_searchMethodMap::cMapElement_searchMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_searchMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_searchMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_searchMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_searchMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_searchMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_searchMethodMap * operand = (cMapElement_searchMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap::GALGAS_searchMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap::GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap & GALGAS_searchMethodMap::operator = (const GALGAS_searchMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_mapWithMapToOverride (const GALGAS_searchMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_searchMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_searchMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@searchMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_searchMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' search method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_searchMethodMap * GALGAS_searchMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * result = (cMapElement_searchMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_searchMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_searchMethodMap::cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_searchMethodMap::~ cEnumerator_searchMethodMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_searchMethodMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_searchMethodMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_searchMethodMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element cEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  return GALGAS_searchMethodMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @searchMethodMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_searchMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_searchMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  const GALGAS_searchMethodMap * p = (const GALGAS_searchMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_searchMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind::GALGAS_mapAutomatonMessageKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::constructor_noMessage (UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  result.mEnum = kEnum_noMessage ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::constructor_warningMessage (UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  result.mEnum = kEnum_warningMessage ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::constructor_errorMessage (UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  result.mEnum = kEnum_errorMessage ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_mapAutomatonMessageKind [4] = {
  "(not built)",
  "noMessage",
  "warningMessage",
  "errorMessage"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mapAutomatonMessageKind::getter_isNoMessage (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noMessage == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mapAutomatonMessageKind::getter_isWarningMessage (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_warningMessage == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mapAutomatonMessageKind::getter_isErrorMessage (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_errorMessage == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonMessageKind::description (C_String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString << "<enum @mapAutomatonMessageKind: " << gEnumNameArrayFor_mapAutomatonMessageKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapAutomatonMessageKind::objectCompare (const GALGAS_mapAutomatonMessageKind & inOperand) const {
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
//                                            @mapAutomatonMessageKind type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonMessageKind ("mapAutomatonMessageKind",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapAutomatonMessageKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapAutomatonMessageKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonMessageKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  const GALGAS_mapAutomatonMessageKind * p = (const GALGAS_mapAutomatonMessageKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonMessageKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonMessageKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList::GALGAS_mapStateTransitionList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList::~ GALGAS_mapStateTransitionList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapStateTransitionList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateTransitionList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_mapStateTransitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<list @mapStateTransitionList:" ;
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

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapStateTransitionList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_mapStateTransitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mActionName,
                                                               const GALGAS_lstring & in_mTargetStateName,
                                                               const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                               const GALGAS_lstring & in_mTransitionMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateTransitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_mapStateTransitionList (in_mActionName,
                                                            in_mTargetStateName,
                                                            in_mTransitionMessageKind,
                                                            in_mTransitionMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                         const GALGAS_lstring & inOperand3
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_mapStateTransitionList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_mapAutomatonMessageKind inOperand2,
                                                          const GALGAS_lstring inOperand3,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_mapStateTransitionList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GALGAS_mapStateTransitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_mapAutomatonMessageKind & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_mapStateTransitionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActionName ;
      outOperand1 = element.mAttribute_mTargetStateName ;
      outOperand2 = element.mAttribute_mTransitionMessageKind ;
      outOperand3 = element.mAttribute_mTransitionMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_mapAutomatonMessageKind & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapStateTransitionList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActionName ;
      outOperand1 = element.mAttribute_mTargetStateName ;
      outOperand2 = element.mAttribute_mTransitionMessageKind ;
      outOperand3 = element.mAttribute_mTransitionMessage ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_mapAutomatonMessageKind & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapStateTransitionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActionName ;
      outOperand1 = element.mAttribute_mTargetStateName ;
      outOperand2 = element.mAttribute_mTransitionMessageKind ;
      outOperand3 = element.mAttribute_mTransitionMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_mapAutomatonMessageKind & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapStateTransitionList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActionName ;
      outOperand1 = element.mAttribute_mTargetStateName ;
      outOperand2 = element.mAttribute_mTransitionMessageKind ;
      outOperand3 = element.mAttribute_mTransitionMessage ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_mapAutomatonMessageKind & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapStateTransitionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActionName ;
      outOperand1 = element.mAttribute_mTargetStateName ;
      outOperand2 = element.mAttribute_mTransitionMessageKind ;
      outOperand3 = element.mAttribute_mTransitionMessage ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::add_operation (const GALGAS_mapStateTransitionList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result ;
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

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_mapStateTransitionList (true) ;
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

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_mapStateTransitionList (true) ;
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

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_mapStateTransitionList (true) ;
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

void GALGAS_mapStateTransitionList::plusAssign_operation (const GALGAS_mapStateTransitionList inOperand,
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

typeComparisonResult GALGAS_mapStateTransitionList::objectCompare (const GALGAS_mapStateTransitionList & inOperand) const {
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

cEnumerator_mapStateTransitionList::cEnumerator_mapStateTransitionList (const GALGAS_mapStateTransitionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapStateTransitionList::~ cEnumerator_mapStateTransitionList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateTransitionList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateTransitionList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_mapStateTransitionList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList_2D_element cEnumerator_mapStateTransitionList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mActionName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mTargetStateName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTargetStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateTransitionList::current_mTransitionMessageKind (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTransitionMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mTransitionMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTransitionMessage ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapStateTransitionList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateTransitionList ("mapStateTransitionList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateTransitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateTransitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateTransitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateTransitionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionList result ;
  const GALGAS_mapStateTransitionList * p = (const GALGAS_mapStateTransitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateTransitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateTransitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList::GALGAS_mapStateList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList::~ GALGAS_mapStateList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList GALGAS_mapStateList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapStateList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_mapStateList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<list @mapStateList:" ;
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

GALGAS_mapStateList GALGAS_mapStateList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                    const GALGAS_lstring & inOperand2,
                                                                    const GALGAS_mapStateTransitionList & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapStateList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapStateList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_mapStateList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mStateName,
                                                     const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                     const GALGAS_lstring & in_mStateMessage,
                                                     const GALGAS_mapStateTransitionList & in_mTransitionList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateList * p = NULL ;
  macroMyNew (p, cCollectionElement_mapStateList (in_mStateName,
                                                  in_mStateMessageKind,
                                                  in_mStateMessage,
                                                  in_mTransitionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_mapAutomatonMessageKind & inOperand1,
                                               const GALGAS_lstring & inOperand2,
                                               const GALGAS_mapStateTransitionList & inOperand3
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_mapStateList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_mapAutomatonMessageKind inOperand1,
                                                const GALGAS_lstring inOperand2,
                                                const GALGAS_mapStateTransitionList inOperand3,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_mapStateList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GALGAS_mapStateList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_mapAutomatonMessageKind & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_mapStateTransitionList & outOperand3,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_mapStateList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStateName ;
      outOperand1 = element.mAttribute_mStateMessageKind ;
      outOperand2 = element.mAttribute_mStateMessage ;
      outOperand3 = element.mAttribute_mTransitionList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_mapAutomatonMessageKind & outOperand1,
                                           GALGAS_lstring & outOperand2,
                                           GALGAS_mapStateTransitionList & outOperand3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapStateList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStateName ;
      outOperand1 = element.mAttribute_mStateMessageKind ;
      outOperand2 = element.mAttribute_mStateMessage ;
      outOperand3 = element.mAttribute_mTransitionList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_mapAutomatonMessageKind & outOperand1,
                                          GALGAS_lstring & outOperand2,
                                          GALGAS_mapStateTransitionList & outOperand3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapStateList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStateName ;
      outOperand1 = element.mAttribute_mStateMessageKind ;
      outOperand2 = element.mAttribute_mStateMessage ;
      outOperand3 = element.mAttribute_mTransitionList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_mapAutomatonMessageKind & outOperand1,
                                        GALGAS_lstring & outOperand2,
                                        GALGAS_mapStateTransitionList & outOperand3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapStateList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStateName ;
      outOperand1 = element.mAttribute_mStateMessageKind ;
      outOperand2 = element.mAttribute_mStateMessage ;
      outOperand3 = element.mAttribute_mTransitionList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_mapAutomatonMessageKind & outOperand1,
                                       GALGAS_lstring & outOperand2,
                                       GALGAS_mapStateTransitionList & outOperand3,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapStateList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStateName ;
      outOperand1 = element.mAttribute_mStateMessageKind ;
      outOperand2 = element.mAttribute_mStateMessage ;
      outOperand3 = element.mAttribute_mTransitionList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList GALGAS_mapStateList::add_operation (const GALGAS_mapStateList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
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

GALGAS_mapStateList GALGAS_mapStateList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_mapStateList (true) ;
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

GALGAS_mapStateList GALGAS_mapStateList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_mapStateList (true) ;
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

GALGAS_mapStateList GALGAS_mapStateList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_mapStateList (true) ;
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

void GALGAS_mapStateList::plusAssign_operation (const GALGAS_mapStateList inOperand,
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

typeComparisonResult GALGAS_mapStateList::objectCompare (const GALGAS_mapStateList & inOperand) const {
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

cEnumerator_mapStateList::cEnumerator_mapStateList (const GALGAS_mapStateList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapStateList::~ cEnumerator_mapStateList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_mapStateList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList_2D_element cEnumerator_mapStateList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapStateList::current_mStateName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateList::current_mStateMessageKind (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mStateMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapStateList::current_mStateMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mStateMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList cEnumerator_mapStateList::current_mTransitionList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTransitionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @mapStateList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateList ("mapStateList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList GALGAS_mapStateList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapStateList result ;
  const GALGAS_mapStateList * p = (const GALGAS_mapStateList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST::GALGAS_mapOverrideBlockDescriptorAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST::~ GALGAS_mapOverrideBlockDescriptorAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideBlockDescriptorAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapOverrideBlockDescriptorAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_mapOverrideBlockDescriptorAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<list @mapOverrideBlockDescriptorAST:" ;
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

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                                      const GALGAS_lstring & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_mapOverrideBlockDescriptorAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_mapOverrideBlockDescriptorAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mLeftState,
                                                                      const GALGAS_lstring & in_mRightState,
                                                                      const GALGAS_lstring & in_mResultingState,
                                                                      const GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                                      const GALGAS_lstring & in_mTransitionMessage
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockDescriptorAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapOverrideBlockDescriptorAST (in_mLeftState,
                                                                   in_mRightState,
                                                                   in_mResultingState,
                                                                   in_mMessageKind,
                                                                   in_mTransitionMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                const GALGAS_lstring & inOperand4
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_mapOverrideBlockDescriptorAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_lstring inOperand2,
                                                                 const GALGAS_mapAutomatonMessageKind inOperand3,
                                                                 const GALGAS_lstring inOperand4,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_mapOverrideBlockDescriptorAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GALGAS_mapOverrideBlockDescriptorAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_mapAutomatonMessageKind & outOperand3,
                                                                 GALGAS_lstring & outOperand4,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_mapOverrideBlockDescriptorAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeftState ;
      outOperand1 = element.mAttribute_mRightState ;
      outOperand2 = element.mAttribute_mResultingState ;
      outOperand3 = element.mAttribute_mMessageKind ;
      outOperand4 = element.mAttribute_mTransitionMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_mapAutomatonMessageKind & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapOverrideBlockDescriptorAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeftState ;
      outOperand1 = element.mAttribute_mRightState ;
      outOperand2 = element.mAttribute_mResultingState ;
      outOperand3 = element.mAttribute_mMessageKind ;
      outOperand4 = element.mAttribute_mTransitionMessage ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_mapAutomatonMessageKind & outOperand3,
                                                           GALGAS_lstring & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapOverrideBlockDescriptorAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeftState ;
      outOperand1 = element.mAttribute_mRightState ;
      outOperand2 = element.mAttribute_mResultingState ;
      outOperand3 = element.mAttribute_mMessageKind ;
      outOperand4 = element.mAttribute_mTransitionMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_mapAutomatonMessageKind & outOperand3,
                                                         GALGAS_lstring & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapOverrideBlockDescriptorAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeftState ;
      outOperand1 = element.mAttribute_mRightState ;
      outOperand2 = element.mAttribute_mResultingState ;
      outOperand3 = element.mAttribute_mMessageKind ;
      outOperand4 = element.mAttribute_mTransitionMessage ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_mapAutomatonMessageKind & outOperand3,
                                                        GALGAS_lstring & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapOverrideBlockDescriptorAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeftState ;
      outOperand1 = element.mAttribute_mRightState ;
      outOperand2 = element.mAttribute_mResultingState ;
      outOperand3 = element.mAttribute_mMessageKind ;
      outOperand4 = element.mAttribute_mTransitionMessage ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::add_operation (const GALGAS_mapOverrideBlockDescriptorAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result ;
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

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_mapOverrideBlockDescriptorAST (true) ;
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

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_mapOverrideBlockDescriptorAST (true) ;
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

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_mapOverrideBlockDescriptorAST (true) ;
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

void GALGAS_mapOverrideBlockDescriptorAST::plusAssign_operation (const GALGAS_mapOverrideBlockDescriptorAST inOperand,
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

typeComparisonResult GALGAS_mapOverrideBlockDescriptorAST::objectCompare (const GALGAS_mapOverrideBlockDescriptorAST & inOperand) const {
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

cEnumerator_mapOverrideBlockDescriptorAST::cEnumerator_mapOverrideBlockDescriptorAST (const GALGAS_mapOverrideBlockDescriptorAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapOverrideBlockDescriptorAST::~ cEnumerator_mapOverrideBlockDescriptorAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapOverrideBlockDescriptorAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapOverrideBlockDescriptorAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_mapOverrideBlockDescriptorAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST_2D_element cEnumerator_mapOverrideBlockDescriptorAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mLeftState (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLeftState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mRightState (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mRightState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mResultingState (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mResultingState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cEnumerator_mapOverrideBlockDescriptorAST::current_mMessageKind (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mTransitionMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTransitionMessage ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mapOverrideBlockDescriptorAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST ("mapOverrideBlockDescriptorAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapOverrideBlockDescriptorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapOverrideBlockDescriptorAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideBlockDescriptorAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  const GALGAS_mapOverrideBlockDescriptorAST * p = (const GALGAS_mapOverrideBlockDescriptorAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideBlockDescriptorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideBlockDescriptorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST::GALGAS_mapOverrideBlockListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST::~ GALGAS_mapOverrideBlockListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideBlockListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapOverrideBlockListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_mapOverrideBlockListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<list @mapOverrideBlockListAST:" ;
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

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapOverrideBlockListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_mapOverrideBlockListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mOverrideBlockName,
                                                                const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                                const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapOverrideBlockListAST (in_mOverrideBlockName,
                                                             in_mMapOverrideBlockDescriptor_31_AST,
                                                             in_mMapOverrideBlockDescriptor_32_AST COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_mapOverrideBlockListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_mapOverrideBlockDescriptorAST inOperand1,
                                                           const GALGAS_mapOverrideBlockDescriptorAST inOperand2,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_mapOverrideBlockListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_mapOverrideBlockListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                           GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_mapOverrideBlockListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideBlockName ;
      outOperand1 = element.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
      outOperand2 = element.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                      GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapOverrideBlockListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideBlockName ;
      outOperand1 = element.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
      outOperand2 = element.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                     GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapOverrideBlockListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideBlockName ;
      outOperand1 = element.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
      outOperand2 = element.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                   GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapOverrideBlockListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideBlockName ;
      outOperand1 = element.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
      outOperand2 = element.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                  GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapOverrideBlockListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideBlockName ;
      outOperand1 = element.mAttribute_mMapOverrideBlockDescriptor_31_AST ;
      outOperand2 = element.mAttribute_mMapOverrideBlockDescriptor_32_AST ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::add_operation (const GALGAS_mapOverrideBlockListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
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

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_mapOverrideBlockListAST (true) ;
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

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_mapOverrideBlockListAST (true) ;
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

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_mapOverrideBlockListAST (true) ;
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

void GALGAS_mapOverrideBlockListAST::plusAssign_operation (const GALGAS_mapOverrideBlockListAST inOperand,
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

typeComparisonResult GALGAS_mapOverrideBlockListAST::objectCompare (const GALGAS_mapOverrideBlockListAST & inOperand) const {
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

cEnumerator_mapOverrideBlockListAST::cEnumerator_mapOverrideBlockListAST (const GALGAS_mapOverrideBlockListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapOverrideBlockListAST::~ cEnumerator_mapOverrideBlockListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapOverrideBlockListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapOverrideBlockListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_mapOverrideBlockListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST_2D_element cEnumerator_mapOverrideBlockListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapOverrideBlockListAST::current_mOverrideBlockName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOverrideBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST cEnumerator_mapOverrideBlockListAST::current_mMapOverrideBlockDescriptor_31_AST (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mMapOverrideBlockDescriptor_31_AST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST cEnumerator_mapOverrideBlockListAST::current_mMapOverrideBlockDescriptor_32_AST (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mMapOverrideBlockDescriptor_32_AST ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapOverrideBlockListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideBlockListAST ("mapOverrideBlockListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapOverrideBlockListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideBlockListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapOverrideBlockListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideBlockListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST result ;
  const GALGAS_mapOverrideBlockListAST * p = (const GALGAS_mapOverrideBlockListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideBlockListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideBlockListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST::GALGAS_sharedMapAttributeListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST::~ GALGAS_sharedMapAttributeListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sharedMapAttributeListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_sharedMapAttributeListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_sharedMapAttributeListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<list @sharedMapAttributeListAST:" ;
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

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_bool & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sharedMapAttributeListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_sharedMapAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mAttributeName,
                                                                  const GALGAS_bool & in_mIsError,
                                                                  const GALGAS_lstring & in_mMessage
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_sharedMapAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sharedMapAttributeListAST (in_mAttributeName,
                                                               in_mIsError,
                                                               in_mMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_lstring & inOperand2
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_sharedMapAttributeListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_bool inOperand1,
                                                             const GALGAS_lstring inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_sharedMapAttributeListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_sharedMapAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_sharedMapAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeName ;
      outOperand1 = element.mAttribute_mIsError ;
      outOperand2 = element.mAttribute_mMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_bool & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_sharedMapAttributeListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeName ;
      outOperand1 = element.mAttribute_mIsError ;
      outOperand2 = element.mAttribute_mMessage ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_bool & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_sharedMapAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeName ;
      outOperand1 = element.mAttribute_mIsError ;
      outOperand2 = element.mAttribute_mMessage ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_bool & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_sharedMapAttributeListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeName ;
      outOperand1 = element.mAttribute_mIsError ;
      outOperand2 = element.mAttribute_mMessage ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_bool & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_sharedMapAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeName ;
      outOperand1 = element.mAttribute_mIsError ;
      outOperand2 = element.mAttribute_mMessage ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::add_operation (const GALGAS_sharedMapAttributeListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result ;
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

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_sharedMapAttributeListAST (true) ;
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

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_sharedMapAttributeListAST (true) ;
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

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_sharedMapAttributeListAST (true) ;
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

void GALGAS_sharedMapAttributeListAST::plusAssign_operation (const GALGAS_sharedMapAttributeListAST inOperand,
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

GALGAS_lstring GALGAS_sharedMapAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mAttributeName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sharedMapAttributeListAST::getter_mIsErrorAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mIsError ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sharedMapAttributeListAST::getter_mMessageAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mMessage ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sharedMapAttributeListAST::objectCompare (const GALGAS_sharedMapAttributeListAST & inOperand) const {
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

cEnumerator_sharedMapAttributeListAST::cEnumerator_sharedMapAttributeListAST (const GALGAS_sharedMapAttributeListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sharedMapAttributeListAST::~ cEnumerator_sharedMapAttributeListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_sharedMapAttributeListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_sharedMapAttributeListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_sharedMapAttributeListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST_2D_element cEnumerator_sharedMapAttributeListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sharedMapAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_sharedMapAttributeListAST::current_mIsError (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mIsError ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sharedMapAttributeListAST::current_mMessage (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mMessage ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @sharedMapAttributeListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapAttributeListAST ("sharedMapAttributeListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sharedMapAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sharedMapAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST result ;
  const GALGAS_sharedMapAttributeListAST * p = (const GALGAS_sharedMapAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@mapStateTransitionSortedList' sorted list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_mapStateTransitionSortedList : public cSortedListElement {
  public : GALGAS_mapStateTransitionSortedList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_mapStateTransitionSortedList (const GALGAS_uint & in_mActionIndex,
                                                            const GALGAS_string & in_mActionName,
                                                            const GALGAS_uint & in_mTargetStateIndex,
                                                            const GALGAS_string & in_mTargetStateName,
                                                            const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                            const GALGAS_string & in_mTransitionMessage
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_mapStateTransitionSortedList::cSortedListElement_mapStateTransitionSortedList (const GALGAS_uint & in_mActionIndex,
                                                                                                  const GALGAS_string & in_mActionName,
                                                                                                  const GALGAS_uint & in_mTargetStateIndex,
                                                                                                  const GALGAS_string & in_mTargetStateName,
                                                                                                  const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                                                                  const GALGAS_string & in_mTransitionMessage
                                                                                                  COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mActionIndex, in_mActionName, in_mTargetStateIndex, in_mTargetStateName, in_mTransitionMessageKind, in_mTransitionMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_mapStateTransitionSortedList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_mapStateTransitionSortedList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_mapStateTransitionSortedList (mObject.mAttribute_mActionIndex, mObject.mAttribute_mActionName, mObject.mAttribute_mTargetStateIndex, mObject.mAttribute_mTargetStateName, mObject.mAttribute_mTransitionMessageKind, mObject.mAttribute_mTransitionMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_mapStateTransitionSortedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionIndex" ":" ;
  mObject.mAttribute_mActionIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mAttribute_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateIndex" ":" ;
  mObject.mAttribute_mTargetStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateName" ":" ;
  mObject.mAttribute_mTargetStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessageKind" ":" ;
  mObject.mAttribute_mTransitionMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessage" ":" ;
  mObject.mAttribute_mTransitionMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_mapStateTransitionSortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_mapStateTransitionSortedList * operand = (cSortedListElement_mapStateTransitionSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateTransitionSortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList::GALGAS_mapStateTransitionSortedList (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_mapStateTransitionSortedList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_mapStateTransitionSortedList * operand = (const cSortedListElement_mapStateTransitionSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateTransitionSortedList) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mActionIndex.objectCompare (operand->mObject.mAttribute_mActionIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList GALGAS_mapStateTransitionSortedList::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_uint & inOperand2,
                                                                                                          const GALGAS_string & inOperand3,
                                                                                                          const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                                          const GALGAS_string & inOperand5
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_mapStateTransitionSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                               const GALGAS_string & inOperand1,
                                                               const GALGAS_uint & inOperand2,
                                                               const GALGAS_string & inOperand3,
                                                               const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                               const GALGAS_string & inOperand5
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_mapStateTransitionSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList::plusAssign_operation (const GALGAS_mapStateTransitionSortedList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList::setter_popSmallest (GALGAS_uint & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_uint & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_mapAutomatonMessageKind & outOperand4,
                                                              GALGAS_string & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mAttribute_mActionIndex ;
    outOperand1 = p->mObject.mAttribute_mActionName ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
    outOperand3 = p->mObject.mAttribute_mTargetStateName ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand5 = p->mObject.mAttribute_mTransitionMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList::setter_popGreatest (GALGAS_uint & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_uint & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_mapAutomatonMessageKind & outOperand4,
                                                              GALGAS_string & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mAttribute_mActionIndex ;
    outOperand1 = p->mObject.mAttribute_mActionName ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
    outOperand3 = p->mObject.mAttribute_mTargetStateName ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand5 = p->mObject.mAttribute_mTransitionMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList::method_smallest (GALGAS_uint & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_uint & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_mapAutomatonMessageKind & outOperand4,
                                                           GALGAS_string & outOperand5,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mAttribute_mActionIndex ;
    outOperand1 = p->mObject.mAttribute_mActionName ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
    outOperand3 = p->mObject.mAttribute_mTargetStateName ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand5 = p->mObject.mAttribute_mTransitionMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList::method_greatest (GALGAS_uint & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_uint & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_mapAutomatonMessageKind & outOperand4,
                                                           GALGAS_string & outOperand5,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mAttribute_mActionIndex ;
    outOperand1 = p->mObject.mAttribute_mActionName ;
    outOperand2 = p->mObject.mAttribute_mTargetStateIndex ;
    outOperand3 = p->mObject.mAttribute_mTargetStateName ;
    outOperand4 = p->mObject.mAttribute_mTransitionMessageKind ;
    outOperand5 = p->mObject.mAttribute_mTransitionMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapStateTransitionSortedList::cEnumerator_mapStateTransitionSortedList (const GALGAS_mapStateTransitionSortedList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapStateTransitionSortedList::~ cEnumerator_mapStateTransitionSortedList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateTransitionSortedList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateTransitionSortedList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_mapStateTransitionSortedList::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element cEnumerator_mapStateTransitionSortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_mapStateTransitionSortedList::current_mActionIndex (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mAttribute_mActionIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_mapStateTransitionSortedList::current_mActionName (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mAttribute_mActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_mapStateTransitionSortedList::current_mTargetStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mAttribute_mTargetStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_mapStateTransitionSortedList::current_mTargetStateName (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mAttribute_mTargetStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateTransitionSortedList::current_mTransitionMessageKind (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mAttribute_mTransitionMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_mapStateTransitionSortedList::current_mTransitionMessage (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mAttribute_mTransitionMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mapStateTransitionSortedList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateTransitionSortedList ("mapStateTransitionSortedList",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateTransitionSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateTransitionSortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateTransitionSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateTransitionSortedList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList GALGAS_mapStateTransitionSortedList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList result ;
  const GALGAS_mapStateTransitionSortedList * p = (const GALGAS_mapStateTransitionSortedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateTransitionSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateTransitionSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@mapStateSortedList' sorted list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_mapStateSortedList : public cSortedListElement {
  public : GALGAS_mapStateSortedList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_mapStateSortedList (const GALGAS_uint & in_mStateIndex,
                                                  const GALGAS_string & in_mStateName,
                                                  const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                  const GALGAS_string & in_mStateMessage,
                                                  const GALGAS_mapStateTransitionSortedList & in_mTransitionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_mapStateSortedList::cSortedListElement_mapStateSortedList (const GALGAS_uint & in_mStateIndex,
                                                                              const GALGAS_string & in_mStateName,
                                                                              const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                                              const GALGAS_string & in_mStateMessage,
                                                                              const GALGAS_mapStateTransitionSortedList & in_mTransitionList
                                                                              COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mStateIndex, in_mStateName, in_mStateMessageKind, in_mStateMessage, in_mTransitionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_mapStateSortedList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_mapStateSortedList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_mapStateSortedList (mObject.mAttribute_mStateIndex, mObject.mAttribute_mStateName, mObject.mAttribute_mStateMessageKind, mObject.mAttribute_mStateMessage, mObject.mAttribute_mTransitionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_mapStateSortedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mObject.mAttribute_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateName" ":" ;
  mObject.mAttribute_mStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessageKind" ":" ;
  mObject.mAttribute_mStateMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessage" ":" ;
  mObject.mAttribute_mStateMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionList" ":" ;
  mObject.mAttribute_mTransitionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_mapStateSortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_mapStateSortedList * operand = (cSortedListElement_mapStateSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateSortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList::GALGAS_mapStateSortedList (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_mapStateSortedList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_mapStateSortedList * operand = (const cSortedListElement_mapStateSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateSortedList) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mStateIndex.objectCompare (operand->mObject.mAttribute_mStateIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList GALGAS_mapStateSortedList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_mapStateSortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList GALGAS_mapStateSortedList::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                      const GALGAS_string & inOperand3,
                                                                                      const GALGAS_mapStateTransitionSortedList & inOperand4
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_mapStateSortedList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_mapStateSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                     const GALGAS_string & inOperand3,
                                                     const GALGAS_mapStateTransitionSortedList & inOperand4
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_mapStateSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList::plusAssign_operation (const GALGAS_mapStateSortedList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList::setter_popSmallest (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_mapAutomatonMessageKind & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    GALGAS_mapStateTransitionSortedList & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateName ;
    outOperand2 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand3 = p->mObject.mAttribute_mStateMessage ;
    outOperand4 = p->mObject.mAttribute_mTransitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList::setter_popGreatest (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_mapAutomatonMessageKind & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    GALGAS_mapStateTransitionSortedList & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateName ;
    outOperand2 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand3 = p->mObject.mAttribute_mStateMessage ;
    outOperand4 = p->mObject.mAttribute_mTransitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList::method_smallest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_mapAutomatonMessageKind & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_mapStateTransitionSortedList & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateName ;
    outOperand2 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand3 = p->mObject.mAttribute_mStateMessage ;
    outOperand4 = p->mObject.mAttribute_mTransitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList::method_greatest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_mapAutomatonMessageKind & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_mapStateTransitionSortedList & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mAttribute_mStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStateName ;
    outOperand2 = p->mObject.mAttribute_mStateMessageKind ;
    outOperand3 = p->mObject.mAttribute_mStateMessage ;
    outOperand4 = p->mObject.mAttribute_mTransitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapStateSortedList::cEnumerator_mapStateSortedList (const GALGAS_mapStateSortedList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapStateSortedList::~ cEnumerator_mapStateSortedList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateSortedList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapStateSortedList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_mapStateSortedList::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element cEnumerator_mapStateSortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_mapStateSortedList::current_mStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_mapStateSortedList::current_mStateName (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mAttribute_mStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateSortedList::current_mStateMessageKind (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mAttribute_mStateMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_mapStateSortedList::current_mStateMessage (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mAttribute_mStateMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList cEnumerator_mapStateSortedList::current_mTransitionList (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mAttribute_mTransitionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @mapStateSortedList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateSortedList ("mapStateSortedList",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateSortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateSortedList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList GALGAS_mapStateSortedList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapStateSortedList result ;
  const GALGAS_mapStateSortedList * p = (const GALGAS_mapStateSortedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_mapAutomatonStateMap::cMapElement_mapAutomatonStateMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_uint & in_mStateIndex,
                                                                    const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mStateIndex (in_mStateIndex),
mAttribute_mStateMessageKind (in_mStateMessageKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_mapAutomatonStateMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mStateIndex.isValid () && mAttribute_mStateMessageKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_mapAutomatonStateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_mapAutomatonStateMap (mAttribute_lkey, mAttribute_mStateIndex, mAttribute_mStateMessageKind COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_mapAutomatonStateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mAttribute_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessageKind" ":" ;
  mAttribute_mStateMessageKind.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_mapAutomatonStateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_mapAutomatonStateMap * operand = (cMapElement_mapAutomatonStateMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStateIndex.objectCompare (operand->mAttribute_mStateIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStateMessageKind.objectCompare (operand->mAttribute_mStateMessageKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap::GALGAS_mapAutomatonStateMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap::GALGAS_mapAutomatonStateMap (const GALGAS_mapAutomatonStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap & GALGAS_mapAutomatonStateMap::operator = (const GALGAS_mapAutomatonStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::constructor_mapWithMapToOverride (const GALGAS_mapAutomatonStateMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_mapAutomatonStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_uint & inArgument0,
                                                       const GALGAS_mapAutomatonMessageKind & inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonStateMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonStateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@mapAutomatonStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_uint inArgument0,
                                                    GALGAS_mapAutomatonMessageKind inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonStateMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonStateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' map automaton state" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_mapAutomatonStateMap_searchKey = "undefined '%K' map automaton state" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_uint & outArgument0,
                                                    GALGAS_mapAutomatonMessageKind & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_mapAutomatonStateMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    outArgument0 = p->mAttribute_mStateIndex ;
    outArgument1 = p->mAttribute_mStateMessageKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapAutomatonStateMap::getter_mStateIndexForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    result = p->mAttribute_mStateIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonStateMap::getter_mStateMessageKindForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) attributes ;
  GALGAS_mapAutomatonMessageKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    result = p->mAttribute_mStateMessageKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap::setter_setMStateIndexForKey (GALGAS_uint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_mapAutomatonStateMap * p = (cMapElement_mapAutomatonStateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    p->mAttribute_mStateIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap::setter_setMStateMessageKindForKey (GALGAS_mapAutomatonMessageKind inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_mapAutomatonStateMap * p = (cMapElement_mapAutomatonStateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    p->mAttribute_mStateMessageKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_mapAutomatonStateMap * GALGAS_mapAutomatonStateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonStateMap * result = (cMapElement_mapAutomatonStateMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_mapAutomatonStateMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapAutomatonStateMap::cEnumerator_mapAutomatonStateMap (const GALGAS_mapAutomatonStateMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapAutomatonStateMap::~ cEnumerator_mapAutomatonStateMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapAutomatonStateMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapAutomatonStateMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_mapAutomatonStateMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element cEnumerator_mapAutomatonStateMap::current (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
  return GALGAS_mapAutomatonStateMap_2D_element (p->mAttribute_lkey, p->mAttribute_mStateIndex, p->mAttribute_mStateMessageKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapAutomatonStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_mapAutomatonStateMap::current_mStateIndex (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
  return p->mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cEnumerator_mapAutomatonStateMap::current_mStateMessageKind (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
  return p->mAttribute_mStateMessageKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mapAutomatonStateMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonStateMap ("mapAutomatonStateMap",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapAutomatonStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonStateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapAutomatonStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonStateMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap result ;
  const GALGAS_mapAutomatonStateMap * p = (const GALGAS_mapAutomatonStateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonStateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonStateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_mapAutomatonActionMap::cMapElement_mapAutomatonActionMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_uint & in_mActionIndex
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mActionIndex (in_mActionIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_mapAutomatonActionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mActionIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_mapAutomatonActionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_mapAutomatonActionMap (mAttribute_lkey, mAttribute_mActionIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_mapAutomatonActionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionIndex" ":" ;
  mAttribute_mActionIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_mapAutomatonActionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_mapAutomatonActionMap * operand = (cMapElement_mapAutomatonActionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActionIndex.objectCompare (operand->mAttribute_mActionIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap::GALGAS_mapAutomatonActionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap::GALGAS_mapAutomatonActionMap (const GALGAS_mapAutomatonActionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap & GALGAS_mapAutomatonActionMap::operator = (const GALGAS_mapAutomatonActionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::constructor_mapWithMapToOverride (const GALGAS_mapAutomatonActionMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_mapAutomatonActionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonActionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_uint & inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonActionMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonActionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@mapAutomatonActionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonActionMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_uint inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonActionMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonActionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' map automaton action" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_mapAutomatonActionMap_searchKey = "undefined '%K' map automaton action" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonActionMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_uint & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_mapAutomatonActionMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
    outArgument0 = p->mAttribute_mActionIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapAutomatonActionMap::getter_mActionIndexForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
    result = p->mAttribute_mActionIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonActionMap::setter_setMActionIndexForKey (GALGAS_uint inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_mapAutomatonActionMap * p = (cMapElement_mapAutomatonActionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
    p->mAttribute_mActionIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_mapAutomatonActionMap * GALGAS_mapAutomatonActionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonActionMap * result = (cMapElement_mapAutomatonActionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_mapAutomatonActionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapAutomatonActionMap::cEnumerator_mapAutomatonActionMap (const GALGAS_mapAutomatonActionMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapAutomatonActionMap::~ cEnumerator_mapAutomatonActionMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapAutomatonActionMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapAutomatonActionMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_mapAutomatonActionMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap_2D_element cEnumerator_mapAutomatonActionMap::current (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
  return GALGAS_mapAutomatonActionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mActionIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_mapAutomatonActionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_mapAutomatonActionMap::current_mActionIndex (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
  return p->mAttribute_mActionIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mapAutomatonActionMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonActionMap ("mapAutomatonActionMap",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapAutomatonActionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonActionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapAutomatonActionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonActionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap result ;
  const GALGAS_mapAutomatonActionMap * p = (const GALGAS_mapAutomatonActionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonActionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonActionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Class for element of '@branchBehaviourSortedListForMapOverride' sorted list                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_branchBehaviourSortedListForMapOverride : public cSortedListElement {
  public : GALGAS_branchBehaviourSortedListForMapOverride_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_branchBehaviourSortedListForMapOverride (const GALGAS_uint & in_mStartStateIndex,
                                                                       const GALGAS_string & in_mStartStateName,
                                                                       const GALGAS_uint & in_mCurrentStateIndex,
                                                                       const GALGAS_string & in_mCurrentStateName,
                                                                       const GALGAS_uint & in_mFinalStateIndex,
                                                                       const GALGAS_string & in_mFinalStateName,
                                                                       const GALGAS_mapAutomatonMessageKind & in_mBehaviourMessageKind,
                                                                       const GALGAS_string & in_mBehaviourMessage
                                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_branchBehaviourSortedListForMapOverride::cSortedListElement_branchBehaviourSortedListForMapOverride (const GALGAS_uint & in_mStartStateIndex,
                                                                                                                        const GALGAS_string & in_mStartStateName,
                                                                                                                        const GALGAS_uint & in_mCurrentStateIndex,
                                                                                                                        const GALGAS_string & in_mCurrentStateName,
                                                                                                                        const GALGAS_uint & in_mFinalStateIndex,
                                                                                                                        const GALGAS_string & in_mFinalStateName,
                                                                                                                        const GALGAS_mapAutomatonMessageKind & in_mBehaviourMessageKind,
                                                                                                                        const GALGAS_string & in_mBehaviourMessage
                                                                                                                        COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mStartStateIndex, in_mStartStateName, in_mCurrentStateIndex, in_mCurrentStateName, in_mFinalStateIndex, in_mFinalStateName, in_mBehaviourMessageKind, in_mBehaviourMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_branchBehaviourSortedListForMapOverride::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_branchBehaviourSortedListForMapOverride::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_branchBehaviourSortedListForMapOverride (mObject.mAttribute_mStartStateIndex, mObject.mAttribute_mStartStateName, mObject.mAttribute_mCurrentStateIndex, mObject.mAttribute_mCurrentStateName, mObject.mAttribute_mFinalStateIndex, mObject.mAttribute_mFinalStateName, mObject.mAttribute_mBehaviourMessageKind, mObject.mAttribute_mBehaviourMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_branchBehaviourSortedListForMapOverride::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartStateIndex" ":" ;
  mObject.mAttribute_mStartStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartStateName" ":" ;
  mObject.mAttribute_mStartStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentStateIndex" ":" ;
  mObject.mAttribute_mCurrentStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentStateName" ":" ;
  mObject.mAttribute_mCurrentStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFinalStateIndex" ":" ;
  mObject.mAttribute_mFinalStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFinalStateName" ":" ;
  mObject.mAttribute_mFinalStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBehaviourMessageKind" ":" ;
  mObject.mAttribute_mBehaviourMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBehaviourMessage" ":" ;
  mObject.mAttribute_mBehaviourMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_branchBehaviourSortedListForMapOverride::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_branchBehaviourSortedListForMapOverride * operand = (cSortedListElement_branchBehaviourSortedListForMapOverride *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride::GALGAS_branchBehaviourSortedListForMapOverride (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_branchBehaviourSortedListForMapOverride::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_branchBehaviourSortedListForMapOverride * operand = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mStartStateIndex.objectCompare (operand->mObject.mAttribute_mStartStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mCurrentStateIndex.objectCompare (operand->mObject.mAttribute_mCurrentStateIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_branchBehaviourSortedListForMapOverride::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_uint & inOperand2,
                                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                                const GALGAS_uint & inOperand4,
                                                                                                                                const GALGAS_string & inOperand5,
                                                                                                                                const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                                                                const GALGAS_string & inOperand7
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_branchBehaviourSortedListForMapOverride (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride::addAssign_operation (const GALGAS_uint & inOperand0,
                                                                          const GALGAS_string & inOperand1,
                                                                          const GALGAS_uint & inOperand2,
                                                                          const GALGAS_string & inOperand3,
                                                                          const GALGAS_uint & inOperand4,
                                                                          const GALGAS_string & inOperand5,
                                                                          const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                          const GALGAS_string & inOperand7
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_branchBehaviourSortedListForMapOverride (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride::plusAssign_operation (const GALGAS_branchBehaviourSortedListForMapOverride inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride::setter_popSmallest (GALGAS_uint & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         GALGAS_uint & outOperand2,
                                                                         GALGAS_string & outOperand3,
                                                                         GALGAS_uint & outOperand4,
                                                                         GALGAS_string & outOperand5,
                                                                         GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                         GALGAS_string & outOperand7,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mAttribute_mStartStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStartStateName ;
    outOperand2 = p->mObject.mAttribute_mCurrentStateIndex ;
    outOperand3 = p->mObject.mAttribute_mCurrentStateName ;
    outOperand4 = p->mObject.mAttribute_mFinalStateIndex ;
    outOperand5 = p->mObject.mAttribute_mFinalStateName ;
    outOperand6 = p->mObject.mAttribute_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mAttribute_mBehaviourMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride::setter_popGreatest (GALGAS_uint & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         GALGAS_uint & outOperand2,
                                                                         GALGAS_string & outOperand3,
                                                                         GALGAS_uint & outOperand4,
                                                                         GALGAS_string & outOperand5,
                                                                         GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                         GALGAS_string & outOperand7,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mAttribute_mStartStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStartStateName ;
    outOperand2 = p->mObject.mAttribute_mCurrentStateIndex ;
    outOperand3 = p->mObject.mAttribute_mCurrentStateName ;
    outOperand4 = p->mObject.mAttribute_mFinalStateIndex ;
    outOperand5 = p->mObject.mAttribute_mFinalStateName ;
    outOperand6 = p->mObject.mAttribute_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mAttribute_mBehaviourMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride::method_smallest (GALGAS_uint & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_uint & outOperand2,
                                                                      GALGAS_string & outOperand3,
                                                                      GALGAS_uint & outOperand4,
                                                                      GALGAS_string & outOperand5,
                                                                      GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                      GALGAS_string & outOperand7,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mAttribute_mStartStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStartStateName ;
    outOperand2 = p->mObject.mAttribute_mCurrentStateIndex ;
    outOperand3 = p->mObject.mAttribute_mCurrentStateName ;
    outOperand4 = p->mObject.mAttribute_mFinalStateIndex ;
    outOperand5 = p->mObject.mAttribute_mFinalStateName ;
    outOperand6 = p->mObject.mAttribute_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mAttribute_mBehaviourMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride::method_greatest (GALGAS_uint & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_uint & outOperand2,
                                                                      GALGAS_string & outOperand3,
                                                                      GALGAS_uint & outOperand4,
                                                                      GALGAS_string & outOperand5,
                                                                      GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                      GALGAS_string & outOperand7,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mAttribute_mStartStateIndex ;
    outOperand1 = p->mObject.mAttribute_mStartStateName ;
    outOperand2 = p->mObject.mAttribute_mCurrentStateIndex ;
    outOperand3 = p->mObject.mAttribute_mCurrentStateName ;
    outOperand4 = p->mObject.mAttribute_mFinalStateIndex ;
    outOperand5 = p->mObject.mAttribute_mFinalStateName ;
    outOperand6 = p->mObject.mAttribute_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mAttribute_mBehaviourMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_branchBehaviourSortedListForMapOverride::cEnumerator_branchBehaviourSortedListForMapOverride (const GALGAS_branchBehaviourSortedListForMapOverride & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_branchBehaviourSortedListForMapOverride::~ cEnumerator_branchBehaviourSortedListForMapOverride (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_branchBehaviourSortedListForMapOverride::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_branchBehaviourSortedListForMapOverride::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_branchBehaviourSortedListForMapOverride::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element cEnumerator_branchBehaviourSortedListForMapOverride::current (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_branchBehaviourSortedListForMapOverride::current_mStartStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mStartStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mStartStateName (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mStartStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_branchBehaviourSortedListForMapOverride::current_mCurrentStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mCurrentStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mCurrentStateName (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mCurrentStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_branchBehaviourSortedListForMapOverride::current_mFinalStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mFinalStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mFinalStateName (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mFinalStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind cEnumerator_branchBehaviourSortedListForMapOverride::current_mBehaviourMessageKind (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mBehaviourMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mBehaviourMessage (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mAttribute_mBehaviourMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @branchBehaviourSortedListForMapOverride type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride ("branchBehaviourSortedListForMapOverride",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchBehaviourSortedListForMapOverride::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchBehaviourSortedListForMapOverride::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchBehaviourSortedListForMapOverride (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_branchBehaviourSortedListForMapOverride::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  const GALGAS_branchBehaviourSortedListForMapOverride * p = (const GALGAS_branchBehaviourSortedListForMapOverride *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchBehaviourSortedListForMapOverride *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchBehaviourSortedListForMapOverride", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList::GALGAS_mapOverrideList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList::~ GALGAS_mapOverrideList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList GALGAS_mapOverrideList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapOverrideList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_mapOverrideList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<list @mapOverrideList:" ;
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

GALGAS_mapOverrideList GALGAS_mapOverrideList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                          const GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                                          const GALGAS_branchBehaviourSortedListForMapOverride & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapOverrideList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_mapOverrideList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_string & in_mOverrideName,
                                                        const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchBehaviourSortedListForMapOverride,
                                                        const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchCombinationSortedListForMapOverride
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideList * p = NULL ;
  macroMyNew (p, cCollectionElement_mapOverrideList (in_mOverrideName,
                                                     in_mBranchBehaviourSortedListForMapOverride,
                                                     in_mBranchCombinationSortedListForMapOverride COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList::addAssign_operation (const GALGAS_string & inOperand0,
                                                  const GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                  const GALGAS_branchBehaviourSortedListForMapOverride & inOperand2
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_mapOverrideList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                   const GALGAS_branchBehaviourSortedListForMapOverride inOperand1,
                                                   const GALGAS_branchBehaviourSortedListForMapOverride inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_mapOverrideList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_mapOverrideList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                   GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                                   GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_mapOverrideList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideName ;
      outOperand1 = element.mAttribute_mBranchBehaviourSortedListForMapOverride ;
      outOperand2 = element.mAttribute_mBranchCombinationSortedListForMapOverride ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList::setter_popFirst (GALGAS_string & outOperand0,
                                              GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                              GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapOverrideList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideName ;
      outOperand1 = element.mAttribute_mBranchBehaviourSortedListForMapOverride ;
      outOperand2 = element.mAttribute_mBranchCombinationSortedListForMapOverride ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList::setter_popLast (GALGAS_string & outOperand0,
                                             GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                             GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapOverrideList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideName ;
      outOperand1 = element.mAttribute_mBranchBehaviourSortedListForMapOverride ;
      outOperand2 = element.mAttribute_mBranchCombinationSortedListForMapOverride ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList::method_first (GALGAS_string & outOperand0,
                                           GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                           GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_mapOverrideList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideName ;
      outOperand1 = element.mAttribute_mBranchBehaviourSortedListForMapOverride ;
      outOperand2 = element.mAttribute_mBranchCombinationSortedListForMapOverride ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList::method_last (GALGAS_string & outOperand0,
                                          GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                          GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_mapOverrideList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOverrideName ;
      outOperand1 = element.mAttribute_mBranchBehaviourSortedListForMapOverride ;
      outOperand2 = element.mAttribute_mBranchCombinationSortedListForMapOverride ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList GALGAS_mapOverrideList::add_operation (const GALGAS_mapOverrideList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result ;
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

GALGAS_mapOverrideList GALGAS_mapOverrideList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_mapOverrideList (true) ;
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

GALGAS_mapOverrideList GALGAS_mapOverrideList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_mapOverrideList (true) ;
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

GALGAS_mapOverrideList GALGAS_mapOverrideList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_mapOverrideList (true) ;
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

void GALGAS_mapOverrideList::plusAssign_operation (const GALGAS_mapOverrideList inOperand,
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

GALGAS_string GALGAS_mapOverrideList::getter_mOverrideNameAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOverrideName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_mapOverrideList::getter_mBranchBehaviourSortedListForMapOverrideAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mBranchBehaviourSortedListForMapOverride ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_mapOverrideList::getter_mBranchCombinationSortedListForMapOverrideAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                 C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mBranchCombinationSortedListForMapOverride ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapOverrideList::objectCompare (const GALGAS_mapOverrideList & inOperand) const {
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

cEnumerator_mapOverrideList::cEnumerator_mapOverrideList (const GALGAS_mapOverrideList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mapOverrideList::~ cEnumerator_mapOverrideList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapOverrideList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_mapOverrideList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_mapOverrideList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList_2D_element cEnumerator_mapOverrideList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_mapOverrideList::current_mOverrideName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOverrideName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride cEnumerator_mapOverrideList::current_mBranchBehaviourSortedListForMapOverride (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mBranchBehaviourSortedListForMapOverride ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride cEnumerator_mapOverrideList::current_mBranchCombinationSortedListForMapOverride (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mBranchCombinationSortedListForMapOverride ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @mapOverrideList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideList ("mapOverrideList",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapOverrideList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapOverrideList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList GALGAS_mapOverrideList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideList result ;
  const GALGAS_mapOverrideList * p = (const GALGAS_mapOverrideList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST::GALGAS_sortedListSortDescriptorListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST::~ GALGAS_sortedListSortDescriptorListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortedListSortDescriptorListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_sortedListSortDescriptorListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_sortedListSortDescriptorListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<list @sortedListSortDescriptorListAST:" ;
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

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_bool & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedListSortDescriptorListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_sortedListSortDescriptorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mSortedAttributeName,
                                                                        const GALGAS_bool & in_mAscending
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (in_mSortedAttributeName,
                                                                     in_mAscending COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_bool & inOperand1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_sortedListSortDescriptorListAST_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_bool inOperand1,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_sortedListSortDescriptorListAST_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_sortedListSortDescriptorListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_bool & outOperand1,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_sortedListSortDescriptorListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSortedAttributeName ;
      outOperand1 = element.mAttribute_mAscending ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_sortedListSortDescriptorListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSortedAttributeName ;
      outOperand1 = element.mAttribute_mAscending ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_sortedListSortDescriptorListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSortedAttributeName ;
      outOperand1 = element.mAttribute_mAscending ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_sortedListSortDescriptorListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSortedAttributeName ;
      outOperand1 = element.mAttribute_mAscending ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_bool & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_sortedListSortDescriptorListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSortedAttributeName ;
      outOperand1 = element.mAttribute_mAscending ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::add_operation (const GALGAS_sortedListSortDescriptorListAST & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
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

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_sortedListSortDescriptorListAST (true) ;
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

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_sortedListSortDescriptorListAST (true) ;
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

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_sortedListSortDescriptorListAST (true) ;
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

void GALGAS_sortedListSortDescriptorListAST::plusAssign_operation (const GALGAS_sortedListSortDescriptorListAST inOperand,
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

typeComparisonResult GALGAS_sortedListSortDescriptorListAST::objectCompare (const GALGAS_sortedListSortDescriptorListAST & inOperand) const {
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

cEnumerator_sortedListSortDescriptorListAST::cEnumerator_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sortedListSortDescriptorListAST::~ cEnumerator_sortedListSortDescriptorListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_sortedListSortDescriptorListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_sortedListSortDescriptorListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_sortedListSortDescriptorListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST_2D_element cEnumerator_sortedListSortDescriptorListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sortedListSortDescriptorListAST::current_mSortedAttributeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mSortedAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_sortedListSortDescriptorListAST::current_mAscending (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAscending ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @sortedListSortDescriptorListAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ("sortedListSortDescriptorListAST",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedListSortDescriptorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedListSortDescriptorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListSortDescriptorListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST result ;
  const GALGAS_sortedListSortDescriptorListAST * p = (const GALGAS_sortedListSortDescriptorListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListSortDescriptorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration::GALGAS_sortDescriptorListForGeneration (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration::~ GALGAS_sortDescriptorListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortDescriptorListForGeneration (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_sortDescriptorListForGeneration::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_sortDescriptorListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<list @sortDescriptorListForGeneration:" ;
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

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_bool & inOperand2
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sortDescriptorListForGeneration (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_sortDescriptorListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeIndex,
                                                                        const GALGAS_string & in_mAttributeName,
                                                                        const GALGAS_bool & in_mAscendingOrder
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (in_mAttributeTypeIndex,
                                                                     in_mAttributeName,
                                                                     in_mAscendingOrder COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_bool & inOperand2
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_sortDescriptorListForGeneration_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                                   const GALGAS_string inOperand1,
                                                                   const GALGAS_bool inOperand2,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_sortDescriptorListForGeneration_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_sortDescriptorListForGeneration::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   GALGAS_bool & outOperand2,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_sortDescriptorListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeIndex ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mAscendingOrder ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_sortDescriptorListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeIndex ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mAscendingOrder ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_sortDescriptorListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeIndex ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mAscendingOrder ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_bool & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_sortDescriptorListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeIndex ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mAscendingOrder ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_bool & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_sortDescriptorListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeIndex ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mAscendingOrder ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::add_operation (const GALGAS_sortDescriptorListForGeneration & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
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

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_sortDescriptorListForGeneration (true) ;
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

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_sortDescriptorListForGeneration (true) ;
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

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_sortDescriptorListForGeneration (true) ;
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

void GALGAS_sortDescriptorListForGeneration::plusAssign_operation (const GALGAS_sortDescriptorListForGeneration inOperand,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sortDescriptorListForGeneration::getter_mAttributeTypeIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mAttributeTypeIndex ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sortDescriptorListForGeneration::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mAttributeName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sortDescriptorListForGeneration::getter_mAscendingOrderAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mAscendingOrder ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortDescriptorListForGeneration::objectCompare (const GALGAS_sortDescriptorListForGeneration & inOperand) const {
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

cEnumerator_sortDescriptorListForGeneration::cEnumerator_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sortDescriptorListForGeneration::~ cEnumerator_sortDescriptorListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_sortDescriptorListForGeneration::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_sortDescriptorListForGeneration::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_sortDescriptorListForGeneration::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element cEnumerator_sortDescriptorListForGeneration::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_sortDescriptorListForGeneration::current_mAttributeTypeIndex (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAttributeTypeIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_sortDescriptorListForGeneration::current_mAttributeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_sortDescriptorListForGeneration::current_mAscendingOrder (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAscendingOrder ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @sortDescriptorListForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ("sortDescriptorListForGeneration",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortDescriptorListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortDescriptorListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortDescriptorListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration result ;
  const GALGAS_sortDescriptorListForGeneration * p = (const GALGAS_sortDescriptorListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortDescriptorListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST::GALGAS_formalInputParameterListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST::~ GALGAS_formalInputParameterListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_formalInputParameterListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_formalInputParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<list @formalInputParameterListAST:" ;
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

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_bool & inOperand3,
                                                                                                  const GALGAS_bool & inOperand4
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_formalInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                    const GALGAS_bool & in_mIsUnused,
                                                                    const GALGAS_bool & in_mIsConstant
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_formalInputParameterListAST (in_mFormalSelector,
                                                                 in_mFormalArgumentTypeName,
                                                                 in_mFormalArgumentName,
                                                                 in_mIsUnused,
                                                                 in_mIsConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2,
                                                              const GALGAS_bool & inOperand3,
                                                              const GALGAS_bool & inOperand4
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalInputParameterListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstring inOperand2,
                                                               const GALGAS_bool inOperand3,
                                                               const GALGAS_bool inOperand4,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalInputParameterListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GALGAS_formalInputParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_formalInputParameterListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = element.mAttribute_mFormalArgumentName ;
      outOperand3 = element.mAttribute_mIsUnused ;
      outOperand4 = element.mAttribute_mIsConstant ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_bool & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalInputParameterListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = element.mAttribute_mFormalArgumentName ;
      outOperand3 = element.mAttribute_mIsUnused ;
      outOperand4 = element.mAttribute_mIsConstant ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_bool & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalInputParameterListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = element.mAttribute_mFormalArgumentName ;
      outOperand3 = element.mAttribute_mIsUnused ;
      outOperand4 = element.mAttribute_mIsConstant ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       GALGAS_bool & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalInputParameterListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = element.mAttribute_mFormalArgumentName ;
      outOperand3 = element.mAttribute_mIsUnused ;
      outOperand4 = element.mAttribute_mIsConstant ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalInputParameterListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = element.mAttribute_mFormalArgumentName ;
      outOperand3 = element.mAttribute_mIsUnused ;
      outOperand4 = element.mAttribute_mIsConstant ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::add_operation (const GALGAS_formalInputParameterListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
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

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_formalInputParameterListAST (true) ;
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

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_formalInputParameterListAST (true) ;
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

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_formalInputParameterListAST (true) ;
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

void GALGAS_formalInputParameterListAST::plusAssign_operation (const GALGAS_formalInputParameterListAST inOperand,
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

typeComparisonResult GALGAS_formalInputParameterListAST::objectCompare (const GALGAS_formalInputParameterListAST & inOperand) const {
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

cEnumerator_formalInputParameterListAST::cEnumerator_formalInputParameterListAST (const GALGAS_formalInputParameterListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalInputParameterListAST::~ cEnumerator_formalInputParameterListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalInputParameterListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalInputParameterListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_formalInputParameterListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element cEnumerator_formalInputParameterListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mIsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsConstant (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mIsConstant ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @formalInputParameterListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListAST ("formalInputParameterListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST result ;
  const GALGAS_formalInputParameterListAST * p = (const GALGAS_formalInputParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration::GALGAS_formalInputParameterListForGeneration (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration::~ GALGAS_formalInputParameterListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_formalInputParameterListForGeneration::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_formalInputParameterListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<list @formalInputParameterListForGeneration:" ;
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

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                      const GALGAS_lstring & inOperand3,
                                                                                                                      const GALGAS_bool & inOperand4
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListForGeneration (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
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
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_lstring & inOperand3,
                                                                        const GALGAS_bool & inOperand4
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalInputParameterListForGeneration_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                                         const GALGAS_string inOperand2,
                                                                         const GALGAS_lstring inOperand3,
                                                                         const GALGAS_bool inOperand4,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalInputParameterListForGeneration_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GALGAS_formalInputParameterListForGeneration::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         GALGAS_lstring & outOperand3,
                                                                         GALGAS_bool & outOperand4,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_formalInputParameterListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentType ;
      outOperand2 = element.mAttribute_mFormalArgumentCppName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsConstant ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalInputParameterListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentType ;
      outOperand2 = element.mAttribute_mFormalArgumentCppName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsConstant ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::setter_popLast (GALGAS_lstring & outOperand0,
                                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_lstring & outOperand3,
                                                                   GALGAS_bool & outOperand4,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalInputParameterListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentType ;
      outOperand2 = element.mAttribute_mFormalArgumentCppName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsConstant ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalInputParameterListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentType ;
      outOperand2 = element.mAttribute_mFormalArgumentCppName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsConstant ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalInputParameterListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentType ;
      outOperand2 = element.mAttribute_mFormalArgumentCppName ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mIsConstant ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::add_operation (const GALGAS_formalInputParameterListForGeneration & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
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

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_formalInputParameterListForGeneration (true) ;
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

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_formalInputParameterListForGeneration (true) ;
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

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_formalInputParameterListForGeneration (true) ;
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

void GALGAS_formalInputParameterListForGeneration::plusAssign_operation (const GALGAS_formalInputParameterListForGeneration inOperand,
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

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalSelector ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalArgumentType ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalArgumentCppName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalArgumentName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListForGeneration::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mIsConstant ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalInputParameterListForGeneration::objectCompare (const GALGAS_formalInputParameterListForGeneration & inOperand) const {
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

cEnumerator_formalInputParameterListForGeneration::cEnumerator_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalInputParameterListForGeneration::~ cEnumerator_formalInputParameterListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalInputParameterListForGeneration::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalInputParameterListForGeneration::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_formalInputParameterListForGeneration::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element cEnumerator_formalInputParameterListForGeneration::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalInputParameterListForGeneration::current_mIsConstant (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mIsConstant ;
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

GALGAS_formalParameterListForGeneration::GALGAS_formalParameterListForGeneration (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration::~ GALGAS_formalParameterListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListForGeneration (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_formalParameterListForGeneration::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_formalParameterListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<list @formalParameterListForGeneration:" ;
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

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                            const GALGAS_lstring & inOperand3,
                                                                                                            const GALGAS_string & inOperand4
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListForGeneration (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
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
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                   const GALGAS_lstring & inOperand3,
                                                                   const GALGAS_string & inOperand4
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalParameterListForGeneration_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                                    const GALGAS_lstring inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_formalParameterListForGeneration_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GALGAS_formalParameterListForGeneration::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_formalParameterListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentType ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mFormalArgumentCppName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                               GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalParameterListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentType ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mFormalArgumentCppName ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                              GALGAS_lstring & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalParameterListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentType ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mFormalArgumentCppName ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_formalParameterListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentType ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mFormalArgumentCppName ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_formalParameterListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mFormalSelector ;
      outOperand1 = element.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = element.mAttribute_mFormalArgumentType ;
      outOperand3 = element.mAttribute_mFormalArgumentName ;
      outOperand4 = element.mAttribute_mFormalArgumentCppName ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::add_operation (const GALGAS_formalParameterListForGeneration & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
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

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_formalParameterListForGeneration (true) ;
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

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_formalParameterListForGeneration (true) ;
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

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_formalParameterListForGeneration (true) ;
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

void GALGAS_formalParameterListForGeneration::plusAssign_operation (const GALGAS_formalParameterListForGeneration inOperand,
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

GALGAS_lstring GALGAS_formalParameterListForGeneration::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalSelector ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListForGeneration::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_formalArgumentPassingModeAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalArgumentPassingMode ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalArgumentType ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalArgumentName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalArgumentCppName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalParameterListForGeneration::objectCompare (const GALGAS_formalParameterListForGeneration & inOperand) const {
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

cEnumerator_formalParameterListForGeneration::cEnumerator_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalParameterListForGeneration::~ cEnumerator_formalParameterListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalParameterListForGeneration::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_formalParameterListForGeneration::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_formalParameterListForGeneration::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element cEnumerator_formalParameterListForGeneration::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListForGeneration::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_formalParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_formalParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalArgumentCppName ;
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

GALGAS_semanticInstructionListAST::GALGAS_semanticInstructionListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST::~ GALGAS_semanticInstructionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticInstructionListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_semanticInstructionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<list @semanticInstructionListAST:" ;
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

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::constructor_listWithValue (const GALGAS_semanticInstructionAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListAST (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_semanticInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_semanticInstructionAST & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::addAssign_operation (const GALGAS_semanticInstructionAST & inOperand0
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_semanticInstructionListAST_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::setter_insertAtIndex (const GALGAS_semanticInstructionAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_semanticInstructionListAST_2D_element element (inOperand0) ;
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

void GALGAS_semanticInstructionListAST::setter_removeAtIndex (GALGAS_semanticInstructionAST & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_semanticInstructionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::setter_popFirst (GALGAS_semanticInstructionAST & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_semanticInstructionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::setter_popLast (GALGAS_semanticInstructionAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_semanticInstructionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::method_first (GALGAS_semanticInstructionAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_semanticInstructionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST::method_last (GALGAS_semanticInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_semanticInstructionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::add_operation (const GALGAS_semanticInstructionListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
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

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_semanticInstructionListAST (true) ;
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

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_semanticInstructionListAST (true) ;
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

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_semanticInstructionListAST (true) ;
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

void GALGAS_semanticInstructionListAST::plusAssign_operation (const GALGAS_semanticInstructionListAST inOperand,
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

typeComparisonResult GALGAS_semanticInstructionListAST::objectCompare (const GALGAS_semanticInstructionListAST & inOperand) const {
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

cEnumerator_semanticInstructionListAST::cEnumerator_semanticInstructionListAST (const GALGAS_semanticInstructionListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticInstructionListAST::~ cEnumerator_semanticInstructionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_semanticInstructionListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_semanticInstructionListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_semanticInstructionListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element cEnumerator_semanticInstructionListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionAST cEnumerator_semanticInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticInstructionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListAST ("semanticInstructionListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST result ;
  const GALGAS_semanticInstructionListAST * p = (const GALGAS_semanticInstructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration::GALGAS_semanticInstructionListForGeneration (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration::~ GALGAS_semanticInstructionListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListForGeneration (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticInstructionListForGeneration::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_semanticInstructionListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<list @semanticInstructionListForGeneration:" ;
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

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::constructor_listWithValue (const GALGAS_semanticInstructionForGeneration & inOperand0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListForGeneration (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_semanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::addAssign_operation (const GALGAS_semanticInstructionForGeneration & inOperand0
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_semanticInstructionListForGeneration_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::setter_insertAtIndex (const GALGAS_semanticInstructionForGeneration inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_semanticInstructionListForGeneration_2D_element element (inOperand0) ;
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

void GALGAS_semanticInstructionListForGeneration::setter_removeAtIndex (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_semanticInstructionListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::setter_popFirst (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_semanticInstructionListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::setter_popLast (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_semanticInstructionListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::method_first (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_semanticInstructionListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::method_last (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_semanticInstructionListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mInstruction ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::add_operation (const GALGAS_semanticInstructionListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
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

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_semanticInstructionListForGeneration (true) ;
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

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_semanticInstructionListForGeneration (true) ;
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

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_semanticInstructionListForGeneration (true) ;
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

void GALGAS_semanticInstructionListForGeneration::plusAssign_operation (const GALGAS_semanticInstructionListForGeneration inOperand,
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

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionListForGeneration::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mInstruction ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticInstructionListForGeneration::objectCompare (const GALGAS_semanticInstructionListForGeneration & inOperand) const {
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

cEnumerator_semanticInstructionListForGeneration::cEnumerator_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticInstructionListForGeneration::~ cEnumerator_semanticInstructionListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_semanticInstructionListForGeneration::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_semanticInstructionListForGeneration::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_semanticInstructionListForGeneration::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element cEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionForGeneration cEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mInstruction ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_semanticExpressionAST::objectCompare (const GALGAS_semanticExpressionAST & inOperand) const {
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

GALGAS_semanticExpressionAST::GALGAS_semanticExpressionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST::GALGAS_semanticExpressionAST (const cPtr_semanticExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @semanticExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticExpressionAST::cPtr_semanticExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @semanticExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionAST ("semanticExpressionAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_semanticExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionAST result ;
  const GALGAS_semanticExpressionAST * p = (const GALGAS_semanticExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList::GALGAS_actualOutputExpressionList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList::~ GALGAS_actualOutputExpressionList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualOutputExpressionList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_actualOutputExpressionList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_actualOutputExpressionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<list @actualOutputExpressionList:" ;
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

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_semanticExpressionAST & inOperand1,
                                                                                                const GALGAS_location & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actualOutputExpressionList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_actualOutputExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mActualSelector,
                                                                   const GALGAS_semanticExpressionAST & in_mExpression,
                                                                   const GALGAS_location & in_mEndOfExpressionLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_actualOutputExpressionList (in_mActualSelector,
                                                                in_mExpression,
                                                                in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_semanticExpressionAST & inOperand1,
                                                             const GALGAS_location & inOperand2
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_actualOutputExpressionList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_semanticExpressionAST inOperand1,
                                                              const GALGAS_location inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_actualOutputExpressionList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_actualOutputExpressionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_semanticExpressionAST & outOperand1,
                                                              GALGAS_location & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_actualOutputExpressionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActualSelector ;
      outOperand1 = element.mAttribute_mExpression ;
      outOperand2 = element.mAttribute_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_semanticExpressionAST & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_actualOutputExpressionList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActualSelector ;
      outOperand1 = element.mAttribute_mExpression ;
      outOperand2 = element.mAttribute_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_semanticExpressionAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_actualOutputExpressionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActualSelector ;
      outOperand1 = element.mAttribute_mExpression ;
      outOperand2 = element.mAttribute_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_semanticExpressionAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_actualOutputExpressionList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActualSelector ;
      outOperand1 = element.mAttribute_mExpression ;
      outOperand2 = element.mAttribute_mEndOfExpressionLocation ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_semanticExpressionAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_actualOutputExpressionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mActualSelector ;
      outOperand1 = element.mAttribute_mExpression ;
      outOperand2 = element.mAttribute_mEndOfExpressionLocation ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::add_operation (const GALGAS_actualOutputExpressionList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
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

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_actualOutputExpressionList (true) ;
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

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_actualOutputExpressionList (true) ;
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

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_actualOutputExpressionList (true) ;
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

void GALGAS_actualOutputExpressionList::plusAssign_operation (const GALGAS_actualOutputExpressionList inOperand,
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

typeComparisonResult GALGAS_actualOutputExpressionList::objectCompare (const GALGAS_actualOutputExpressionList & inOperand) const {
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

cEnumerator_actualOutputExpressionList::cEnumerator_actualOutputExpressionList (const GALGAS_actualOutputExpressionList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_actualOutputExpressionList::~ cEnumerator_actualOutputExpressionList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_actualOutputExpressionList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_actualOutputExpressionList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_actualOutputExpressionList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList_2D_element cEnumerator_actualOutputExpressionList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_actualOutputExpressionList::current_mActualSelector (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cEnumerator_actualOutputExpressionList::current_mExpression (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_actualOutputExpressionList::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mEndOfExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @actualOutputExpressionList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualOutputExpressionList ("actualOutputExpressionList",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualOutputExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualOutputExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualOutputExpressionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList result ;
  const GALGAS_actualOutputExpressionList * p = (const GALGAS_actualOutputExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualOutputExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST::GALGAS_semanticExpressionListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST::~ GALGAS_semanticExpressionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticExpressionListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticExpressionListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_semanticExpressionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<list @semanticExpressionListAST:" ;
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

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::constructor_listWithValue (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                              const GALGAS_location & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticExpressionListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_semanticExpressionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_semanticExpressionAST & in_mExpression,
                                                                  const GALGAS_location & in_mEndOfExpressionLocation
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticExpressionListAST (in_mExpression,
                                                               in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::addAssign_operation (const GALGAS_semanticExpressionAST & inOperand0,
                                                            const GALGAS_location & inOperand1
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_semanticExpressionListAST_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::setter_insertAtIndex (const GALGAS_semanticExpressionAST inOperand0,
                                                             const GALGAS_location inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_semanticExpressionListAST_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_semanticExpressionListAST::setter_removeAtIndex (GALGAS_semanticExpressionAST & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_semanticExpressionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mExpression ;
      outOperand1 = element.mAttribute_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::setter_popFirst (GALGAS_semanticExpressionAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_semanticExpressionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mExpression ;
      outOperand1 = element.mAttribute_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::setter_popLast (GALGAS_semanticExpressionAST & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_semanticExpressionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mExpression ;
      outOperand1 = element.mAttribute_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::method_first (GALGAS_semanticExpressionAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_semanticExpressionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mExpression ;
      outOperand1 = element.mAttribute_mEndOfExpressionLocation ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST::method_last (GALGAS_semanticExpressionAST & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_semanticExpressionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mExpression ;
      outOperand1 = element.mAttribute_mEndOfExpressionLocation ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::add_operation (const GALGAS_semanticExpressionListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result ;
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

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_semanticExpressionListAST (true) ;
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

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_semanticExpressionListAST (true) ;
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

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_semanticExpressionListAST (true) ;
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

void GALGAS_semanticExpressionListAST::plusAssign_operation (const GALGAS_semanticExpressionListAST inOperand,
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

typeComparisonResult GALGAS_semanticExpressionListAST::objectCompare (const GALGAS_semanticExpressionListAST & inOperand) const {
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

cEnumerator_semanticExpressionListAST::cEnumerator_semanticExpressionListAST (const GALGAS_semanticExpressionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticExpressionListAST::~ cEnumerator_semanticExpressionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_semanticExpressionListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_semanticExpressionListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_semanticExpressionListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element cEnumerator_semanticExpressionListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cEnumerator_semanticExpressionListAST::current_mExpression (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_semanticExpressionListAST::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mEndOfExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @semanticExpressionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListAST ("semanticExpressionListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST result ;
  const GALGAS_semanticExpressionListAST * p = (const GALGAS_semanticExpressionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfCopyInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfCopyInExpressionAST * p = (const cPtr_selfCopyInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfCopyInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelfLocation.objectCompare (p->mAttribute_mSelfLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfCopyInExpressionAST::objectCompare (const GALGAS_selfCopyInExpressionAST & inOperand) const {
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

GALGAS_selfCopyInExpressionAST::GALGAS_selfCopyInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfCopyInExpressionAST GALGAS_selfCopyInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfCopyInExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfCopyInExpressionAST::GALGAS_selfCopyInExpressionAST (const cPtr_selfCopyInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfCopyInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfCopyInExpressionAST GALGAS_selfCopyInExpressionAST::constructor_new (const GALGAS_location & inAttribute_mSelfLocation
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfCopyInExpressionAST result ;
  if (inAttribute_mSelfLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfCopyInExpressionAST (inAttribute_mSelfLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_selfCopyInExpressionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfCopyInExpressionAST * p = (const cPtr_selfCopyInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfCopyInExpressionAST) ;
    result = p->mAttribute_mSelfLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_selfCopyInExpressionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @selfCopyInExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfCopyInExpressionAST::cPtr_selfCopyInExpressionAST (const GALGAS_location & in_mSelfLocation
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mSelfLocation (in_mSelfLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfCopyInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfCopyInExpressionAST ;
}

void cPtr_selfCopyInExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@selfCopyInExpressionAST:" ;
  mAttribute_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfCopyInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfCopyInExpressionAST (mAttribute_mSelfLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @selfCopyInExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfCopyInExpressionAST ("selfCopyInExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfCopyInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfCopyInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfCopyInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfCopyInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfCopyInExpressionAST GALGAS_selfCopyInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selfCopyInExpressionAST result ;
  const GALGAS_selfCopyInExpressionAST * p = (const GALGAS_selfCopyInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfCopyInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfCopyInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_trueExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_trueExpressionAST * p = (const cPtr_trueExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_trueExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_trueExpressionAST::objectCompare (const GALGAS_trueExpressionAST & inOperand) const {
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

GALGAS_trueExpressionAST::GALGAS_trueExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionAST::GALGAS_trueExpressionAST (const cPtr_trueExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_trueExpressionAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_trueExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_trueExpressionAST * p = (const cPtr_trueExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_trueExpressionAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_trueExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @trueExpressionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_trueExpressionAST::cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_trueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

void cPtr_trueExpressionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@trueExpressionAST:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_trueExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpressionAST (mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @trueExpressionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionAST ("trueExpressionAST",
                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_trueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_trueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionAST result ;
  const GALGAS_trueExpressionAST * p = (const GALGAS_trueExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_falseExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_falseExpressionAST * p = (const cPtr_falseExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_falseExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_falseExpressionAST::objectCompare (const GALGAS_falseExpressionAST & inOperand) const {
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

GALGAS_falseExpressionAST::GALGAS_falseExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpressionAST::GALGAS_falseExpressionAST (const cPtr_falseExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_falseExpressionAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_falseExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_falseExpressionAST * p = (const cPtr_falseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_falseExpressionAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_falseExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @falseExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_falseExpressionAST::cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_falseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

void cPtr_falseExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@falseExpressionAST:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_falseExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_falseExpressionAST (mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @falseExpressionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpressionAST ("falseExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_falseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_falseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionAST result ;
  const GALGAS_falseExpressionAST * p = (const GALGAS_falseExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalStringExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringExpressionAST * p = (const cPtr_literalStringExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStringSequence.objectCompare (p->mAttribute_mStringSequence) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalStringExpressionAST::objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const {
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

GALGAS_literalStringExpressionAST::GALGAS_literalStringExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_stringlist::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringExpressionAST::GALGAS_literalStringExpressionAST (const cPtr_literalStringExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_stringlist & inAttribute_mStringSequence
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST result ;
  if (inAttribute_mLocation.isValid () && inAttribute_mStringSequence.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringExpressionAST (inAttribute_mLocation, inAttribute_mStringSequence COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_literalStringExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringExpressionAST * p = (const cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_literalStringExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_literalStringExpressionAST::getter_mStringSequence (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringExpressionAST * p = (const cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    result = p->mAttribute_mStringSequence ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_literalStringExpressionAST::getter_mStringSequence (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringSequence ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @literalStringExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalStringExpressionAST::cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                                                  const GALGAS_stringlist & in_mStringSequence
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mLocation (in_mLocation),
mAttribute_mStringSequence (in_mStringSequence) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

void cPtr_literalStringExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalStringExpressionAST:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStringSequence.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringExpressionAST (mAttribute_mLocation, mAttribute_mStringSequence COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalStringExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringExpressionAST ("literalStringExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST result ;
  const GALGAS_literalStringExpressionAST * p = (const GALGAS_literalStringExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_orExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_orExpressionAST::objectCompare (const GALGAS_orExpressionAST & inOperand) const {
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

GALGAS_orExpressionAST::GALGAS_orExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orExpressionAST::GALGAS_orExpressionAST (const cPtr_orExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orExpressionAST GALGAS_orExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_orExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_orExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_orExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_orExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_orExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_orExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @orExpressionAST class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_orExpressionAST::cPtr_orExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_orExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

void cPtr_orExpressionAST::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@orExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_orExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orExpressionAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @orExpressionAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpressionAST ("orExpressionAST",
                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_orExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_orExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orExpressionAST GALGAS_orExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionAST result ;
  const GALGAS_orExpressionAST * p = (const GALGAS_orExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_orShortExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_orShortExpressionAST::objectCompare (const GALGAS_orShortExpressionAST & inOperand) const {
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

GALGAS_orShortExpressionAST::GALGAS_orShortExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orShortExpressionAST::GALGAS_orShortExpressionAST (const cPtr_orShortExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orShortExpressionAST GALGAS_orShortExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orShortExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_orShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_orShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_orShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_orShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_orShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_orShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @orShortExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_orShortExpressionAST::cPtr_orShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                      const GALGAS_semanticExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_orShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

void cPtr_orShortExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@orShortExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_orShortExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orShortExpressionAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @orShortExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orShortExpressionAST ("orShortExpressionAST",
                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_orShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_orShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orShortExpressionAST GALGAS_orShortExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionAST result ;
  const GALGAS_orShortExpressionAST * p = (const GALGAS_orShortExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_xorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_xorExpressionAST::objectCompare (const GALGAS_xorExpressionAST & inOperand) const {
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

GALGAS_xorExpressionAST::GALGAS_xorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpressionAST::GALGAS_xorExpressionAST (const cPtr_xorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpressionAST GALGAS_xorExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_xorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_xorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_xorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_xorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_xorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_xorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @xorExpressionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_xorExpressionAST::cPtr_xorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_xorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

void cPtr_xorExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@xorExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_xorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorExpressionAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @xorExpressionAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpressionAST ("xorExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_xorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_xorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpressionAST GALGAS_xorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionAST result ;
  const GALGAS_xorExpressionAST * p = (const GALGAS_xorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_closedSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_closedSliceExpressionAST::objectCompare (const GALGAS_closedSliceExpressionAST & inOperand) const {
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

GALGAS_closedSliceExpressionAST::GALGAS_closedSliceExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_closedSliceExpressionAST::GALGAS_closedSliceExpressionAST (const cPtr_closedSliceExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_closedSliceExpressionAST GALGAS_closedSliceExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_closedSliceExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_closedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_closedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_closedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_closedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_closedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_closedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @closedSliceExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_closedSliceExpressionAST::cPtr_closedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_closedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

void cPtr_closedSliceExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@closedSliceExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_closedSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_closedSliceExpressionAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @closedSliceExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_closedSliceExpressionAST ("closedSliceExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_closedSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_closedSliceExpressionAST GALGAS_closedSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST result ;
  const GALGAS_closedSliceExpressionAST * p = (const GALGAS_closedSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_closedSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_openedSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_openedSliceExpressionAST::objectCompare (const GALGAS_openedSliceExpressionAST & inOperand) const {
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

GALGAS_openedSliceExpressionAST::GALGAS_openedSliceExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_openedSliceExpressionAST::GALGAS_openedSliceExpressionAST (const cPtr_openedSliceExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_openedSliceExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_openedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_openedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_openedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_openedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_openedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_openedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @openedSliceExpressionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_openedSliceExpressionAST::cPtr_openedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_openedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

void cPtr_openedSliceExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@openedSliceExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_openedSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_openedSliceExpressionAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @openedSliceExpressionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedSliceExpressionAST ("openedSliceExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_openedSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST result ;
  const GALGAS_openedSliceExpressionAST * p = (const GALGAS_openedSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_openedSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_andShortExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_andShortExpressionAST::objectCompare (const GALGAS_andShortExpressionAST & inOperand) const {
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

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andShortExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_andShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_andShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_andShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_andShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @andShortExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_andShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

void cPtr_andShortExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@andShortExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_andShortExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andShortExpressionAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @andShortExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andShortExpressionAST ("andShortExpressionAST",
                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_andShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_andShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  const GALGAS_andShortExpressionAST * p = (const GALGAS_andShortExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_andExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_andExpressionAST::objectCompare (const GALGAS_andExpressionAST & inOperand) const {
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

GALGAS_andExpressionAST::GALGAS_andExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andExpressionAST::GALGAS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andExpressionAST GALGAS_andExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_andExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_andExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_andExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_andExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @andExpressionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_andExpressionAST::cPtr_andExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_andExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

void cPtr_andExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@andExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_andExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andExpressionAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @andExpressionAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpressionAST ("andExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_andExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_andExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andExpressionAST GALGAS_andExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  const GALGAS_andExpressionAST * p = (const GALGAS_andExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

