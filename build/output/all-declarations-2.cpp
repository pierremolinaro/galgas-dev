#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList::~ GALGAS_lexicalRoutineFormalArgumentList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineFormalArgumentList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_lexicalRoutineFormalArgumentList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_lexicalRoutineFormalArgumentList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<list @lexicalRoutineFormalArgumentList:" ;
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

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                            const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                            const GALGAS_string & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalRoutineFormalArgumentList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                         const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                         const GALGAS_string & in_mArgumentNameForComment
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (in_mLexicalFormalArgumentMode,
                                                                      in_mLexicalFormalArgumentType,
                                                                      in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::addAssign_operation (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                   const GALGAS_lexicalTypeEnum & inOperand1,
                                                                   const GALGAS_string & inOperand2
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_lexicalRoutineFormalArgumentList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
                                                                    const GALGAS_lexicalTypeEnum inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_lexicalRoutineFormalArgumentList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_lexicalRoutineFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                    GALGAS_lexicalTypeEnum & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_lexicalRoutineFormalArgumentList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = element.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = element.mAttribute_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::setter_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                               GALGAS_lexicalTypeEnum & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lexicalRoutineFormalArgumentList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = element.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = element.mAttribute_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::setter_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                              GALGAS_lexicalTypeEnum & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lexicalRoutineFormalArgumentList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = element.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = element.mAttribute_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::method_first (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                            GALGAS_lexicalTypeEnum & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lexicalRoutineFormalArgumentList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = element.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = element.mAttribute_mArgumentNameForComment ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::method_last (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                           GALGAS_lexicalTypeEnum & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lexicalRoutineFormalArgumentList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = element.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = element.mAttribute_mArgumentNameForComment ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
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

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_lexicalRoutineFormalArgumentList (true) ;
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

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_lexicalRoutineFormalArgumentList (true) ;
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

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_lexicalRoutineFormalArgumentList (true) ;
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

void GALGAS_lexicalRoutineFormalArgumentList::plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
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

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalArgumentModeAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLexicalFormalArgumentMode ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeEnum result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLexicalFormalArgumentType ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mArgumentNameForComment ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRoutineFormalArgumentList::objectCompare (const GALGAS_lexicalRoutineFormalArgumentList & inOperand) const {
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

cEnumerator_lexicalRoutineFormalArgumentList::cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineFormalArgumentList::~ cEnumerator_lexicalRoutineFormalArgumentList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalRoutineFormalArgumentList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalRoutineFormalArgumentList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_lexicalRoutineFormalArgumentList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element cEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLexicalFormalArgumentMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLexicalFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mArgumentNameForComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalRoutineFormalArgumentList type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  const GALGAS_lexicalRoutineFormalArgumentList * p = (const GALGAS_lexicalRoutineFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalRoutineMap::cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                              const GALGAS_stringlist & in_mErrorMessageList,
                                                              const GALGAS_bool & in_mIsExtern
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalRoutineFormalArgumentList (in_mLexicalRoutineFormalArgumentList),
mAttribute_mErrorMessageList (in_mErrorMessageList),
mAttribute_mIsExtern (in_mIsExtern) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalRoutineMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalRoutineFormalArgumentList.isValid () && mAttribute_mErrorMessageList.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalRoutineMap (mAttribute_lkey, mAttribute_mLexicalRoutineFormalArgumentList, mAttribute_mErrorMessageList, mAttribute_mIsExtern COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalRoutineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineFormalArgumentList" ":" ;
  mAttribute_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessageList" ":" ;
  mAttribute_mErrorMessageList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mAttribute_mIsExtern.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalRoutineMap * operand = (cMapElement_lexicalRoutineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalRoutineFormalArgumentList.objectCompare (operand->mAttribute_mLexicalRoutineFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessageList.objectCompare (operand->mAttribute_mErrorMessageList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsExtern.objectCompare (operand->mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap & GALGAS_lexicalRoutineMap::operator = (const GALGAS_lexicalRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_mapWithMapToOverride (const GALGAS_lexicalRoutineMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_lexicalRoutineFormalArgumentList & inArgument0,
                                                    const GALGAS_stringlist & inArgument1,
                                                    const GALGAS_bool & inArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList inArgument0,
                                                 GALGAS_stringlist inArgument1,
                                                 GALGAS_bool inArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical routine has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalRoutineMap_searchKey = "the '%K' lexical routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList & outArgument0,
                                                 GALGAS_stringlist & outArgument1,
                                                 GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_lexicalRoutineMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    outArgument0 = p->mAttribute_mLexicalRoutineFormalArgumentList ;
    outArgument1 = p->mAttribute_mErrorMessageList ;
    outArgument2 = p->mAttribute_mIsExtern ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineMap::getter_mLexicalRoutineFormalArgumentListForKey (const GALGAS_string & inKey,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mLexicalRoutineFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_lexicalRoutineMap::getter_mErrorMessageListForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mErrorMessageList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalRoutineMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mAttribute_mIsExtern ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_setMLexicalRoutineFormalArgumentListForKey (GALGAS_lexicalRoutineFormalArgumentList inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mLexicalRoutineFormalArgumentList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_setMErrorMessageListForKey (GALGAS_stringlist inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mErrorMessageList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mAttribute_mIsExtern = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalRoutineMap * GALGAS_lexicalRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * result = (cMapElement_lexicalRoutineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineMap::cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineMap::~ cEnumerator_lexicalRoutineMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalRoutineMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalRoutineMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_lexicalRoutineMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element cEnumerator_lexicalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return GALGAS_lexicalRoutineMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalRoutineFormalArgumentList, p->mAttribute_mErrorMessageList, p->mAttribute_mIsExtern) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList cEnumerator_lexicalRoutineMap::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_lexicalRoutineMap::current_mErrorMessageList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mErrorMessageList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalRoutineMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalRoutineMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  const GALGAS_lexicalRoutineMap * p = (const GALGAS_lexicalRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList::~ GALGAS_lexicalFunctionFormalArgumentList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionFormalArgumentList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_lexicalFunctionFormalArgumentList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_lexicalFunctionFormalArgumentList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<list @lexicalFunctionFormalArgumentList:" ;
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

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                              const GALGAS_string & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalFunctionFormalArgumentList (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (in_mLexicalType,
                                                                       in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::addAssign_operation (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                    const GALGAS_string & inOperand1
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_lexicalFunctionFormalArgumentList_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalTypeEnum inOperand0,
                                                                     const GALGAS_string inOperand1,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_lexicalFunctionFormalArgumentList_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_lexicalFunctionFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalTypeEnum & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_lexicalFunctionFormalArgumentList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalType ;
      outOperand1 = element.mAttribute_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::setter_popFirst (GALGAS_lexicalTypeEnum & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lexicalFunctionFormalArgumentList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalType ;
      outOperand1 = element.mAttribute_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::setter_popLast (GALGAS_lexicalTypeEnum & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lexicalFunctionFormalArgumentList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalType ;
      outOperand1 = element.mAttribute_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::method_first (GALGAS_lexicalTypeEnum & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lexicalFunctionFormalArgumentList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalType ;
      outOperand1 = element.mAttribute_mArgumentNameForComment ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList::method_last (GALGAS_lexicalTypeEnum & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lexicalFunctionFormalArgumentList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexicalType ;
      outOperand1 = element.mAttribute_mArgumentNameForComment ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
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

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_lexicalFunctionFormalArgumentList (true) ;
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

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_lexicalFunctionFormalArgumentList (true) ;
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

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_lexicalFunctionFormalArgumentList (true) ;
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

void GALGAS_lexicalFunctionFormalArgumentList::plusAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand,
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

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionFormalArgumentList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeEnum result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLexicalType ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mArgumentNameForComment ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalFunctionFormalArgumentList::objectCompare (const GALGAS_lexicalFunctionFormalArgumentList & inOperand) const {
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

cEnumerator_lexicalFunctionFormalArgumentList::cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionFormalArgumentList::~ cEnumerator_lexicalFunctionFormalArgumentList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalFunctionFormalArgumentList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalFunctionFormalArgumentList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_lexicalFunctionFormalArgumentList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element cEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mArgumentNameForComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalFunctionFormalArgumentList type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  const GALGAS_lexicalFunctionFormalArgumentList * p = (const GALGAS_lexicalFunctionFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalFunctionMap::cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                                const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                                const GALGAS_string & in_mReplacementFunctionName,
                                                                const GALGAS_bool & in_mIsExtern
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalTypeList (in_mLexicalTypeList),
mAttribute_mReturnedLexicalType (in_mReturnedLexicalType),
mAttribute_mReplacementFunctionName (in_mReplacementFunctionName),
mAttribute_mIsExtern (in_mIsExtern) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalFunctionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalTypeList.isValid () && mAttribute_mReturnedLexicalType.isValid () && mAttribute_mReplacementFunctionName.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalFunctionMap (mAttribute_lkey, mAttribute_mLexicalTypeList, mAttribute_mReturnedLexicalType, mAttribute_mReplacementFunctionName, mAttribute_mIsExtern COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalFunctionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeList" ":" ;
  mAttribute_mLexicalTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedLexicalType" ":" ;
  mAttribute_mReturnedLexicalType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunctionName" ":" ;
  mAttribute_mReplacementFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsExtern" ":" ;
  mAttribute_mIsExtern.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalFunctionMap * operand = (cMapElement_lexicalFunctionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalTypeList.objectCompare (operand->mAttribute_mLexicalTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedLexicalType.objectCompare (operand->mAttribute_mReturnedLexicalType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReplacementFunctionName.objectCompare (operand->mAttribute_mReplacementFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsExtern.objectCompare (operand->mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap & GALGAS_lexicalFunctionMap::operator = (const GALGAS_lexicalFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_mapWithMapToOverride (const GALGAS_lexicalFunctionMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_lexicalFunctionFormalArgumentList & inArgument0,
                                                     const GALGAS_lexicalTypeEnum & inArgument1,
                                                     const GALGAS_string & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList inArgument0,
                                                  GALGAS_lexicalTypeEnum inArgument1,
                                                  GALGAS_string inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical function has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalFunctionMap_searchKey = "the '%K' lexical function is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList & outArgument0,
                                                  GALGAS_lexicalTypeEnum & outArgument1,
                                                  GALGAS_string & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_lexicalFunctionMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    outArgument0 = p->mAttribute_mLexicalTypeList ;
    outArgument1 = p->mAttribute_mReturnedLexicalType ;
    outArgument2 = p->mAttribute_mReplacementFunctionName ;
    outArgument3 = p->mAttribute_mIsExtern ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionMap::getter_mLexicalTypeListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mLexicalTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionMap::getter_mReturnedLexicalTypeForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mReturnedLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionMap::getter_mReplacementFunctionNameForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mReplacementFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalFunctionMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mAttribute_mIsExtern ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMLexicalTypeListForKey (GALGAS_lexicalFunctionFormalArgumentList inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mLexicalTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMReturnedLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mReturnedLexicalType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMReplacementFunctionNameForKey (GALGAS_string inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mReplacementFunctionName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mAttribute_mIsExtern = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalFunctionMap * GALGAS_lexicalFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * result = (cMapElement_lexicalFunctionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalFunctionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionMap::cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionMap::~ cEnumerator_lexicalFunctionMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalFunctionMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalFunctionMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_lexicalFunctionMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element cEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return GALGAS_lexicalFunctionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalTypeList, p->mAttribute_mReturnedLexicalType, p->mAttribute_mReplacementFunctionName, p->mAttribute_mIsExtern) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList cEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mLexicalTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mReturnedLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mReplacementFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalFunctionMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  const GALGAS_lexicalFunctionMap * p = (const GALGAS_lexicalFunctionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList::~ GALGAS_templateDelimitorList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateDelimitorList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_templateDelimitorList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_templateDelimitorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<list @templateDelimitorList:" ;
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

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_bool & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateDelimitorList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_templateDelimitorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mStartString,
                                                              const GALGAS_lstring & in_mEndString,
                                                              const GALGAS_bool & in_mPreservesStartDelimiter
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = NULL ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (in_mStartString,
                                                           in_mEndString,
                                                           in_mPreservesStartDelimiter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_bool & inOperand2
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_templateDelimitorList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_bool inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_templateDelimitorList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_templateDelimitorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_templateDelimitorList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStartString ;
      outOperand1 = element.mAttribute_mEndString ;
      outOperand2 = element.mAttribute_mPreservesStartDelimiter ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_templateDelimitorList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStartString ;
      outOperand1 = element.mAttribute_mEndString ;
      outOperand2 = element.mAttribute_mPreservesStartDelimiter ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_templateDelimitorList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStartString ;
      outOperand1 = element.mAttribute_mEndString ;
      outOperand2 = element.mAttribute_mPreservesStartDelimiter ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_templateDelimitorList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStartString ;
      outOperand1 = element.mAttribute_mEndString ;
      outOperand2 = element.mAttribute_mPreservesStartDelimiter ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_templateDelimitorList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mStartString ;
      outOperand1 = element.mAttribute_mEndString ;
      outOperand2 = element.mAttribute_mPreservesStartDelimiter ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
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

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_templateDelimitorList (true) ;
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

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_templateDelimitorList (true) ;
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

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_templateDelimitorList (true) ;
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

void GALGAS_templateDelimitorList::plusAssign_operation (const GALGAS_templateDelimitorList inOperand,
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

GALGAS_lstring GALGAS_templateDelimitorList::getter_mStartStringAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mStartString ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList::getter_mEndStringAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mEndString ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateDelimitorList::getter_mPreservesStartDelimiterAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mPreservesStartDelimiter ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateDelimitorList::objectCompare (const GALGAS_templateDelimitorList & inOperand) const {
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

cEnumerator_templateDelimitorList::cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateDelimitorList::~ cEnumerator_templateDelimitorList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_templateDelimitorList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_templateDelimitorList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_templateDelimitorList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element cEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mEndString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mPreservesStartDelimiter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateDelimitorList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateDelimitorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateDelimitorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDelimitorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  const GALGAS_templateDelimitorList * p = (const GALGAS_templateDelimitorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDelimitorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_styleMap::cMapElement_styleMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lstring & in_mComment,
                                            const GALGAS_uint & in_mStyleIndex
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mComment (in_mComment),
mAttribute_mStyleIndex (in_mStyleIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_styleMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mComment.isValid () && mAttribute_mStyleIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_styleMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_styleMap (mAttribute_lkey, mAttribute_mComment, mAttribute_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_styleMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mAttribute_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyleIndex" ":" ;
  mAttribute_mStyleIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_styleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_styleMap * operand = (cMapElement_styleMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (operand->mAttribute_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStyleIndex.objectCompare (operand->mAttribute_mStyleIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap::GALGAS_styleMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap::GALGAS_styleMap (const GALGAS_styleMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap & GALGAS_styleMap::operator = (const GALGAS_styleMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::constructor_mapWithMapToOverride (const GALGAS_styleMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_styleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_lstring & inArgument0,
                                           const GALGAS_uint & inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = NULL ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@styleMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_lstring inArgument0,
                                        GALGAS_uint inArgument1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = NULL ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' style is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_styleMap_searchKey = "the '%K' style is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_lstring & outArgument0,
                                        GALGAS_uint & outArgument1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_styleMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_styleMap) ;
    outArgument0 = p->mAttribute_mComment ;
    outArgument1 = p->mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_styleMap::getter_mCommentForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_styleMap::getter_mStyleIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mAttribute_mStyleIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::setter_setMCommentForKey (GALGAS_lstring inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap::setter_setMStyleIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mAttribute_mStyleIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_styleMap * GALGAS_styleMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * result = (cMapElement_styleMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_styleMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_styleMap::cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_styleMap::~ cEnumerator_styleMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_styleMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_styleMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_styleMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element cEnumerator_styleMap::current (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return GALGAS_styleMap_2D_element (p->mAttribute_lkey, p->mAttribute_mComment, p->mAttribute_mStyleIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mAttribute_mStyleIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @styleMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_styleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_styleMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_styleMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_styleMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  const GALGAS_styleMap * p = (const GALGAS_styleMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_styleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTagMap::cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalTagMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalTagMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalTagMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalTagMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalTagMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTagMap * operand = (cMapElement_lexicalTagMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap & GALGAS_lexicalTagMap::operator = (const GALGAS_lexicalTagMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTagMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTagMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap::setter_insertKey (GALGAS_lstring inKey,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = NULL ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' tag is already declared in %L" ;
  const char * kShadowErrorMessage = "the '%K' tag declaration shadows the tag declared in %L" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalTagMap_searchKey = "the '%K' tag is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap::method_searchKey (GALGAS_lstring inKey,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_lexicalTagMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTagMap * GALGAS_lexicalTagMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * result = (cMapElement_lexicalTagMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTagMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalTagMap::cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalTagMap::~ cEnumerator_lexicalTagMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalTagMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lexicalTagMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_lexicalTagMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element cEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  return GALGAS_lexicalTagMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @lexicalTagMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTagMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTagMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  const GALGAS_lexicalTagMap * p = (const GALGAS_lexicalTagMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@lexicalTypeEnum lexicalTypeBaseName'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_lexicalTypeBaseName (const GALGAS_lexicalTypeEnum & inObject,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("string") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("char") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("uint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("uint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("sint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("sint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("bigint") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension getter '@lexicalExpressionAST generateConditionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalExpressionAST_generateConditionCode> gExtensionGetterTable_lexicalExpressionAST_generateConditionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateConditionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_lexicalExpressionAST_generateConditionCode inGetter) {
  gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalExpressionAST_generateConditionCode (void) {
  gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExpressionAST_generateConditionCode (NULL,
                                                                       freeExtensionGetter_lexicalExpressionAST_generateConditionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                         const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalExpressionAST_generateConditionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.count ()) {
      f = gExtensionGetterTable_lexicalExpressionAST_generateConditionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.count ()) {
           f = gExtensionGetterTable_lexicalExpressionAST_generateConditionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalExpressionAST_generateConditionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument> gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                             enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument inGetter) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (NULL,
                                                                                                             freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.count ()) {
      f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.count ()) {
           f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//            Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument> gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateRoutineArgument (const int32_t inClassIndex,
                                                   enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument inGetter) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (void) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (NULL,
                                                                                            freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.count ()) {
      f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.count ()) {
           f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                  Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode> gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateDefaultSendCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode inGetter) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode (void) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendDefaultActionAST_generateDefaultSendCode (NULL,
                                                                                freeExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                           const GALGAS_string in_inScannerClassName,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.count ()) {
      f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.count ()) {
           f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalSendDefaultActionAST_generateDefaultSendCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension getter '@lexicalInstructionAST generateInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalInstructionAST_generateInstructionCode> gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateInstructionCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalInstructionAST_generateInstructionCode inGetter) {
  gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalInstructionAST_generateInstructionCode (void) {
  gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalInstructionAST_generateInstructionCode (NULL,
                                                                          freeExtensionGetter_lexicalInstructionAST_generateInstructionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                           const GALGAS_string in_inScannerClassName,
                                                           const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalInstructionAST_generateInstructionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.count ()) {
      f = gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.count ()) {
           f = gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalInstructionAST_generateInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension getter '@abstractLexicalRuleAST generateCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRuleAST_generateCode> gExtensionGetterTable_abstractLexicalRuleAST_generateCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCode (const int32_t inClassIndex,
                                        enterExtensionGetter_abstractLexicalRuleAST_generateCode inGetter) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_abstractLexicalRuleAST_generateCode (void) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractLexicalRuleAST_generateCode (NULL,
                                                                freeExtensionGetter_abstractLexicalRuleAST_generateCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                const GALGAS_string in_inScannerClassName,
                                                const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRuleAST_generateCode f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRuleAST_generateCode.count ()) {
      f = gExtensionGetterTable_abstractLexicalRuleAST_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRuleAST_generateCode.count ()) {
           f = gExtensionGetterTable_abstractLexicalRuleAST_generateCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRuleAST_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract extension getter '@lexicalExpressionAST generateCocoaConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode> gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaConditionCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode inGetter) {
  gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode (void) {
  gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExpressionAST_generateCocoaConditionCode (NULL,
                                                                            freeExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                              const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.count ()) {
      f = gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.count ()) {
           f = gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalExpressionAST_generateCocoaConditionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateCocoaRoutineOrFunctionArgument'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument> gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                                  enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument inGetter) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (NULL,
                                                                                                                  freeExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.count ()) {
      f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.count ()) {
           f = gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//          Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument> gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaRoutineArgument (const int32_t inClassIndex,
                                                        enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument inGetter) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (void) {
  gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (NULL,
                                                                                                 freeExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.count ()) {
      f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.count ()) {
           f = gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension getter '@lexicalSendDefaultActionAST generateCocoaDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode> gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaDefaultSendCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode inGetter) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (void) {
  gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (NULL,
                                                                                     freeExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                const GALGAS_string in_inScannerClassName,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.count ()) {
      f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.count ()) {
           f = gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension getter '@lexicalInstructionAST generateCocoaInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode> gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode inGetter) {
  gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode (void) {
  gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalInstructionAST_generateCocoaInstructionCode (NULL,
                                                                               freeExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                const GALGAS_string in_inScannerClassName,
                                                                const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode f = NULL ;
    if (classIndex < gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.count ()) {
      f = gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.count ()) {
           f = gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_lexicalInstructionAST_generateCocoaInstructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension getter '@abstractLexicalRuleAST generateCocoaCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode> gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateCocoaCode (const int32_t inClassIndex,
                                             enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode inGetter) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_abstractLexicalRuleAST_generateCocoaCode (void) {
  gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractLexicalRuleAST_generateCocoaCode (NULL,
                                                                     freeExtensionGetter_abstractLexicalRuleAST_generateCocoaCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                     const GALGAS_string in_inScannerClassName,
                                                     const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.count ()) {
      f = gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.count ()) {
           f = gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractLexicalRuleAST_generateCocoaCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension Getter '@lexicalTypeEnum cppTypeName'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cppTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("C_String") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("utf32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("uint32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("uint64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("int32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("int64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("C_BigInt") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension Getter '@lexicalTypeEnum appendMethodName'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_appendMethodName (const GALGAS_lexicalTypeEnum & inObject,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("appendCLiteralStringConstant") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("appendUnicodeCharacter") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("appendDouble") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("appendCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension Getter '@lexicalTypeEnum appendArgumentOfMethod'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_appendArgumentOfMethod (const GALGAS_lexicalTypeEnum & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string (" COMMA_HERE") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension Getter '@lexicalTypeEnum initialization'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_initialization (const GALGAS_lexicalTypeEnum & inObject,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string (".setLengthToZero ()") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string (" = TO_UNICODE (0)") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string (".setToZero ()") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension Getter '@lexicalTypeEnum cocoaTypeName'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cocoaTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("UInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("SInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("SInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const GALGAS_lexicalTypeEnum & inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension Getter '@lexicalTypeEnum cocoaInitializationCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cocoaInitializationCode (const GALGAS_lexicalTypeEnum & inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string ("0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension Getter '@lexicalTypeEnum cocoaResetPrefix'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cocoaResetPrefix (const GALGAS_lexicalTypeEnum & inObject,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string ("[") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string ("[") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension Getter '@lexicalTypeEnum cocoaReset'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cocoaReset (const GALGAS_lexicalTypeEnum & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      result_outResult = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      result_outResult = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      result_outResult = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      result_outResult = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction> gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalDefaultAction (const int32_t inClassIndex,
                                                     extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction inMethod) {
  gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction (void) {
  gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction (NULL,
                                                                                  freeExtensionMethod_lexicalSendDefaultActionAST_checkLexicalDefaultAction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.count ()) {
      f = gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.count ()) {
          f = gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalSendDefaultActionAST_checkLexicalDefaultAction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract extension method '@lexicalExpressionAST checkLexicalExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression> gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                  extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) {
  gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_lexicalExpressionAST_checkLexicalExpression (void) {
  gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalExpressionAST_checkLexicalExpression (NULL,
                                                                        freeExtensionMethod_lexicalExpressionAST_checkLexicalExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.count ()) {
      f = gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.count ()) {
          f = gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalExpressionAST_checkLexicalExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument> gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalFunctionCallArgument (const int32_t inClassIndex,
                                                            extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument inMethod) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (NULL,
                                                                                                            freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.count ()) {
      f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.count ()) {
          f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument> gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (NULL,
                                                                                                           freeExtensionMethod_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.count ()) {
      f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.count ()) {
          f = gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument> gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument inMethod) {
  gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (void) {
  gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (NULL,
                                                                                                    freeExtensionMethod_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.count ()) {
      f = gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.count ()) {
          f = gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentMode, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction> gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalInstruction (const int32_t inClassIndex,
                                                   extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction inMethod) {
  gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_lexicalInstructionAST_checkLexicalInstruction (void) {
  gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalInstructionAST_checkLexicalInstruction (NULL,
                                                                          freeExtensionMethod_lexicalInstructionAST_checkLexicalInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                  GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GALGAS_lexicalTagMap & io_ioTagMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.count ()) {
      f = gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.count ()) {
          f = gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_lexicalInstructionAST_checkLexicalInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, io_ioTagMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule> gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLexicalRule (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) {
  gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractLexicalRuleAST_checkLexicalRule (void) {
  gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractLexicalRuleAST_checkLexicalRule (NULL,
                                                                    freeExtensionMethod_abstractLexicalRuleAST_checkLexicalRule) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.count ()) {
      f = gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.count ()) {
          f = gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractLexicalRuleAST_checkLexicalRule.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST::GALGAS_optionDefaultValueEnumAST (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_noDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_unsignedDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = kEnum_stringDefaultValue ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_optionDefaultValueEnumAST [4] = {
  "(not built)",
  "noDefaultValue",
  "unsignedDefaultValue",
  "stringDefaultValue"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isNoDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isUnsignedDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsignedDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_isStringDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringDefaultValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionDefaultValueEnumAST::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @optionDefaultValueEnumAST: " << gEnumNameArrayFor_optionDefaultValueEnumAST [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_optionDefaultValueEnumAST::objectCompare (const GALGAS_optionDefaultValueEnumAST & inOperand) const {
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
//                                           @optionDefaultValueEnumAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ("optionDefaultValueEnumAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionDefaultValueEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionDefaultValueEnumAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionDefaultValueEnumAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  const GALGAS_optionDefaultValueEnumAST * p = (const GALGAS_optionDefaultValueEnumAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionDefaultValueEnumAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionDefaultValueEnumAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST::~ GALGAS_commandLineOptionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_commandLineOptionListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_commandLineOptionListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_commandLineOptionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<list @commandLineOptionListAST:" ;
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

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_lchar & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_lstring & inOperand4,
                                                                                            const GALGAS_lstring & inOperand5,
                                                                                            const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_commandLineOptionListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_commandLineOptionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mOptionTypeName,
                                                                 const GALGAS_lstring & in_mOptionInternalName,
                                                                 const GALGAS_lchar & in_mOptionInvocationLetter,
                                                                 const GALGAS_lstring & in_mOptionInvocationString,
                                                                 const GALGAS_lstring & in_mOptionComment,
                                                                 const GALGAS_lstring & in_mOptionDefaultValue,
                                                                 const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_commandLineOptionListAST (in_mOptionTypeName,
                                                              in_mOptionInternalName,
                                                              in_mOptionInvocationLetter,
                                                              in_mOptionInvocationString,
                                                              in_mOptionComment,
                                                              in_mOptionDefaultValue,
                                                              in_mOptionDefaultValueKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_lchar & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_lstring & inOperand4,
                                                           const GALGAS_lstring & inOperand5,
                                                           const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    const GALGAS_commandLineOptionListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lchar inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_lstring inOperand4,
                                                            const GALGAS_lstring inOperand5,
                                                            const GALGAS_optionDefaultValueEnumAST inOperand6,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    const GALGAS_commandLineOptionListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
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

void GALGAS_commandLineOptionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lchar & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_lstring & outOperand5,
                                                            GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_commandLineOptionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionTypeName ;
      outOperand1 = element.mAttribute_mOptionInternalName ;
      outOperand2 = element.mAttribute_mOptionInvocationLetter ;
      outOperand3 = element.mAttribute_mOptionInvocationString ;
      outOperand4 = element.mAttribute_mOptionComment ;
      outOperand5 = element.mAttribute_mOptionDefaultValue ;
      outOperand6 = element.mAttribute_mOptionDefaultValueKind ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lchar & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_lstring & outOperand4,
                                                       GALGAS_lstring & outOperand5,
                                                       GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_commandLineOptionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionTypeName ;
      outOperand1 = element.mAttribute_mOptionInternalName ;
      outOperand2 = element.mAttribute_mOptionInvocationLetter ;
      outOperand3 = element.mAttribute_mOptionInvocationString ;
      outOperand4 = element.mAttribute_mOptionComment ;
      outOperand5 = element.mAttribute_mOptionDefaultValue ;
      outOperand6 = element.mAttribute_mOptionDefaultValueKind ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lchar & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstring & outOperand4,
                                                      GALGAS_lstring & outOperand5,
                                                      GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_commandLineOptionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionTypeName ;
      outOperand1 = element.mAttribute_mOptionInternalName ;
      outOperand2 = element.mAttribute_mOptionInvocationLetter ;
      outOperand3 = element.mAttribute_mOptionInvocationString ;
      outOperand4 = element.mAttribute_mOptionComment ;
      outOperand5 = element.mAttribute_mOptionDefaultValue ;
      outOperand6 = element.mAttribute_mOptionDefaultValueKind ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lchar & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_lstring & outOperand4,
                                                    GALGAS_lstring & outOperand5,
                                                    GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_commandLineOptionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionTypeName ;
      outOperand1 = element.mAttribute_mOptionInternalName ;
      outOperand2 = element.mAttribute_mOptionInvocationLetter ;
      outOperand3 = element.mAttribute_mOptionInvocationString ;
      outOperand4 = element.mAttribute_mOptionComment ;
      outOperand5 = element.mAttribute_mOptionDefaultValue ;
      outOperand6 = element.mAttribute_mOptionDefaultValueKind ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lchar & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_lstring & outOperand4,
                                                   GALGAS_lstring & outOperand5,
                                                   GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_commandLineOptionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionTypeName ;
      outOperand1 = element.mAttribute_mOptionInternalName ;
      outOperand2 = element.mAttribute_mOptionInvocationLetter ;
      outOperand3 = element.mAttribute_mOptionInvocationString ;
      outOperand4 = element.mAttribute_mOptionComment ;
      outOperand5 = element.mAttribute_mOptionDefaultValue ;
      outOperand6 = element.mAttribute_mOptionDefaultValueKind ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::add_operation (const GALGAS_commandLineOptionListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
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

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_commandLineOptionListAST (true) ;
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

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_commandLineOptionListAST (true) ;
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

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_commandLineOptionListAST (true) ;
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

void GALGAS_commandLineOptionListAST::plusAssign_operation (const GALGAS_commandLineOptionListAST inOperand,
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

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionTypeName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInternalNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionInternalName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_commandLineOptionListAST::getter_mOptionInvocationLetterAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionInvocationLetter ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInvocationStringAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionInvocationString ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionCommentAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionComment ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionDefaultValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_optionDefaultValueEnumAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionDefaultValueKind ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_commandLineOptionListAST::objectCompare (const GALGAS_commandLineOptionListAST & inOperand) const {
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

cEnumerator_commandLineOptionListAST::cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_commandLineOptionListAST::~ cEnumerator_commandLineOptionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_commandLineOptionListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_commandLineOptionListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_commandLineOptionListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element cEnumerator_commandLineOptionListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionTypeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInternalName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionInternalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cEnumerator_commandLineOptionListAST::current_mOptionInvocationLetter (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionInvocationLetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInvocationString (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionInvocationString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionComment (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionDefaultValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST cEnumerator_commandLineOptionListAST::current_mOptionDefaultValueKind (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionDefaultValueKind ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @commandLineOptionListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionListAST ("commandLineOptionListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  const GALGAS_commandLineOptionListAST * p = (const GALGAS_commandLineOptionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_commandLineOptionMap::cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_char & in_mOptionChar,
                                                                    const GALGAS_string & in_mOptionString,
                                                                    const GALGAS_string & in_mComment,
                                                                    const GALGAS_string & in_mDefaultValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mOptionChar (in_mOptionChar),
mAttribute_mOptionString (in_mOptionString),
mAttribute_mComment (in_mComment),
mAttribute_mDefaultValue (in_mDefaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_commandLineOptionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () && mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_commandLineOptionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_commandLineOptionMap (mAttribute_lkey, mAttribute_mOptionChar, mAttribute_mOptionString, mAttribute_mComment, mAttribute_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_commandLineOptionMap::description (C_String & ioString, const int32_t inIndentation) const {
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

typeComparisonResult cMapElement_commandLineOptionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_commandLineOptionMap * operand = (cMapElement_commandLineOptionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
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

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap::GALGAS_commandLineOptionMap (const GALGAS_commandLineOptionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap & GALGAS_commandLineOptionMap::operator = (const GALGAS_commandLineOptionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::constructor_mapWithMapToOverride (const GALGAS_commandLineOptionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_char & inArgument0,
                                                       const GALGAS_string & inArgument1,
                                                       const GALGAS_string & inArgument2,
                                                       const GALGAS_string & inArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * p = NULL ;
  macroMyNew (p, cMapElement_commandLineOptionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@commandLineOptionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_char inArgument0,
                                                    GALGAS_string inArgument1,
                                                    GALGAS_string inArgument2,
                                                    GALGAS_string inArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * p = NULL ;
  macroMyNew (p, cMapElement_commandLineOptionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' command line option has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_commandLineOptionMap_searchKey = "the '%K' command line option is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_char & outArgument0,
                                                    GALGAS_string & outArgument1,
                                                    GALGAS_string & outArgument2,
                                                    GALGAS_string & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_commandLineOptionMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    outArgument0 = p->mAttribute_mOptionChar ;
    outArgument1 = p->mAttribute_mOptionString ;
    outArgument2 = p->mAttribute_mComment ;
    outArgument3 = p->mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_commandLineOptionMap::getter_mOptionCharForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mOptionChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::getter_mOptionStringForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mOptionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::getter_mCommentForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap::getter_mDefaultValueForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    result = p->mAttribute_mDefaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMOptionCharForKey (GALGAS_char inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mOptionChar = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMOptionStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mOptionString = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMCommentForKey (GALGAS_string inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap::setter_setMDefaultValueForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_commandLineOptionMap * p = (cMapElement_commandLineOptionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
    p->mAttribute_mDefaultValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_commandLineOptionMap * GALGAS_commandLineOptionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_commandLineOptionMap * result = (cMapElement_commandLineOptionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_commandLineOptionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_commandLineOptionMap::cEnumerator_commandLineOptionMap (const GALGAS_commandLineOptionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_commandLineOptionMap::~ cEnumerator_commandLineOptionMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_commandLineOptionMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_commandLineOptionMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_commandLineOptionMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element cEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return GALGAS_commandLineOptionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mOptionChar, p->mAttribute_mOptionString, p->mAttribute_mComment, p->mAttribute_mDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  const cMapElement_commandLineOptionMap * p = (const cMapElement_commandLineOptionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_commandLineOptionMap) ;
  return p->mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @commandLineOptionMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionMap ("commandLineOptionMap",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_commandLineOptionMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap result ;
  const GALGAS_commandLineOptionMap * p = (const GALGAS_commandLineOptionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST::GALGAS_guiSimpleAttributeListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST::~ GALGAS_guiSimpleAttributeListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiSimpleAttributeListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiSimpleAttributeListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_guiSimpleAttributeListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<list @guiSimpleAttributeListAST:" ;
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

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_guiSimpleAttributeListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_guiSimpleAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mKey,
                                                                  const GALGAS_lstring & in_mValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_guiSimpleAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiSimpleAttributeListAST (in_mKey,
                                                               in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_guiSimpleAttributeListAST_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_guiSimpleAttributeListAST_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_guiSimpleAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_guiSimpleAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_guiSimpleAttributeListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_guiSimpleAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_guiSimpleAttributeListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_guiSimpleAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::add_operation (const GALGAS_guiSimpleAttributeListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
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

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_guiSimpleAttributeListAST (true) ;
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

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_guiSimpleAttributeListAST (true) ;
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

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_guiSimpleAttributeListAST (true) ;
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

void GALGAS_guiSimpleAttributeListAST::plusAssign_operation (const GALGAS_guiSimpleAttributeListAST inOperand,
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

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mKey ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST::getter_mValueAtIndex (const GALGAS_uint & inIndex,
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

typeComparisonResult GALGAS_guiSimpleAttributeListAST::objectCompare (const GALGAS_guiSimpleAttributeListAST & inOperand) const {
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

cEnumerator_guiSimpleAttributeListAST::cEnumerator_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiSimpleAttributeListAST::~ cEnumerator_guiSimpleAttributeListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiSimpleAttributeListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiSimpleAttributeListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_guiSimpleAttributeListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element cEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiSimpleAttributeListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ("guiSimpleAttributeListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiSimpleAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiSimpleAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiSimpleAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiSimpleAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST result ;
  const GALGAS_guiSimpleAttributeListAST * p = (const GALGAS_guiSimpleAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiSimpleAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST::GALGAS_guiCompoundAttributeListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST::~ GALGAS_guiCompoundAttributeListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCompoundAttributeListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiCompoundAttributeListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_guiCompoundAttributeListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<list @guiCompoundAttributeListAST:" ;
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

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiCompoundAttributeListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_guiCompoundAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mKey,
                                                                    const GALGAS_lstring & in_mAttributeName,
                                                                    const GALGAS_lstring & in_mValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCompoundAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiCompoundAttributeListAST (in_mKey,
                                                                 in_mAttributeName,
                                                                 in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_guiCompoundAttributeListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstring inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_guiCompoundAttributeListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_guiCompoundAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
      const GALGAS_guiCompoundAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_guiCompoundAttributeListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_guiCompoundAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_guiCompoundAttributeListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST::method_last (GALGAS_lstring & outOperand0,
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
      const GALGAS_guiCompoundAttributeListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::add_operation (const GALGAS_guiCompoundAttributeListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
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

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_guiCompoundAttributeListAST (true) ;
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

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_guiCompoundAttributeListAST (true) ;
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

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_guiCompoundAttributeListAST (true) ;
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

void GALGAS_guiCompoundAttributeListAST::plusAssign_operation (const GALGAS_guiCompoundAttributeListAST inOperand,
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

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mKey ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lstring GALGAS_guiCompoundAttributeListAST::getter_mValueAtIndex (const GALGAS_uint & inIndex,
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

typeComparisonResult GALGAS_guiCompoundAttributeListAST::objectCompare (const GALGAS_guiCompoundAttributeListAST & inOperand) const {
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

cEnumerator_guiCompoundAttributeListAST::cEnumerator_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiCompoundAttributeListAST::~ cEnumerator_guiCompoundAttributeListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiCompoundAttributeListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiCompoundAttributeListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_guiCompoundAttributeListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element cEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guiCompoundAttributeListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ("guiCompoundAttributeListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCompoundAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCompoundAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCompoundAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_guiCompoundAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST result ;
  const GALGAS_guiCompoundAttributeListAST * p = (const GALGAS_guiCompoundAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCompoundAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST::~ GALGAS_terminalLabelListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalLabelListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalLabelListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_terminalLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<list @terminalLabelListAST:" ;
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

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalLabelListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_terminalLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mTerminal,
                                                             const GALGAS_uint & in_mDisplayFlags
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalLabelListAST (in_mTerminal,
                                                          in_mDisplayFlags COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_uint & inOperand1
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_terminalLabelListAST_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_uint inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_terminalLabelListAST_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_terminalLabelListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_uint & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_terminalLabelListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mTerminal ;
      outOperand1 = element.mAttribute_mDisplayFlags ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_uint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_terminalLabelListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mTerminal ;
      outOperand1 = element.mAttribute_mDisplayFlags ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_terminalLabelListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mTerminal ;
      outOperand1 = element.mAttribute_mDisplayFlags ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_terminalLabelListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mTerminal ;
      outOperand1 = element.mAttribute_mDisplayFlags ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_terminalLabelListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mTerminal ;
      outOperand1 = element.mAttribute_mDisplayFlags ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::add_operation (const GALGAS_terminalLabelListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
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

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_terminalLabelListAST (true) ;
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

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_terminalLabelListAST (true) ;
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

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_terminalLabelListAST (true) ;
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

void GALGAS_terminalLabelListAST::plusAssign_operation (const GALGAS_terminalLabelListAST inOperand,
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

GALGAS_lstring GALGAS_terminalLabelListAST::getter_mTerminalAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mTerminal ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalLabelListAST::getter_mDisplayFlagsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mDisplayFlags ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalLabelListAST::objectCompare (const GALGAS_terminalLabelListAST & inOperand) const {
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

cEnumerator_terminalLabelListAST::cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalLabelListAST::~ cEnumerator_terminalLabelListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_terminalLabelListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_terminalLabelListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_terminalLabelListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element cEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mDisplayFlags ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @terminalLabelListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  const GALGAS_terminalLabelListAST * p = (const GALGAS_terminalLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST::~ GALGAS_guiLabelListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiLabelListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiLabelListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_guiLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<list @guiLabelListAST:" ;
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

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                          const GALGAS_terminalLabelListAST & inOperand1,
                                                                          const GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiLabelListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_guiLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                        const GALGAS_location & in_mLocation
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_guiLabelListAST (in_mLeadingCharacterStrippedCount,
                                                     in_mTerminalList,
                                                     in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::addAssign_operation (const GALGAS_uint & inOperand0,
                                                  const GALGAS_terminalLabelListAST & inOperand1,
                                                  const GALGAS_location & inOperand2
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_guiLabelListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                   const GALGAS_terminalLabelListAST inOperand1,
                                                   const GALGAS_location inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_guiLabelListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_guiLabelListAST::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                   GALGAS_terminalLabelListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_guiLabelListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeadingCharacterStrippedCount ;
      outOperand1 = element.mAttribute_mTerminalList ;
      outOperand2 = element.mAttribute_mLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::setter_popFirst (GALGAS_uint & outOperand0,
                                              GALGAS_terminalLabelListAST & outOperand1,
                                              GALGAS_location & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_guiLabelListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeadingCharacterStrippedCount ;
      outOperand1 = element.mAttribute_mTerminalList ;
      outOperand2 = element.mAttribute_mLocation ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::setter_popLast (GALGAS_uint & outOperand0,
                                             GALGAS_terminalLabelListAST & outOperand1,
                                             GALGAS_location & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_guiLabelListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeadingCharacterStrippedCount ;
      outOperand1 = element.mAttribute_mTerminalList ;
      outOperand2 = element.mAttribute_mLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::method_first (GALGAS_uint & outOperand0,
                                           GALGAS_terminalLabelListAST & outOperand1,
                                           GALGAS_location & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_guiLabelListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeadingCharacterStrippedCount ;
      outOperand1 = element.mAttribute_mTerminalList ;
      outOperand2 = element.mAttribute_mLocation ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST::method_last (GALGAS_uint & outOperand0,
                                          GALGAS_terminalLabelListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_guiLabelListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLeadingCharacterStrippedCount ;
      outOperand1 = element.mAttribute_mTerminalList ;
      outOperand2 = element.mAttribute_mLocation ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::add_operation (const GALGAS_guiLabelListAST & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
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

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_guiLabelListAST (true) ;
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

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_guiLabelListAST (true) ;
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

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_guiLabelListAST (true) ;
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

void GALGAS_guiLabelListAST::plusAssign_operation (const GALGAS_guiLabelListAST inOperand,
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

GALGAS_uint GALGAS_guiLabelListAST::getter_mLeadingCharacterStrippedCountAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLeadingCharacterStrippedCount ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_guiLabelListAST::getter_mTerminalListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mTerminalList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guiLabelListAST::getter_mLocationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLocation ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiLabelListAST::objectCompare (const GALGAS_guiLabelListAST & inOperand) const {
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

cEnumerator_guiLabelListAST::cEnumerator_guiLabelListAST (const GALGAS_guiLabelListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiLabelListAST::~ cEnumerator_guiLabelListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiLabelListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiLabelListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_guiLabelListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element cEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLeadingCharacterStrippedCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST cEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTerminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @guiLabelListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  const GALGAS_guiLabelListAST * p = (const GALGAS_guiLabelListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST::~ GALGAS_withLexiqueListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_withLexiqueListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_withLexiqueListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_withLexiqueListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<list @withLexiqueListAST:" ;
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

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_guiLabelListAST & inOperand1,
                                                                                const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_withLexiqueListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_withLexiqueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_lstring & in_mLexiqueFileName,
                                                           const GALGAS_guiLabelListAST & in_mLabels,
                                                           const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                           const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_withLexiqueListAST (in_mLexiqueFileName,
                                                        in_mLabels,
                                                        in_mSimpleAttributes,
                                                        in_mCompoundAttributes COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                     const GALGAS_guiLabelListAST & inOperand1,
                                                     const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                     const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_withLexiqueListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_guiLabelListAST inOperand1,
                                                      const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                      const GALGAS_guiCompoundAttributeListAST inOperand3,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_withLexiqueListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GALGAS_withLexiqueListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_guiLabelListAST & outOperand1,
                                                      GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                      GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_withLexiqueListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueFileName ;
      outOperand1 = element.mAttribute_mLabels ;
      outOperand2 = element.mAttribute_mSimpleAttributes ;
      outOperand3 = element.mAttribute_mCompoundAttributes ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS_guiLabelListAST & outOperand1,
                                                 GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                 GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_withLexiqueListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueFileName ;
      outOperand1 = element.mAttribute_mLabels ;
      outOperand2 = element.mAttribute_mSimpleAttributes ;
      outOperand3 = element.mAttribute_mCompoundAttributes ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS_guiLabelListAST & outOperand1,
                                                GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_withLexiqueListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueFileName ;
      outOperand1 = element.mAttribute_mLabels ;
      outOperand2 = element.mAttribute_mSimpleAttributes ;
      outOperand3 = element.mAttribute_mCompoundAttributes ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::method_first (GALGAS_lstring & outOperand0,
                                              GALGAS_guiLabelListAST & outOperand1,
                                              GALGAS_guiSimpleAttributeListAST & outOperand2,
                                              GALGAS_guiCompoundAttributeListAST & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_withLexiqueListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueFileName ;
      outOperand1 = element.mAttribute_mLabels ;
      outOperand2 = element.mAttribute_mSimpleAttributes ;
      outOperand3 = element.mAttribute_mCompoundAttributes ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST::method_last (GALGAS_lstring & outOperand0,
                                             GALGAS_guiLabelListAST & outOperand1,
                                             GALGAS_guiSimpleAttributeListAST & outOperand2,
                                             GALGAS_guiCompoundAttributeListAST & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_withLexiqueListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueFileName ;
      outOperand1 = element.mAttribute_mLabels ;
      outOperand2 = element.mAttribute_mSimpleAttributes ;
      outOperand3 = element.mAttribute_mCompoundAttributes ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::add_operation (const GALGAS_withLexiqueListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
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

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_withLexiqueListAST (true) ;
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

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_withLexiqueListAST (true) ;
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

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_withLexiqueListAST (true) ;
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

void GALGAS_withLexiqueListAST::plusAssign_operation (const GALGAS_withLexiqueListAST inOperand,
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

GALGAS_lstring GALGAS_withLexiqueListAST::getter_mLexiqueFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLexiqueFileName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_withLexiqueListAST::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLabels ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_withLexiqueListAST::getter_mSimpleAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mSimpleAttributes ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_withLexiqueListAST::getter_mCompoundAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_guiCompoundAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mCompoundAttributes ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_withLexiqueListAST::objectCompare (const GALGAS_withLexiqueListAST & inOperand) const {
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

cEnumerator_withLexiqueListAST::cEnumerator_withLexiqueListAST (const GALGAS_withLexiqueListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_withLexiqueListAST::~ cEnumerator_withLexiqueListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_withLexiqueListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_withLexiqueListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_withLexiqueListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element cEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLexiqueFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST cEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST cEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mSimpleAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST cEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mCompoundAttributes ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @withLexiqueListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  const GALGAS_withLexiqueListAST * p = (const GALGAS_withLexiqueListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_withLexiqueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList::~ GALGAS_guiCommandLineOptionList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCommandLineOptionList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiCommandLineOptionList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_guiCommandLineOptionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<list @guiCommandLineOptionList:" ;
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

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_char & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_string & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_guiCommandLineOptionList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_string & in_mOptionComponent,
                                                                 const GALGAS_string & in_mOptionIdentifier,
                                                                 const GALGAS_char & in_mOptionChar,
                                                                 const GALGAS_string & in_mOptionString,
                                                                 const GALGAS_string & in_mComment
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = NULL ;
  macroMyNew (p, cCollectionElement_guiCommandLineOptionList (in_mOptionComponent,
                                                              in_mOptionIdentifier,
                                                              in_mOptionChar,
                                                              in_mOptionString,
                                                              in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::addAssign_operation (const GALGAS_string & inOperand0,
                                                           const GALGAS_string & inOperand1,
                                                           const GALGAS_char & inOperand2,
                                                           const GALGAS_string & inOperand3,
                                                           const GALGAS_string & inOperand4
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_guiCommandLineOptionList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_char inOperand2,
                                                            const GALGAS_string inOperand3,
                                                            const GALGAS_string inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_guiCommandLineOptionList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GALGAS_guiCommandLineOptionList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_char & outOperand2,
                                                            GALGAS_string & outOperand3,
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
      const GALGAS_guiCommandLineOptionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionComponent ;
      outOperand1 = element.mAttribute_mOptionIdentifier ;
      outOperand2 = element.mAttribute_mOptionChar ;
      outOperand3 = element.mAttribute_mOptionString ;
      outOperand4 = element.mAttribute_mComment ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::setter_popFirst (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_char & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_string & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_guiCommandLineOptionList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionComponent ;
      outOperand1 = element.mAttribute_mOptionIdentifier ;
      outOperand2 = element.mAttribute_mOptionChar ;
      outOperand3 = element.mAttribute_mOptionString ;
      outOperand4 = element.mAttribute_mComment ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::setter_popLast (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_char & outOperand2,
                                                      GALGAS_string & outOperand3,
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
      const GALGAS_guiCommandLineOptionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionComponent ;
      outOperand1 = element.mAttribute_mOptionIdentifier ;
      outOperand2 = element.mAttribute_mOptionChar ;
      outOperand3 = element.mAttribute_mOptionString ;
      outOperand4 = element.mAttribute_mComment ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::method_first (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_char & outOperand2,
                                                    GALGAS_string & outOperand3,
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
      const GALGAS_guiCommandLineOptionList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionComponent ;
      outOperand1 = element.mAttribute_mOptionIdentifier ;
      outOperand2 = element.mAttribute_mOptionChar ;
      outOperand3 = element.mAttribute_mOptionString ;
      outOperand4 = element.mAttribute_mComment ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList::method_last (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_char & outOperand2,
                                                   GALGAS_string & outOperand3,
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
      const GALGAS_guiCommandLineOptionList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mOptionComponent ;
      outOperand1 = element.mAttribute_mOptionIdentifier ;
      outOperand2 = element.mAttribute_mOptionChar ;
      outOperand3 = element.mAttribute_mOptionString ;
      outOperand4 = element.mAttribute_mComment ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::add_operation (const GALGAS_guiCommandLineOptionList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result ;
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

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_guiCommandLineOptionList (true) ;
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

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_guiCommandLineOptionList (true) ;
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

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_guiCommandLineOptionList (true) ;
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

void GALGAS_guiCommandLineOptionList::plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
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

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionComponent ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionIdentifier ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_char result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionChar ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mOptionString ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mComment ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiCommandLineOptionList::objectCompare (const GALGAS_guiCommandLineOptionList & inOperand) const {
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

cEnumerator_guiCommandLineOptionList::cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guiCommandLineOptionList::~ cEnumerator_guiCommandLineOptionList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiCommandLineOptionList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_guiCommandLineOptionList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_guiCommandLineOptionList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element cEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiCommandLineOptionList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  const GALGAS_guiCommandLineOptionList * p = (const GALGAS_guiCommandLineOptionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCommandLineOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMap::cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_string & in_mLexiqueName
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMap (mAttribute_lkey, mAttribute_mLexiqueName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mAttribute_mLexiqueName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMap * operand = (cMapElement_extensionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (operand->mAttribute_mLexiqueName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap::GALGAS_extensionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap::GALGAS_extensionMap (const GALGAS_extensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap & GALGAS_extensionMap::operator = (const GALGAS_extensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::constructor_mapWithMapToOverride (const GALGAS_extensionMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_string & inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_string inArgument0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = NULL ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionMap::getter_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap::setter_setMLexiqueNameForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mAttribute_mLexiqueName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMap * GALGAS_extensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * result = (cMapElement_extensionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionMap::cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionMap::~ cEnumerator_extensionMap (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_extensionMap::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_extensionMap::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_extensionMap::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element cEnumerator_extensionMap::current (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return GALGAS_extensionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mAttribute_mLexiqueName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @extensionMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_extensionMap::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  const GALGAS_extensionMap * p = (const GALGAS_extensionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList::GALGAS_textMacroList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList::~ GALGAS_textMacroList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_textMacroList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_textMacroList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_textMacroList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "<list @textMacroList:" ;
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

GALGAS_textMacroList GALGAS_textMacroList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_textMacroList (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_textMacroList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mKey,
                                                      const GALGAS_string & in_mContents
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_textMacroList * p = NULL ;
  macroMyNew (p, cCollectionElement_textMacroList (in_mKey,
                                                   in_mContents COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_textMacroList_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_textMacroList_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_textMacroList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_textMacroList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mContents ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_textMacroList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mContents ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_textMacroList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mContents ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_textMacroList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mContents ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_textMacroList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mKey ;
      outOperand1 = element.mAttribute_mContents ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::add_operation (const GALGAS_textMacroList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
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

GALGAS_textMacroList GALGAS_textMacroList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_textMacroList (true) ;
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

GALGAS_textMacroList GALGAS_textMacroList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_textMacroList (true) ;
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

GALGAS_textMacroList GALGAS_textMacroList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_textMacroList (true) ;
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

void GALGAS_textMacroList::plusAssign_operation (const GALGAS_textMacroList inOperand,
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

GALGAS_string GALGAS_textMacroList::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mKey ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList::getter_mContentsAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mContents ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_textMacroList::objectCompare (const GALGAS_textMacroList & inOperand) const {
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

cEnumerator_textMacroList::cEnumerator_textMacroList (const GALGAS_textMacroList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_textMacroList::~ cEnumerator_textMacroList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_textMacroList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_textMacroList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_textMacroList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element cEnumerator_textMacroList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mContents ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @textMacroList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_textMacroList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_textMacroList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_textMacroList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  const GALGAS_textMacroList * p = (const GALGAS_textMacroList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_textMacroList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList::~ GALGAS_importedLexiqueList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_importedLexiqueList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_importedLexiqueList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_importedLexiqueList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<list @importedLexiqueList:" ;
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

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_textMacroList & inOperand3,
                                                                                  const GALGAS_guiLabelListAST & inOperand4
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_importedLexiqueList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_importedLexiqueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mLexiqueClassName,
                                                            const GALGAS_string & in_mBlockComment,
                                                            const GALGAS_string & in_mTitle,
                                                            const GALGAS_textMacroList & in_mTextMacroList,
                                                            const GALGAS_guiLabelListAST & in_mLabels
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = NULL ;
  macroMyNew (p, cCollectionElement_importedLexiqueList (in_mLexiqueClassName,
                                                         in_mBlockComment,
                                                         in_mTitle,
                                                         in_mTextMacroList,
                                                         in_mLabels COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_string & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_textMacroList & inOperand3,
                                                      const GALGAS_guiLabelListAST & inOperand4
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_importedLexiqueList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_string inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_textMacroList inOperand3,
                                                       const GALGAS_guiLabelListAST inOperand4,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    const GALGAS_importedLexiqueList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GALGAS_importedLexiqueList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       GALGAS_textMacroList & outOperand3,
                                                       GALGAS_guiLabelListAST & outOperand4,
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
      const GALGAS_importedLexiqueList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueClassName ;
      outOperand1 = element.mAttribute_mBlockComment ;
      outOperand2 = element.mAttribute_mTitle ;
      outOperand3 = element.mAttribute_mTextMacroList ;
      outOperand4 = element.mAttribute_mLabels ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_textMacroList & outOperand3,
                                                  GALGAS_guiLabelListAST & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_importedLexiqueList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueClassName ;
      outOperand1 = element.mAttribute_mBlockComment ;
      outOperand2 = element.mAttribute_mTitle ;
      outOperand3 = element.mAttribute_mTextMacroList ;
      outOperand4 = element.mAttribute_mLabels ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_textMacroList & outOperand3,
                                                 GALGAS_guiLabelListAST & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_importedLexiqueList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueClassName ;
      outOperand1 = element.mAttribute_mBlockComment ;
      outOperand2 = element.mAttribute_mTitle ;
      outOperand3 = element.mAttribute_mTextMacroList ;
      outOperand4 = element.mAttribute_mLabels ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_textMacroList & outOperand3,
                                               GALGAS_guiLabelListAST & outOperand4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_importedLexiqueList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueClassName ;
      outOperand1 = element.mAttribute_mBlockComment ;
      outOperand2 = element.mAttribute_mTitle ;
      outOperand3 = element.mAttribute_mTextMacroList ;
      outOperand4 = element.mAttribute_mLabels ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_textMacroList & outOperand3,
                                              GALGAS_guiLabelListAST & outOperand4,
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
      const GALGAS_importedLexiqueList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mLexiqueClassName ;
      outOperand1 = element.mAttribute_mBlockComment ;
      outOperand2 = element.mAttribute_mTitle ;
      outOperand3 = element.mAttribute_mTextMacroList ;
      outOperand4 = element.mAttribute_mLabels ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::add_operation (const GALGAS_importedLexiqueList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result ;
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

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_importedLexiqueList (true) ;
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

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_importedLexiqueList (true) ;
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

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_importedLexiqueList (true) ;
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

void GALGAS_importedLexiqueList::plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
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

GALGAS_string GALGAS_importedLexiqueList::getter_mLexiqueClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLexiqueClassName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::getter_mBlockCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mBlockComment ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList::getter_mTitleAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mTitle ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_importedLexiqueList::getter_mTextMacroListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mTextMacroList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_importedLexiqueList::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mLabels ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_importedLexiqueList::objectCompare (const GALGAS_importedLexiqueList & inOperand) const {
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

cEnumerator_importedLexiqueList::cEnumerator_importedLexiqueList (const GALGAS_importedLexiqueList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_importedLexiqueList::~ cEnumerator_importedLexiqueList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_importedLexiqueList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_importedLexiqueList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_importedLexiqueList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element cEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLexiqueClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mBlockComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTitle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList cEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mTextMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST cEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mLabels ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @importedLexiqueList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_importedLexiqueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_importedLexiqueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  const GALGAS_importedLexiqueList * p = (const GALGAS_importedLexiqueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_importedLexiqueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST::GALGAS_galgas_33_GUIComponentListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST::~ GALGAS_galgas_33_GUIComponentListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_GUIComponentListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_galgas_33_GUIComponentListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_galgas_33_GUIComponentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<list @galgas_33_GUIComponentListAST:" ;
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

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstringlist & inOperand1,
                                                                                                      const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                                      const GALGAS_withLexiqueListAST & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_galgas_33_GUIComponentListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_galgas_33_GUIComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mGUIComponentName,
                                                                      const GALGAS_lstringlist & in_mImportedOptionList,
                                                                      const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                      const GALGAS_withLexiqueListAST & in_mWithLexiqueList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_GUIComponentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_galgas_33_GUIComponentListAST (in_mGUIComponentName,
                                                                   in_mImportedOptionList,
                                                                   in_mGlobalSimpleAttributeList,
                                                                   in_mWithLexiqueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1,
                                                                const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                const GALGAS_withLexiqueListAST & inOperand3
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_galgas_33_GUIComponentListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstringlist inOperand1,
                                                                 const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                                 const GALGAS_withLexiqueListAST inOperand3,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_galgas_33_GUIComponentListAST_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GALGAS_galgas_33_GUIComponentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstringlist & outOperand1,
                                                                 GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                                 GALGAS_withLexiqueListAST & outOperand3,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_galgas_33_GUIComponentListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGUIComponentName ;
      outOperand1 = element.mAttribute_mImportedOptionList ;
      outOperand2 = element.mAttribute_mGlobalSimpleAttributeList ;
      outOperand3 = element.mAttribute_mWithLexiqueList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                            GALGAS_withLexiqueListAST & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_galgas_33_GUIComponentListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGUIComponentName ;
      outOperand1 = element.mAttribute_mImportedOptionList ;
      outOperand2 = element.mAttribute_mGlobalSimpleAttributeList ;
      outOperand3 = element.mAttribute_mWithLexiqueList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstringlist & outOperand1,
                                                           GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                           GALGAS_withLexiqueListAST & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_galgas_33_GUIComponentListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGUIComponentName ;
      outOperand1 = element.mAttribute_mImportedOptionList ;
      outOperand2 = element.mAttribute_mGlobalSimpleAttributeList ;
      outOperand3 = element.mAttribute_mWithLexiqueList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                         GALGAS_withLexiqueListAST & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_galgas_33_GUIComponentListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGUIComponentName ;
      outOperand1 = element.mAttribute_mImportedOptionList ;
      outOperand2 = element.mAttribute_mGlobalSimpleAttributeList ;
      outOperand3 = element.mAttribute_mWithLexiqueList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstringlist & outOperand1,
                                                        GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                        GALGAS_withLexiqueListAST & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_galgas_33_GUIComponentListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGUIComponentName ;
      outOperand1 = element.mAttribute_mImportedOptionList ;
      outOperand2 = element.mAttribute_mGlobalSimpleAttributeList ;
      outOperand3 = element.mAttribute_mWithLexiqueList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::add_operation (const GALGAS_galgas_33_GUIComponentListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result ;
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

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_galgas_33_GUIComponentListAST (true) ;
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

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_galgas_33_GUIComponentListAST (true) ;
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

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GUIComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_galgas_33_GUIComponentListAST (true) ;
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

void GALGAS_galgas_33_GUIComponentListAST::plusAssign_operation (const GALGAS_galgas_33_GUIComponentListAST inOperand,
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

GALGAS_lstring GALGAS_galgas_33_GUIComponentListAST::getter_mGUIComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mGUIComponentName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GUIComponentListAST::getter_mImportedOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mImportedOptionList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_galgas_33_GUIComponentListAST::getter_mGlobalSimpleAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mGlobalSimpleAttributeList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_galgas_33_GUIComponentListAST::getter_mWithLexiqueListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mWithLexiqueList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_GUIComponentListAST::objectCompare (const GALGAS_galgas_33_GUIComponentListAST & inOperand) const {
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

cEnumerator_galgas_33_GUIComponentListAST::cEnumerator_galgas_33_GUIComponentListAST (const GALGAS_galgas_33_GUIComponentListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_galgas_33_GUIComponentListAST::~ cEnumerator_galgas_33_GUIComponentListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_galgas_33_GUIComponentListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_galgas_33_GUIComponentListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_galgas_33_GUIComponentListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element cEnumerator_galgas_33_GUIComponentListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_galgas_33_GUIComponentListAST::current_mGUIComponentName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mGUIComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_galgas_33_GUIComponentListAST::current_mImportedOptionList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mImportedOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST cEnumerator_galgas_33_GUIComponentListAST::current_mGlobalSimpleAttributeList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mGlobalSimpleAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST cEnumerator_galgas_33_GUIComponentListAST::current_mWithLexiqueList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mWithLexiqueList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3GUIComponentListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST ("galgas3GUIComponentListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_GUIComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_GUIComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GUIComponentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST GALGAS_galgas_33_GUIComponentListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST result ;
  const GALGAS_galgas_33_GUIComponentListAST * p = (const GALGAS_galgas_33_GUIComponentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GUIComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GUIComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext::GALGAS_guiAnalysisContext (void) :
mAttribute_mImportedOptionComponentList (),
mAttribute_mBoolOptionList (),
mAttribute_mUIntOptionList (),
mAttribute_mStringOptionList (),
mAttribute_mNibAndClassList (),
mAttribute_mExtensionMap (),
mAttribute_mWithLexiqueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext::~ GALGAS_guiAnalysisContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext::GALGAS_guiAnalysisContext (const GALGAS_stringlist & inOperand0,
                                                      const GALGAS_guiCommandLineOptionList & inOperand1,
                                                      const GALGAS_guiCommandLineOptionList & inOperand2,
                                                      const GALGAS_guiCommandLineOptionList & inOperand3,
                                                      const GALGAS_stringlist & inOperand4,
                                                      const GALGAS_extensionMap & inOperand5,
                                                      const GALGAS_importedLexiqueList & inOperand6) :
mAttribute_mImportedOptionComponentList (inOperand0),
mAttribute_mBoolOptionList (inOperand1),
mAttribute_mUIntOptionList (inOperand2),
mAttribute_mStringOptionList (inOperand3),
mAttribute_mNibAndClassList (inOperand4),
mAttribute_mExtensionMap (inOperand5),
mAttribute_mWithLexiqueList (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiAnalysisContext (GALGAS_stringlist::constructor_emptyList (HERE),
                                    GALGAS_guiCommandLineOptionList::constructor_emptyList (HERE),
                                    GALGAS_guiCommandLineOptionList::constructor_emptyList (HERE),
                                    GALGAS_guiCommandLineOptionList::constructor_emptyList (HERE),
                                    GALGAS_stringlist::constructor_emptyList (HERE),
                                    GALGAS_extensionMap::constructor_emptyMap (HERE),
                                    GALGAS_importedLexiqueList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::constructor_new (const GALGAS_stringlist & inOperand0,
                                                                      const GALGAS_guiCommandLineOptionList & inOperand1,
                                                                      const GALGAS_guiCommandLineOptionList & inOperand2,
                                                                      const GALGAS_guiCommandLineOptionList & inOperand3,
                                                                      const GALGAS_stringlist & inOperand4,
                                                                      const GALGAS_extensionMap & inOperand5,
                                                                      const GALGAS_importedLexiqueList & inOperand6 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_guiAnalysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiAnalysisContext::objectCompare (const GALGAS_guiAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mImportedOptionComponentList.objectCompare (inOperand.mAttribute_mImportedOptionComponentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoolOptionList.objectCompare (inOperand.mAttribute_mBoolOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUIntOptionList.objectCompare (inOperand.mAttribute_mUIntOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStringOptionList.objectCompare (inOperand.mAttribute_mStringOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNibAndClassList.objectCompare (inOperand.mAttribute_mNibAndClassList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtensionMap.objectCompare (inOperand.mAttribute_mExtensionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWithLexiqueList.objectCompare (inOperand.mAttribute_mWithLexiqueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiAnalysisContext::isValid (void) const {
  return mAttribute_mImportedOptionComponentList.isValid () && mAttribute_mBoolOptionList.isValid () && mAttribute_mUIntOptionList.isValid () && mAttribute_mStringOptionList.isValid () && mAttribute_mNibAndClassList.isValid () && mAttribute_mExtensionMap.isValid () && mAttribute_mWithLexiqueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiAnalysisContext::drop (void) {
  mAttribute_mImportedOptionComponentList.drop () ;
  mAttribute_mBoolOptionList.drop () ;
  mAttribute_mUIntOptionList.drop () ;
  mAttribute_mStringOptionList.drop () ;
  mAttribute_mNibAndClassList.drop () ;
  mAttribute_mExtensionMap.drop () ;
  mAttribute_mWithLexiqueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiAnalysisContext::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @guiAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mImportedOptionComponentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoolOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUIntOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStringOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNibAndClassList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtensionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWithLexiqueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_guiAnalysisContext::getter_mImportedOptionComponentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedOptionComponentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiAnalysisContext::getter_mBoolOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoolOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiAnalysisContext::getter_mUIntOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUIntOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList GALGAS_guiAnalysisContext::getter_mStringOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_guiAnalysisContext::getter_mNibAndClassList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNibAndClassList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap GALGAS_guiAnalysisContext::getter_mExtensionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList GALGAS_guiAnalysisContext::getter_mWithLexiqueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWithLexiqueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @guiAnalysisContext type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiAnalysisContext ("guiAnalysisContext",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiAnalysisContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiAnalysisContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guiAnalysisContext result ;
  const GALGAS_guiAnalysisContext * p = (const GALGAS_guiAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForGeneration::cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_guiAnalysisContext & in_mGuiComponentContext
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mGuiComponentContext (in_mGuiComponentContext) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_optionComponentMapForGeneration::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mGuiComponentContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_optionComponentMapForGeneration::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionComponentMapForGeneration (mAttribute_lkey, mAttribute_mGuiComponentContext COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_optionComponentMapForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuiComponentContext" ":" ;
  mAttribute_mGuiComponentContext.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_optionComponentMapForGeneration::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForGeneration * operand = (cMapElement_optionComponentMapForGeneration *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mGuiComponentContext.objectCompare (operand->mAttribute_mGuiComponentContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration & GALGAS_optionComponentMapForGeneration::operator = (const GALGAS_optionComponentMapForGeneration & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForGeneration & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForGeneration result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_guiAnalysisContext & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForGeneration insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_guiAnalysisContext inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_optionComponentMapForGeneration::getter_mGuiComponentContextForKey (const GALGAS_string & inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) attributes ;
  GALGAS_guiAnalysisContext result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    result = p->mAttribute_mGuiComponentContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration::setter_setMGuiComponentContextForKey (GALGAS_guiAnalysisContext inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForGeneration * p = (cMapElement_optionComponentMapForGeneration *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    p->mAttribute_mGuiComponentContext = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForGeneration * GALGAS_optionComponentMapForGeneration::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * result = (cMapElement_optionComponentMapForGeneration *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForGeneration) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionComponentMapForGeneration::cEnumerator_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArrayEx, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionComponentMapForGeneration::~ cEnumerator_optionComponentMapForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_optionComponentMapForGeneration::hasCurrentObject (void) const {
  return mIndex < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_optionComponentMapForGeneration::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArrayEx.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

const cCollectionElement * cEnumerator_optionComponentMapForGeneration::currentObjectPtr (LOCATION_ARGS) const {
  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element cEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return GALGAS_optionComponentMapForGeneration_2D_element (p->mAttribute_lkey, p->mAttribute_mGuiComponentContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext cEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return p->mAttribute_mGuiComponentContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @optionComponentMapForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  const GALGAS_optionComponentMapForGeneration * p = (const GALGAS_optionComponentMapForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST::~ GALGAS_propertyInCollectionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyInCollectionListAST (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_propertyInCollectionListAST::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_propertyInCollectionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<list @propertyInCollectionListAST:" ;
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

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstringlist & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_propertyInCollectionListAST (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_propertyInCollectionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mPropertyTypeName,
                                                                    const GALGAS_lstring & in_mPropertyName,
                                                                    const GALGAS_lstringlist & in_mFeatureList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyInCollectionListAST (in_mPropertyTypeName,
                                                                 in_mPropertyName,
                                                                 in_mFeatureList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstringlist & inOperand2
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_propertyInCollectionListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstringlist inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_propertyInCollectionListAST_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_propertyInCollectionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstringlist & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_propertyInCollectionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mPropertyTypeName ;
      outOperand1 = element.mAttribute_mPropertyName ;
      outOperand2 = element.mAttribute_mFeatureList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstringlist & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_propertyInCollectionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mPropertyTypeName ;
      outOperand1 = element.mAttribute_mPropertyName ;
      outOperand2 = element.mAttribute_mFeatureList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstringlist & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_propertyInCollectionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mPropertyTypeName ;
      outOperand1 = element.mAttribute_mPropertyName ;
      outOperand2 = element.mAttribute_mFeatureList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstringlist & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_propertyInCollectionListAST_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mPropertyTypeName ;
      outOperand1 = element.mAttribute_mPropertyName ;
      outOperand2 = element.mAttribute_mFeatureList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_propertyInCollectionListAST_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mPropertyTypeName ;
      outOperand1 = element.mAttribute_mPropertyName ;
      outOperand2 = element.mAttribute_mFeatureList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::add_operation (const GALGAS_propertyInCollectionListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
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

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_propertyInCollectionListAST (true) ;
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

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_propertyInCollectionListAST (true) ;
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

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_propertyInCollectionListAST (true) ;
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

void GALGAS_propertyInCollectionListAST::plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
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

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mPropertyTypeName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mPropertyName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_propertyInCollectionListAST::getter_mFeatureListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFeatureList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyInCollectionListAST::objectCompare (const GALGAS_propertyInCollectionListAST & inOperand) const {
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

cEnumerator_propertyInCollectionListAST::cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyInCollectionListAST::~ cEnumerator_propertyInCollectionListAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_propertyInCollectionListAST::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_propertyInCollectionListAST::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_propertyInCollectionListAST::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element cEnumerator_propertyInCollectionListAST::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_propertyInCollectionListAST::current_mFeatureList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFeatureList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @propertyInCollectionListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyInCollectionListAST ("propertyInCollectionListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyInCollectionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyInCollectionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  const GALGAS_propertyInCollectionListAST * p = (const GALGAS_propertyInCollectionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyInCollectionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::GALGAS_typedPropertyList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::~ GALGAS_typedPropertyList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typedPropertyList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_typedPropertyList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_typedPropertyList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<list @typedPropertyList:" ;
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

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_bool & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_typedPropertyList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
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
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_bool & inOperand2,
                                                    const GALGAS_bool & inOperand3
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_typedPropertyList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_bool inOperand2,
                                                     const GALGAS_bool inOperand3,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    const GALGAS_typedPropertyList_2D_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GALGAS_typedPropertyList::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_typedPropertyList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeProxy ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mHasSetter ;
      outOperand3 = element.mAttribute_mHasGetter ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_typedPropertyList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeProxy ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mHasSetter ;
      outOperand3 = element.mAttribute_mHasGetter ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_bool & outOperand2,
                                               GALGAS_bool & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_typedPropertyList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeProxy ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mHasSetter ;
      outOperand3 = element.mAttribute_mHasGetter ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_bool & outOperand2,
                                             GALGAS_bool & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_typedPropertyList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeProxy ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mHasSetter ;
      outOperand3 = element.mAttribute_mHasGetter ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            GALGAS_bool & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_typedPropertyList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mAttributeTypeProxy ;
      outOperand1 = element.mAttribute_mAttributeName ;
      outOperand2 = element.mAttribute_mHasSetter ;
      outOperand3 = element.mAttribute_mHasGetter ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::add_operation (const GALGAS_typedPropertyList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
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

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_typedPropertyList (true) ;
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

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_typedPropertyList (true) ;
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

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_typedPropertyList (true) ;
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

void GALGAS_typedPropertyList::plusAssign_operation (const GALGAS_typedPropertyList inOperand,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typedPropertyList::getter_mAttributeTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mAttributeTypeProxy ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedPropertyList::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_bool GALGAS_typedPropertyList::getter_mHasSetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mHasSetter ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList::getter_mHasGetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mHasGetter ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typedPropertyList::objectCompare (const GALGAS_typedPropertyList & inOperand) const {
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

cEnumerator_typedPropertyList::cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typedPropertyList::~ cEnumerator_typedPropertyList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_typedPropertyList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_typedPropertyList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_typedPropertyList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element cEnumerator_typedPropertyList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_typedPropertyList::current_mAttributeTypeProxy (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAttributeTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typedPropertyList::current_mAttributeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasSetter (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mHasSetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasGetter (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mHasGetter ;
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

GALGAS_enumConstantList::GALGAS_enumConstantList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList::~ GALGAS_enumConstantList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_enumConstantList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<list @enumConstantList:" ;
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

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS__32_lstringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantList (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
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
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS__32_lstringlist & inOperand1
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_enumConstantList_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                    const GALGAS__32_lstringlist inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_enumConstantList_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_enumConstantList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                    GALGAS__32_lstringlist & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_enumConstantList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueDefinitionList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::setter_popFirst (GALGAS_lstring & outOperand0,
                                               GALGAS__32_lstringlist & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_enumConstantList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueDefinitionList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::setter_popLast (GALGAS_lstring & outOperand0,
                                              GALGAS__32_lstringlist & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_enumConstantList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueDefinitionList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS__32_lstringlist & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_enumConstantList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueDefinitionList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS__32_lstringlist & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_enumConstantList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueDefinitionList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::add_operation (const GALGAS_enumConstantList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
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

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_enumConstantList (true) ;
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

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_enumConstantList (true) ;
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

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_enumConstantList (true) ;
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

void GALGAS_enumConstantList::plusAssign_operation (const GALGAS_enumConstantList inOperand,
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

GALGAS_lstring GALGAS_enumConstantList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mConstantName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_enumConstantList::getter_mAssociatedValueDefinitionListAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mAssociatedValueDefinitionList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantList::objectCompare (const GALGAS_enumConstantList & inOperand) const {
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

cEnumerator_enumConstantList::cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumConstantList::~ cEnumerator_enumConstantList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_enumConstantList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_enumConstantList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_enumConstantList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element cEnumerator_enumConstantList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_enumConstantList::current_mConstantName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist cEnumerator_enumConstantList::current_mAssociatedValueDefinitionList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAssociatedValueDefinitionList ;
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

GALGAS_enumConstantListForGeneration::GALGAS_enumConstantListForGeneration (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration::~ GALGAS_enumConstantListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantListForGeneration (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantListForGeneration::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_enumConstantListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<list @enumConstantListForGeneration:" ;
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

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantListForGeneration (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_enumConstantListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mConstantName,
                                                                      const GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_enumConstantListForGeneration (in_mConstantName,
                                                                   in_mAssociatedValueTypeList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_enumConstantListForGeneration_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_unifiedTypeMapProxyList inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_enumConstantListForGeneration_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_enumConstantListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_enumConstantListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueTypeList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_enumConstantListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueTypeList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_enumConstantListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueTypeList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_enumConstantListForGeneration_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueTypeList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_unifiedTypeMapProxyList & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_enumConstantListForGeneration_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstantName ;
      outOperand1 = element.mAttribute_mAssociatedValueTypeList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::add_operation (const GALGAS_enumConstantListForGeneration & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
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

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_enumConstantListForGeneration (true) ;
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

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_enumConstantListForGeneration (true) ;
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

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_enumConstantListForGeneration (true) ;
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

void GALGAS_enumConstantListForGeneration::plusAssign_operation (const GALGAS_enumConstantListForGeneration inOperand,
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

GALGAS_string GALGAS_enumConstantListForGeneration::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mConstantName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_enumConstantListForGeneration::getter_mAssociatedValueTypeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mAssociatedValueTypeList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantListForGeneration::objectCompare (const GALGAS_enumConstantListForGeneration & inOperand) const {
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

cEnumerator_enumConstantListForGeneration::cEnumerator_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumConstantListForGeneration::~ cEnumerator_enumConstantListForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_enumConstantListForGeneration::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_enumConstantListForGeneration::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_enumConstantListForGeneration::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element cEnumerator_enumConstantListForGeneration::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_enumConstantListForGeneration::current_mConstantName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cEnumerator_enumConstantListForGeneration::current_mAssociatedValueTypeList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mAssociatedValueTypeList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantListForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantListForGeneration ("enumConstantListForGeneration",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration result ;
  const GALGAS_enumConstantListForGeneration * p = (const GALGAS_enumConstantListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList::GALGAS_unifiedTypeMapProxyList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList::~ GALGAS_unifiedTypeMapProxyList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapProxyList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unifiedTypeMapProxyList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_unifiedTypeMapProxyList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<list @unifiedTypeMapProxyList:" ;
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

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_unifiedTypeMapProxyList (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_unifiedTypeMapProxyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapProxyList * p = NULL ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_unifiedTypeMapProxyList_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_unifiedTypeMapProxyList_2D_element element (inOperand0) ;
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

void GALGAS_unifiedTypeMapProxyList::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_unifiedTypeMapProxyList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mType ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_unifiedTypeMapProxyList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mType ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_unifiedTypeMapProxyList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mType ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_unifiedTypeMapProxyList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mType ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_unifiedTypeMapProxyList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mType ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::add_operation (const GALGAS_unifiedTypeMapProxyList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
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

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_unifiedTypeMapProxyList (true) ;
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

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_unifiedTypeMapProxyList (true) ;
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

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_unifiedTypeMapProxyList (true) ;
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

void GALGAS_unifiedTypeMapProxyList::plusAssign_operation (const GALGAS_unifiedTypeMapProxyList inOperand,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMapProxyList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mType ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_unifiedTypeMapProxyList::objectCompare (const GALGAS_unifiedTypeMapProxyList & inOperand) const {
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

cEnumerator_unifiedTypeMapProxyList::cEnumerator_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMapProxyList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMapProxyList::~ cEnumerator_unifiedTypeMapProxyList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_unifiedTypeMapProxyList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_unifiedTypeMapProxyList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_unifiedTypeMapProxyList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element cEnumerator_unifiedTypeMapProxyList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMapProxyList::current_mType (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @unifiedTypeMapProxyList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ("unifiedTypeMapProxyList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  const GALGAS_unifiedTypeMapProxyList * p = (const GALGAS_unifiedTypeMapProxyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList::~ GALGAS_externTypeConstructorList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeConstructorList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_externTypeConstructorList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_externTypeConstructorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<list @externTypeConstructorList:" ;
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

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeConstructorList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_externTypeConstructorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mConstructorName,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeConstructorList (in_mConstructorName,
                                                               in_mResultTypeName,
                                                               in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1,
                                                            const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_externTypeConstructorList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_externTypeConstructorList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_externTypeConstructorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_externTypeConstructorList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstructorName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeConstructorList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstructorName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeConstructorList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstructorName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeConstructorList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstructorName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeConstructorList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mConstructorName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::add_operation (const GALGAS_externTypeConstructorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
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

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_externTypeConstructorList (true) ;
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

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_externTypeConstructorList (true) ;
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

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_externTypeConstructorList (true) ;
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

void GALGAS_externTypeConstructorList::plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
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

GALGAS_lstring GALGAS_externTypeConstructorList::getter_mConstructorNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mConstructorName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeConstructorList::getter_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mResultTypeName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeConstructorList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mParameterList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeConstructorList::objectCompare (const GALGAS_externTypeConstructorList & inOperand) const {
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

cEnumerator_externTypeConstructorList::cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeConstructorList::~ cEnumerator_externTypeConstructorList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeConstructorList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeConstructorList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_externTypeConstructorList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element cEnumerator_externTypeConstructorList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mConstructorName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mResultTypeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeConstructorList::current_mParameterList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mParameterList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @externTypeConstructorList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeConstructorList ("externTypeConstructorList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeConstructorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  const GALGAS_externTypeConstructorList * p = (const GALGAS_externTypeConstructorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeConstructorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList::~ GALGAS_externTypeGetterList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeGetterList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_externTypeGetterList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_externTypeGetterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<list @externTypeGetterList:" ;
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

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeGetterList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_externTypeGetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mGetterName,
                                                             const GALGAS_lstring & in_mResultTypeName,
                                                             const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeGetterList (in_mGetterName,
                                                          in_mResultTypeName,
                                                          in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_lstring & inOperand1,
                                                       const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_externTypeGetterList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_lstring inOperand1,
                                                        const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_externTypeGetterList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_externTypeGetterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_externTypeGetterList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGetterName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeGetterList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGetterName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeGetterList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGetterName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeGetterList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGetterName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_typeNameFormalParameterNameList & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeGetterList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mGetterName ;
      outOperand1 = element.mAttribute_mResultTypeName ;
      outOperand2 = element.mAttribute_mParameterList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::add_operation (const GALGAS_externTypeGetterList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
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

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_externTypeGetterList (true) ;
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

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_externTypeGetterList (true) ;
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

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_externTypeGetterList (true) ;
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

void GALGAS_externTypeGetterList::plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
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

GALGAS_lstring GALGAS_externTypeGetterList::getter_mGetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mGetterName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeGetterList::getter_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mResultTypeName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeGetterList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mParameterList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeGetterList::objectCompare (const GALGAS_externTypeGetterList & inOperand) const {
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

cEnumerator_externTypeGetterList::cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeGetterList::~ cEnumerator_externTypeGetterList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeGetterList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeGetterList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_externTypeGetterList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element cEnumerator_externTypeGetterList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeGetterList::current_mGetterName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeGetterList::current_mResultTypeName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeGetterList::current_mParameterList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mParameterList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeGetterList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeGetterList ("externTypeGetterList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeGetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeGetterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeGetterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  const GALGAS_externTypeGetterList * p = (const GALGAS_externTypeGetterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeGetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeSetterList::GALGAS_externTypeSetterList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeSetterList::~ GALGAS_externTypeSetterList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeSetterList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_externTypeSetterList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_externTypeSetterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeSetterList::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<list @externTypeSetterList:" ;
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

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterListAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeSetterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externTypeSetterList (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_externTypeSetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mSetterName,
                                                             const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeSetterList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeSetterList (in_mSetterName,
                                                          in_mFormalParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeSetterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_formalParameterListAST & inOperand1
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_externTypeSetterList_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeSetterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_formalParameterListAST inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS_externTypeSetterList_2D_element element (inOperand0, inOperand1) ;
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

void GALGAS_externTypeSetterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_formalParameterListAST & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_externTypeSetterList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSetterName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeSetterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeSetterList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSetterName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeSetterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeSetterList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSetterName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeSetterList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_formalParameterListAST & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeSetterList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSetterName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeSetterList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_formalParameterListAST & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeSetterList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mSetterName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::add_operation (const GALGAS_externTypeSetterList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result ;
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

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_externTypeSetterList (true) ;
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

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_externTypeSetterList (true) ;
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

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_externTypeSetterList (true) ;
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

void GALGAS_externTypeSetterList::plusAssign_operation (const GALGAS_externTypeSetterList inOperand,
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

GALGAS_lstring GALGAS_externTypeSetterList::getter_mSetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mSetterName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeSetterList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalParameterList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeSetterList::objectCompare (const GALGAS_externTypeSetterList & inOperand) const {
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

cEnumerator_externTypeSetterList::cEnumerator_externTypeSetterList (const GALGAS_externTypeSetterList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeSetterList::~ cEnumerator_externTypeSetterList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeSetterList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeSetterList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_externTypeSetterList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeSetterList_2D_element cEnumerator_externTypeSetterList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeSetterList::current_mSetterName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_externTypeSetterList::current_mFormalParameterList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalParameterList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeSetterList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeSetterList ("externTypeSetterList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeSetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeSetterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeSetterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeSetterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeSetterList result ;
  const GALGAS_externTypeSetterList * p = (const GALGAS_externTypeSetterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeSetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeSetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList::~ GALGAS_externTypeMethodList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeMethodList (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_externTypeMethodList::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_externTypeMethodList::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<list @externTypeMethodList:" ;
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

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterListAST & inOperand1,
                                                                                    const GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeMethodList (true) ;
    result.addAssign_operation (inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_externTypeMethodList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mMethodName,
                                                             const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                             const GALGAS_location & in_mDeclarationLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = NULL ;
  macroMyNew (p, cCollectionElement_externTypeMethodList (in_mMethodName,
                                                          in_mFormalParameterList,
                                                          in_mDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_formalParameterListAST & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_externTypeMethodList_2D_element element (inOperand0, inOperand1, inOperand2) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_formalParameterListAST inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    const GALGAS_externTypeMethodList_2D_element element (inOperand0, inOperand1, inOperand2) ;
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

void GALGAS_externTypeMethodList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_formalParameterListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_externTypeMethodList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      outOperand2 = element.mAttribute_mDeclarationLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeMethodList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      outOperand2 = element.mAttribute_mDeclarationLocation ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeMethodList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      outOperand2 = element.mAttribute_mDeclarationLocation ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_formalParameterListAST & outOperand1,
                                                GALGAS_location & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_externTypeMethodList_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      outOperand2 = element.mAttribute_mDeclarationLocation ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_formalParameterListAST & outOperand1,
                                               GALGAS_location & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_externTypeMethodList_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mMethodName ;
      outOperand1 = element.mAttribute_mFormalParameterList ;
      outOperand2 = element.mAttribute_mDeclarationLocation ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::add_operation (const GALGAS_externTypeMethodList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
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

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_externTypeMethodList (true) ;
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

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_externTypeMethodList (true) ;
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

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_externTypeMethodList (true) ;
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

void GALGAS_externTypeMethodList::plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
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

GALGAS_lstring GALGAS_externTypeMethodList::getter_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mMethodName ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeMethodList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mFormalParameterList ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externTypeMethodList::getter_mDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mDeclarationLocation ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeMethodList::objectCompare (const GALGAS_externTypeMethodList & inOperand) const {
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

cEnumerator_externTypeMethodList::cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externTypeMethodList::~ cEnumerator_externTypeMethodList (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeMethodList::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_externTypeMethodList::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_externTypeMethodList::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element cEnumerator_externTypeMethodList::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externTypeMethodList::current_mMethodName (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_externTypeMethodList::current_mFormalParameterList (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_externTypeMethodList::current_mDeclarationLocation (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mDeclarationLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeMethodList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeMethodList ("externTypeMethodList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeMethodList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeMethodList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeMethodList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  const GALGAS_externTypeMethodList * p = (const GALGAS_externTypeMethodList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeMethodList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

