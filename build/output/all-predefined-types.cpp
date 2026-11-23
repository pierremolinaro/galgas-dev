//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------
// Lexical styles
//--------------------------------------------------------------------------------------------------

String styleNameForIndex (const uint32_t inStyleIndex) {
  const char * array [15] = {
    "defaultStyle", // 0
    "keywordsStyle", // 1
    "delimitersStyle", // 2
    "selectorStyle", // 3
    "terminalStyle", // 4
    "nonTerminalStyle", // 5
    "integerStyle", // 6
    "floatStyle", // 7
    "characterStyle", // 8
    "stringStyle", // 9
    "typeNameStyle", // 10
    "attributeStyle", // 11
    "commentStyle", // 12
    "LexicalError", // 13
    "Template" // 14
  } ;
  return (inStyleIndex < 15) ? array [inStyleIndex] : "" ;
}
//--------------------------------------------------------------------------------------------------
//     @u64 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_36__34_ ("u64",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_u_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_u_36__34_ ;
}

//--------------------------------------------------------------------------------------------------
//     @[u64] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_u_36__34__5D_ ("[u64]",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_u_36__34__5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_u_36__34__5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_u_36__34__5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_u_36__34__5D_::GGS__5B_u_36__34__5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_36__34__5D_::GGS__5B_u_36__34__5D_ (const GGS__5B_u_36__34__5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_36__34__5D_ & GGS__5B_u_36__34__5D_::operator = (const GGS__5B_u_36__34__5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_36__34__5D_ GGS__5B_u_36__34__5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_u_36__34__5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::plusPlusAssignOperation (const GGS_u_36__34_ & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_u_36__34__5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_36__34__5D_ GGS__5B_u_36__34__5D_::add_operation (const GGS__5B_u_36__34__5D_ & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_u_36__34__5D_ result ;
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

void GGS__5B_u_36__34__5D_::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@u_36__34_], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::plusAssignOperation (const GGS__5B_u_36__34__5D_ inOperand,
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

void GGS__5B_u_36__34__5D_::setter_append (const GGS_u_36__34_ inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::setter_removeAll (Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::setter_set (const GGS_u_36__34_ inValue,
                                        const GGS_u_33__32_ inIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::setter_insert (const GGS_u_36__34_ inValue,
                                           const GGS_u_33__32_ inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::setter_remove (GGS_u_36__34_ & outValue,
                                           const GGS_u_33__32_ inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::setter_removeFirst (GGS_u_36__34_ & outValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_36__34__5D_::setter_removeLast (GGS_u_36__34_ & outValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_36__34__5D_ GGS__5B_u_36__34__5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_u_36__34__5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_u_36__34__5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_36__34__5D_ GGS__5B_u_36__34__5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                             const GGS_u_33__32_ & inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_u_36__34__5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_u_36__34__5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_u_36__34__5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS__5B_u_36__34__5D_::getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS__5B_u_36__34__5D_::getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS__5B_u_36__34__5D_::readSubcript__3F_ (const GGS_u_33__32_ & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
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
// Down Enumerator for @_5B_u_36__34__5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_u_36__34__5D_::DownEnumerator__5B_u_36__34__5D_ (const GGS__5B_u_36__34__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ DownEnumerator__5B_u_36__34__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ DownEnumerator__5B_u_36__34__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_u_36__34__5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_u_36__34__5D_::UpEnumerator__5B_u_36__34__5D_ (const GGS__5B_u_36__34__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ UpEnumerator__5B_u_36__34__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ UpEnumerator__5B_u_36__34__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @string generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_string ("string",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string ;
}

//--------------------------------------------------------------------------------------------------
//     @[stringString] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_stringString_5D_ ("[stringString]",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_stringString_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_stringString_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_stringString_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_stringString_5D_::GGS__5B_stringString_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_stringString_5D_::GGS__5B_stringString_5D_ (const GGS__5B_stringString_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_stringString_5D_ & GGS__5B_stringString_5D_::operator = (const GGS__5B_stringString_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_stringString_5D_ GGS__5B_stringString_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_stringString_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::plusPlusAssignOperation (const GGS_stringString & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_stringString_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_stringString_5D_ GGS__5B_stringString_5D_::add_operation (const GGS__5B_stringString_5D_ & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_stringString_5D_ result ;
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

void GGS__5B_stringString_5D_::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@stringString], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::plusAssignOperation (const GGS__5B_stringString_5D_ inOperand,
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

void GGS__5B_stringString_5D_::setter_append (const GGS_stringString inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::setter_set (const GGS_stringString inValue,
                                           const GGS_u_33__32_ inIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::setter_insert (const GGS_stringString inValue,
                                              const GGS_u_33__32_ inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::setter_remove (GGS_stringString & outValue,
                                              const GGS_u_33__32_ inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::setter_removeFirst (GGS_stringString & outValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_stringString_5D_::setter_removeLast (GGS_stringString & outValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_stringString_5D_ GGS__5B_stringString_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_stringString_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_stringString_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_stringString_5D_ GGS__5B_stringString_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                   const GGS_u_33__32_ & inLength,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_stringString_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_stringString_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_stringString_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringString GGS__5B_stringString_5D_::getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_stringString result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringString GGS__5B_stringString_5D_::getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_stringString result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringString GGS__5B_stringString_5D_::readSubcript__3F_ (const GGS_u_33__32_ & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_stringString result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
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
// Down Enumerator for @_5B_stringString_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_stringString_5D_::DownEnumerator__5B_stringString_5D_ (const GGS__5B_stringString_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringString DownEnumerator__5B_stringString_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringString DownEnumerator__5B_stringString_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_stringString_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_stringString_5D_::UpEnumerator__5B_stringString_5D_ (const GGS__5B_stringString_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringString UpEnumerator__5B_stringString_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringString UpEnumerator__5B_stringString_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @u8 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_38_ ("u8",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_u_38_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_u_38_ ;
}

//--------------------------------------------------------------------------------------------------
//     @u16 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_31__36_ ("u16",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_u_31__36_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_u_31__36_ ;
}

//--------------------------------------------------------------------------------------------------
//     @bigint generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigint ("bigint",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigint ;
}

//--------------------------------------------------------------------------------------------------
//     @binaryset generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryset ("binaryset",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryset ;
}

//--------------------------------------------------------------------------------------------------
//     @bool generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bool ("bool",
                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool ;
}

//--------------------------------------------------------------------------------------------------
//     @char generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_char ("char",
                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_char::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_char ;
}

//--------------------------------------------------------------------------------------------------
//     @data generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_data ("data",
                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_data::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_data ;
}

//--------------------------------------------------------------------------------------------------
//     @f64 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_f_36__34_ ("f64",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_f_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_f_36__34_ ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapper generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapper ("filewrapper",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapper::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapper ;
}

//--------------------------------------------------------------------------------------------------
//     @location generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_location ("location",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_location::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_location ;
}

//--------------------------------------------------------------------------------------------------
//     @s32 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_s_33__32_ ("s32",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_s_33__32_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_s_33__32_ ;
}

//--------------------------------------------------------------------------------------------------
//     @s64 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_s_36__34_ ("s64",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_s_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_s_36__34_ ;
}

//--------------------------------------------------------------------------------------------------
//     @[string] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_string_5D_ ("[string]",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_string_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_string_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_string_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_::GGS__5B_string_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_::GGS__5B_string_5D_ (const GGS__5B_string_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ & GGS__5B_string_5D_::operator = (const GGS__5B_string_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS__5B_string_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::plusPlusAssignOperation (const GGS_string & inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_string_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
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
  ioString.appendCString ("<array [@string], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::plusAssignOperation (const GGS__5B_string_5D_ inOperand,
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

void GGS__5B_string_5D_::setter_removeAll (Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_set (const GGS_string inValue,
                                     const GGS_u_33__32_ inIndex,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_insert (const GGS_string inValue,
                                        const GGS_u_33__32_ inInsertionIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_remove (GGS_string & outValue,
                                        const GGS_u_33__32_ inRemoveIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_removeFirst (GGS_string & outValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_removeLast (GGS_string & outValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS__5B_string_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_string_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_string_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS__5B_string_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                       const GGS_u_33__32_ & inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_string_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_string_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_string_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS__5B_string_5D_::getter_first (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS__5B_string_5D_::getter_last (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS__5B_string_5D_::readSubcript__3F_ (const GGS_u_33__32_ & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
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

GGS_string DownEnumerator__5B_string_5D_::current_entry (LOCATION_ARGS) const {
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

GGS_string UpEnumerator__5B_string_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @lstring generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lstring ("lstring",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lstring::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstring ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring::GGS_lstring (void) :
mProperty_string (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring::GGS_lstring (const GGS_lstring & inSource) :
mProperty_string (inSource.mProperty_string),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring & GGS_lstring::operator = (const GGS_lstring & inSource) {
  mProperty_string = inSource.mProperty_string ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lstring GGS_lstring::init_21__21_ (const GGS_string & in_string,
                                       const GGS_location & in_location,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_string = in_string ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstring::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring::GGS_lstring (const GGS_string & inOperand0,
                          const GGS_location & inOperand1) :
mProperty_string (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lstring::objectCompare (const GGS_lstring & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_string.objectCompare (inOperand.mProperty_string) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lstring::isValid (void) const {
  return mProperty_string.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstring::drop (void) {
  mProperty_string.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lstring::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lstring:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_string.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @[lstring] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lstring_5D_ ("[lstring]",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_lstring_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_lstring_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_lstring_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_::GGS__5B_lstring_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_::GGS__5B_lstring_5D_ (const GGS__5B_lstring_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ & GGS__5B_lstring_5D_::operator = (const GGS__5B_lstring_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS__5B_lstring_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lstring_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::plusPlusAssignOperation (const GGS_lstring & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_lstring_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS__5B_lstring_5D_::add_operation (const GGS__5B_lstring_5D_ & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
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

void GGS__5B_lstring_5D_::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@lstring], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::plusAssignOperation (const GGS__5B_lstring_5D_ inOperand,
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

void GGS__5B_lstring_5D_::setter_append (const GGS_lstring inValue,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_removeAll (Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_set (const GGS_lstring inValue,
                                      const GGS_u_33__32_ inIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_insert (const GGS_lstring inValue,
                                         const GGS_u_33__32_ inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_remove (GGS_lstring & outValue,
                                         const GGS_u_33__32_ inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_removeFirst (GGS_lstring & outValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_removeLast (GGS_lstring & outValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS__5B_lstring_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS__5B_lstring_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                         const GGS_u_33__32_ & inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__5B_lstring_5D_::getter_first (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__5B_lstring_5D_::getter_last (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__5B_lstring_5D_::readSubcript__3F_ (const GGS_u_33__32_ & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
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
// Down Enumerator for @_5B_lstring_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_lstring_5D_::DownEnumerator__5B_lstring_5D_ (const GGS__5B_lstring_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__5B_lstring_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__5B_lstring_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_lstring_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_lstring_5D_::UpEnumerator__5B_lstring_5D_ (const GGS__5B_lstring_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__5B_lstring_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__5B_lstring_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @u32 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_33__32_ ("u32",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_u_33__32_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_u_33__32_ ;
}

//--------------------------------------------------------------------------------------------------
//     @[u32] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_u_33__32__5D_ ("[u32]",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_u_33__32__5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_u_33__32__5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_u_33__32__5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_u_33__32__5D_::GGS__5B_u_33__32__5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_33__32__5D_::GGS__5B_u_33__32__5D_ (const GGS__5B_u_33__32__5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_33__32__5D_ & GGS__5B_u_33__32__5D_::operator = (const GGS__5B_u_33__32__5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_33__32__5D_ GGS__5B_u_33__32__5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_u_33__32__5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::plusPlusAssignOperation (const GGS_u_33__32_ & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_u_33__32__5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_33__32__5D_ GGS__5B_u_33__32__5D_::add_operation (const GGS__5B_u_33__32__5D_ & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_u_33__32__5D_ result ;
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

void GGS__5B_u_33__32__5D_::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@u_33__32_], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::plusAssignOperation (const GGS__5B_u_33__32__5D_ inOperand,
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

void GGS__5B_u_33__32__5D_::setter_append (const GGS_u_33__32_ inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::setter_removeAll (Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::setter_set (const GGS_u_33__32_ inValue,
                                        const GGS_u_33__32_ inIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::setter_insert (const GGS_u_33__32_ inValue,
                                           const GGS_u_33__32_ inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::setter_remove (GGS_u_33__32_ & outValue,
                                           const GGS_u_33__32_ inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::setter_removeFirst (GGS_u_33__32_ & outValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_u_33__32__5D_::setter_removeLast (GGS_u_33__32_ & outValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_33__32__5D_ GGS__5B_u_33__32__5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_u_33__32__5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_u_33__32__5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_u_33__32__5D_ GGS__5B_u_33__32__5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                             const GGS_u_33__32_ & inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_u_33__32__5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_u_33__32__5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_u_33__32__5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_u_33__32__5D_::getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_u_33__32__5D_::getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_u_33__32__5D_::readSubcript__3F_ (const GGS_u_33__32_ & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
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
// Down Enumerator for @_5B_u_33__32__5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_u_33__32__5D_::DownEnumerator__5B_u_33__32__5D_ (const GGS__5B_u_33__32__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ DownEnumerator__5B_u_33__32__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ DownEnumerator__5B_u_33__32__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_u_33__32__5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_u_33__32__5D_::UpEnumerator__5B_u_33__32__5D_ (const GGS__5B_u_33__32__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ UpEnumerator__5B_u_33__32__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ UpEnumerator__5B_u_33__32__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @stringset generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringset ("stringset",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringset ;
}

//--------------------------------------------------------------------------------------------------
//     @timer generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timer ("timer",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_timer::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timer ;
}

//--------------------------------------------------------------------------------------------------
//     @lbool generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lbool ("lbool",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lbool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbool ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbool::GGS_lbool (void) :
mProperty_bool (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lbool::GGS_lbool (const GGS_lbool & inSource) :
mProperty_bool (inSource.mProperty_bool),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbool & GGS_lbool::operator = (const GGS_lbool & inSource) {
  mProperty_bool = inSource.mProperty_bool ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lbool GGS_lbool::init_21__21_ (const GGS_bool & in_bool,
                                   const GGS_location & in_location,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbool result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bool = in_bool ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbool::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbool::GGS_lbool (const GGS_bool & inOperand0,
                      const GGS_location & inOperand1) :
mProperty_bool (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lbool::objectCompare (const GGS_lbool & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bool.objectCompare (inOperand.mProperty_bool) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lbool::isValid (void) const {
  return mProperty_bool.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbool::drop (void) {
  mProperty_bool.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbool::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lbool:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bool.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lbigint generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lbigint ("lbigint",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lbigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigint ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint::GGS_lbigint (void) :
mProperty_bigint (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint::GGS_lbigint (const GGS_lbigint & inSource) :
mProperty_bigint (inSource.mProperty_bigint),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint & GGS_lbigint::operator = (const GGS_lbigint & inSource) {
  mProperty_bigint = inSource.mProperty_bigint ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lbigint GGS_lbigint::init_21__21_ (const GGS_bigint & in_bigint,
                                       const GGS_location & in_location,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbigint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_bigint = in_bigint ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigint::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint::GGS_lbigint (const GGS_bigint & inOperand0,
                          const GGS_location & inOperand1) :
mProperty_bigint (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lbigint::objectCompare (const GGS_lbigint & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_bigint.objectCompare (inOperand.mProperty_bigint) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lbigint::isValid (void) const {
  return mProperty_bigint.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigint::drop (void) {
  mProperty_bigint.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lbigint::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lbigint:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_bigint.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lchar generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lchar ("lchar",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lchar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lchar ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar::GGS_lchar (void) :
mProperty_char (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lchar::GGS_lchar (const GGS_lchar & inSource) :
mProperty_char (inSource.mProperty_char),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_lchar & GGS_lchar::operator = (const GGS_lchar & inSource) {
  mProperty_char = inSource.mProperty_char ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lchar GGS_lchar::init_21__21_ (const GGS_char & in_char,
                                   const GGS_location & in_location,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lchar result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_char = in_char ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lchar::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lchar::GGS_lchar (const GGS_char & inOperand0,
                      const GGS_location & inOperand1) :
mProperty_char (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lchar::objectCompare (const GGS_lchar & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_char.objectCompare (inOperand.mProperty_char) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lchar::isValid (void) const {
  return mProperty_char.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lchar::drop (void) {
  mProperty_char.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lchar::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lchar:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_char.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lf64 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lf_36__34_ ("lf64",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lf_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lf_36__34_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lf_36__34_::GGS_lf_36__34_ (void) :
mProperty_f_36__34_ (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lf_36__34_::GGS_lf_36__34_ (const GGS_lf_36__34_ & inSource) :
mProperty_f_36__34_ (inSource.mProperty_f_36__34_),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_lf_36__34_ & GGS_lf_36__34_::operator = (const GGS_lf_36__34_ & inSource) {
  mProperty_f_36__34_ = inSource.mProperty_f_36__34_ ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lf_36__34_ GGS_lf_36__34_::init_21__21_ (const GGS_f_36__34_ & in_f_36__34_,
                                             const GGS_location & in_location,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lf_36__34_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_f_36__34_ = in_f_36__34_ ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lf_36__34_::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lf_36__34_::GGS_lf_36__34_ (const GGS_f_36__34_ & inOperand0,
                                const GGS_location & inOperand1) :
mProperty_f_36__34_ (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lf_36__34_::objectCompare (const GGS_lf_36__34_ & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_f_36__34_.objectCompare (inOperand.mProperty_f_36__34_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lf_36__34_::isValid (void) const {
  return mProperty_f_36__34_.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lf_36__34_::drop (void) {
  mProperty_f_36__34_.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lf_36__34_::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lf64:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_f_36__34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ls32 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ls_33__32_ ("ls32",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ls_33__32_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ls_33__32_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_ls_33__32_::GGS_ls_33__32_ (void) :
mProperty_s_33__32_ (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_ls_33__32_::GGS_ls_33__32_ (const GGS_ls_33__32_ & inSource) :
mProperty_s_33__32_ (inSource.mProperty_s_33__32_),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_ls_33__32_ & GGS_ls_33__32_::operator = (const GGS_ls_33__32_ & inSource) {
  mProperty_s_33__32_ = inSource.mProperty_s_33__32_ ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ls_33__32_ GGS_ls_33__32_::init_21__21_ (const GGS_s_33__32_ & in_s_33__32_,
                                             const GGS_location & in_location,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ls_33__32_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_s_33__32_ = in_s_33__32_ ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ls_33__32_::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ls_33__32_::GGS_ls_33__32_ (const GGS_s_33__32_ & inOperand0,
                                const GGS_location & inOperand1) :
mProperty_s_33__32_ (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ls_33__32_::objectCompare (const GGS_ls_33__32_ & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_s_33__32_.objectCompare (inOperand.mProperty_s_33__32_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ls_33__32_::isValid (void) const {
  return mProperty_s_33__32_.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ls_33__32_::drop (void) {
  mProperty_s_33__32_.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ls_33__32_::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ls32:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_s_33__32_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ls64 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ls_36__34_ ("ls64",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ls_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ls_36__34_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_ls_36__34_::GGS_ls_36__34_ (void) :
mProperty_s_36__34_ (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_ls_36__34_::GGS_ls_36__34_ (const GGS_ls_36__34_ & inSource) :
mProperty_s_36__34_ (inSource.mProperty_s_36__34_),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_ls_36__34_ & GGS_ls_36__34_::operator = (const GGS_ls_36__34_ & inSource) {
  mProperty_s_36__34_ = inSource.mProperty_s_36__34_ ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ls_36__34_ GGS_ls_36__34_::init_21__21_ (const GGS_s_36__34_ & in_s_36__34_,
                                             const GGS_location & in_location,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ls_36__34_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_s_36__34_ = in_s_36__34_ ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ls_36__34_::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ls_36__34_::GGS_ls_36__34_ (const GGS_s_36__34_ & inOperand0,
                                const GGS_location & inOperand1) :
mProperty_s_36__34_ (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ls_36__34_::objectCompare (const GGS_ls_36__34_ & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_s_36__34_.objectCompare (inOperand.mProperty_s_36__34_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ls_36__34_::isValid (void) const {
  return mProperty_s_36__34_.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ls_36__34_::drop (void) {
  mProperty_s_36__34_.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ls_36__34_::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ls64:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_s_36__34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lu32 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lu_33__32_ ("lu32",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lu_33__32_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lu_33__32_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lu_33__32_::GGS_lu_33__32_ (void) :
mProperty_u_33__32_ (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lu_33__32_::GGS_lu_33__32_ (const GGS_lu_33__32_ & inSource) :
mProperty_u_33__32_ (inSource.mProperty_u_33__32_),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_lu_33__32_ & GGS_lu_33__32_::operator = (const GGS_lu_33__32_ & inSource) {
  mProperty_u_33__32_ = inSource.mProperty_u_33__32_ ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lu_33__32_ GGS_lu_33__32_::init_21__21_ (const GGS_u_33__32_ & in_u_33__32_,
                                             const GGS_location & in_location,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lu_33__32_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_u_33__32_ = in_u_33__32_ ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lu_33__32_::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lu_33__32_::GGS_lu_33__32_ (const GGS_u_33__32_ & inOperand0,
                                const GGS_location & inOperand1) :
mProperty_u_33__32_ (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lu_33__32_::objectCompare (const GGS_lu_33__32_ & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_u_33__32_.objectCompare (inOperand.mProperty_u_33__32_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lu_33__32_::isValid (void) const {
  return mProperty_u_33__32_.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lu_33__32_::drop (void) {
  mProperty_u_33__32_.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lu_33__32_::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lu32:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_u_33__32_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lu64 generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lu_36__34_ ("lu64",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lu_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lu_36__34_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lu_36__34_::GGS_lu_36__34_ (void) :
mProperty_u_36__34_ (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_lu_36__34_::GGS_lu_36__34_ (const GGS_lu_36__34_ & inSource) :
mProperty_u_36__34_ (inSource.mProperty_u_36__34_),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_lu_36__34_ & GGS_lu_36__34_::operator = (const GGS_lu_36__34_ & inSource) {
  mProperty_u_36__34_ = inSource.mProperty_u_36__34_ ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lu_36__34_ GGS_lu_36__34_::init_21__21_ (const GGS_u_36__34_ & in_u_36__34_,
                                             const GGS_location & in_location,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lu_36__34_ result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_u_36__34_ = in_u_36__34_ ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lu_36__34_::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lu_36__34_::GGS_lu_36__34_ (const GGS_u_36__34_ & inOperand0,
                                const GGS_location & inOperand1) :
mProperty_u_36__34_ (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lu_36__34_::objectCompare (const GGS_lu_36__34_ & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_u_36__34_.objectCompare (inOperand.mProperty_u_36__34_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_location.objectCompare (inOperand.mProperty_location) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lu_36__34_::isValid (void) const {
  return mProperty_u_36__34_.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lu_36__34_::drop (void) {
  mProperty_u_36__34_.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lu_36__34_::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lu64:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_u_36__34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @range generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_range ("range",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_range::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_range ;
}

//--------------------------------------------------------------------------------------------------

GGS_range::GGS_range (void) :
mProperty_start (),
mProperty_length () {
}

//--------------------------------------------------------------------------------------------------

GGS_range::GGS_range (const GGS_range & inSource) :
mProperty_start (inSource.mProperty_start),
mProperty_length (inSource.mProperty_length) {
}

//--------------------------------------------------------------------------------------------------

GGS_range & GGS_range::operator = (const GGS_range & inSource) {
  mProperty_start = inSource.mProperty_start ;
  mProperty_length = inSource.mProperty_length ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_range GGS_range::init_21__21_ (const GGS_u_33__32_ & in_start,
                                   const GGS_u_33__32_ & in_length,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_range result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_start = in_start ;
  result.mProperty_length = in_length ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_range::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_range::GGS_range (const GGS_u_33__32_ & inOperand0,
                      const GGS_u_33__32_ & inOperand1) :
mProperty_start (inOperand0),
mProperty_length (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_range::objectCompare (const GGS_range & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_start.objectCompare (inOperand.mProperty_start) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_length.objectCompare (inOperand.mProperty_length) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_range::isValid (void) const {
  return mProperty_start.isValid () && mProperty_length.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_range::drop (void) {
  mProperty_start.drop () ;
  mProperty_length.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_range::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @range:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_start.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_length.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//                               Bool options
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_display_5F_version (
  "build",
  "display_version",
  0,
  "version",
  "Display version"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_display_5F_version (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_display_5F_version.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_display_5F_help (
  "build",
  "display_help",
  0,
  "help",
  "Display help"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_display_5F_help (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_display_5F_help.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_outputConcreteSyntaxTree (
  "build",
  "outputConcreteSyntaxTree",
  0,
  "output-concrete-syntax-tree",
  "Generate the concrete syntax tree, in .dot format (suitable for Graphviz)"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_outputConcreteSyntaxTree (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_outputConcreteSyntaxTree.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_log_5F_file_5F_read (
  "build",
  "log_file_read",
  0,
  "log-file-read",
  "Log every file read"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_log_5F_file_5F_read (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_log_5F_file_5F_read.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_do_5F_not_5F_generate_5F_any_5F_file (
  "build",
  "do_not_generate_any_file",
  0,
  "no-file-generation",
  "Do not generate any file"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_do_5F_not_5F_generate_5F_any_5F_file (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_do_5F_not_5F_generate_5F_any_5F_file.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_treat_5F_warnings_5F_as_5F_error (
  "build",
  "treat_warnings_as_error",
  0,
  "Werror",
  "Treat warnings as errors"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_treat_5F_warnings_5F_as_5F_error (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_treat_5F_warnings_5F_as_5F_error.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_no_5F_color (
  "build",
  "no_color",
  0,
  "no-color",
  "Do not issue colored messages (Unix Only)"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_no_5F_color (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_no_5F_color.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_outputHTMLgrammarFile (
  "build",
  "outputHTMLgrammarFile",
  0,
  "output-html-grammar-file",
  "Output a HTML file for every grammar component"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_outputHTMLgrammarFile (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_outputHTMLgrammarFile.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_outputGrammarSwiftDescriptionFile (
  "build",
  "outputGrammarSwiftDescriptionFile",
  0,
  "output-swift-description-grammar-file",
  "Output a Swift description file for every grammar component"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_outputGrammarSwiftDescriptionFile (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_outputGrammarSwiftDescriptionFile.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_outputHTMLTypeListFile (
  "build",
  "outputHTMLTypeListFile",
  84,
  "output-html-type-dump-file",
  "Output a HTML file that contains all defined types"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_outputHTMLTypeListFile (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_outputHTMLTypeListFile.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_printPredefinedLexicalActions (
  "build",
  "printPredefinedLexicalActions",
  0,
  "print-predefined-lexical-actions",
  "Print the list of predefined lexical routines and functions"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_printPredefinedLexicalActions (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_printPredefinedLexicalActions.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_generateOneHeader (
  "build",
  "generateOneHeader",
  0,
  "generate-one-cpp-header",
  "Generate one C++ header file for all declarations"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_generateOneHeader (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_generateOneHeader.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_generateManyFiles (
  "build",
  "generateManyFiles",
  0,
  "generate-many-cpp-files",
  "Generate many C++ implementation files"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_generateManyFiles (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_generateManyFiles.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_check_5F_big_5F_int (
  "build",
  "check_big_int",
  0,
  "check-big-int",
  "Run bit integers checks"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_check_5F_big_5F_int (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_check_5F_big_5F_int.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_emitSyntaxDiagrams (
  "build",
  "emitSyntaxDiagrams",
  0,
  "emit-syntax-diagrams",
  "Emit grammar syntax diagrams in TEX files"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_emitSyntaxDiagrams (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_emitSyntaxDiagrams.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_emitClassGraph (
  "build",
  "emitClassGraph",
  0,
  "emit-class-graph",
  "Emit class graph in dot file"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_emitClassGraph (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_emitClassGraph.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_displayUnicodeLexicalTestFunctions (
  "build",
  "displayUnicodeLexicalTestFunctions",
  0,
  "display-lexical-test-functions",
  "Display Unicode Lexical Test Functions"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_displayUnicodeLexicalTestFunctions (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_displayUnicodeLexicalTestFunctions.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_checkEntityUsefulness (
  "build",
  "checkEntityUsefulness",
  0,
  "check-usefulness",
  "Check Entity Usefulness"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_checkEntityUsefulness (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_checkEntityUsefulness.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gBuildOption_warnsOnOldStyleEnumeration (
  "build",
  "warnsOnOldStyleEnumeration",
  0,
  "warns-on-old-style-enumeration",
  "Warns on old style enumeration"
) ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_buildOptionValue::class_func_warnsOnOldStyleEnumeration (UNUSED_LOCATION_ARGS) {
  return GGS_bool (gBuildOption_warnsOnOldStyleEnumeration.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------
//                               U32 options
//--------------------------------------------------------------------------------------------------

UIntCommandLineOption gBuildOption_max_5F_errors (
  "build",
  "max_errors",
  0,
  "max-errors",
  "Stop after the given number of errors has been reached",
  0
) ;

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_buildOptionValue::class_func_max_5F_errors (UNUSED_LOCATION_ARGS) {
  return GGS_u_33__32_ (gBuildOption_max_5F_errors.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------

UIntCommandLineOption gBuildOption_max_5F_warnings (
  "build",
  "max_warnings",
  0,
  "max-warnings",
  "Stop after the given number of warnings has been reached",
  0
) ;

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_buildOptionValue::class_func_max_5F_warnings (UNUSED_LOCATION_ARGS) {
  return GGS_u_33__32_ (gBuildOption_max_5F_warnings.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------
//                              String options
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gBuildOption_emit_5F_issue_5F_json_5F_file (
  "build",
  "emit_issue_json_file",
  0,
  "emit-issue-json-file",
  "Emit a JSON file that contains all compilation issues",
  ""
) ;

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionValue::class_func_emit_5F_issue_5F_json_5F_file (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_value ()) ;
}
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gBuildOption_outputKeywordList (
  "build",
  "outputKeywordList",
  0,
  "output-keyword-list-file",
  "Output a Latex file containing keyword list",
  ""
) ;

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionValue::class_func_outputKeywordList (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_outputKeywordList.readProperty_value ()) ;
}
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gBuildOption_mode (
  "build",
  "mode",
  0,
  "mode",
  "'lexical-only', 'syntax-only' or 'latex'",
  ""
) ;

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionValue::class_func_mode (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_mode.readProperty_value ()) ;
}
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gBuildOption_create_5F_project (
  "build",
  "create_project",
  0,
  "create-project",
  "Create a new GALGAS Project",
  ""
) ;

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionValue::class_func_create_5F_project (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_create_5F_project.readProperty_value ()) ;
}
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gBuildOption_extractLIBPMOption (
  "build",
  "extractLIBPMOption",
  0,
  "extract-libpm",
  "Extract embedded LIBPM at given path",
  ""
) ;

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionValue::class_func_extractLIBPMOption (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_extractLIBPMOption.readProperty_value ()) ;
}

//--------------------------------------------------------------------------------------------------
//                               Bool options
//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_display_5F_version (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_display_5F_version.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_display_5F_help (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_display_5F_help.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_outputConcreteSyntaxTree (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_outputConcreteSyntaxTree.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_log_5F_file_5F_read (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_log_5F_file_5F_read.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_do_5F_not_5F_generate_5F_any_5F_file (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_do_5F_not_5F_generate_5F_any_5F_file.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_treat_5F_warnings_5F_as_5F_error (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_treat_5F_warnings_5F_as_5F_error.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_no_5F_color (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_no_5F_color.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_outputHTMLgrammarFile (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_outputHTMLgrammarFile.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_outputGrammarSwiftDescriptionFile (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_outputGrammarSwiftDescriptionFile.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_outputHTMLTypeListFile (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_outputHTMLTypeListFile.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_printPredefinedLexicalActions (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_printPredefinedLexicalActions.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_generateOneHeader (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_generateOneHeader.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_generateManyFiles (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_generateManyFiles.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_check_5F_big_5F_int (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_check_5F_big_5F_int.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_emitSyntaxDiagrams (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_emitSyntaxDiagrams.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_emitClassGraph (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_emitClassGraph.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_displayUnicodeLexicalTestFunctions (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_displayUnicodeLexicalTestFunctions.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_checkEntityUsefulness (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_checkEntityUsefulness.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_warnsOnOldStyleEnumeration (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_warnsOnOldStyleEnumeration.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------
//                               U32 options
//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_max_5F_errors (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_max_5F_errors.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_buildOptionInvocationString::class_func_max_5F_warnings (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_max_5F_warnings.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------
//                              String options
//--------------------------------------------------------------------------------------------------


GGS_string GGS_buildOptionInvocationString::class_func_emit_5F_issue_5F_json_5F_file (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_string ()) ;
}
//--------------------------------------------------------------------------------------------------


GGS_string GGS_buildOptionInvocationString::class_func_outputKeywordList (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_outputKeywordList.readProperty_string ()) ;
}
//--------------------------------------------------------------------------------------------------


GGS_string GGS_buildOptionInvocationString::class_func_mode (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_mode.readProperty_string ()) ;
}
//--------------------------------------------------------------------------------------------------


GGS_string GGS_buildOptionInvocationString::class_func_create_5F_project (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_create_5F_project.readProperty_string ()) ;
}
//--------------------------------------------------------------------------------------------------


GGS_string GGS_buildOptionInvocationString::class_func_extractLIBPMOption (UNUSED_LOCATION_ARGS) {
  return GGS_string (gBuildOption_extractLIBPMOption.readProperty_string ()) ;
}

//--------------------------------------------------------------------------------------------------
//     @bigint? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigint_3F_ ("bigint?",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bigint_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigint_3F_ ;
}

//--------------------------------------------------------------------------------------------------
//Optional @bigint_3F_
//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_::GGS_bigint_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_::GGS_bigint_3F_ (const GGS_bigint & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_ GGS_bigint_3F_::init_nil (void) {
  GGS_bigint_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bigint_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bigint_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bigint () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigint_3F_::objectCompare (const GGS_bigint_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_bigint_3F_::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @stringString generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringString ("stringString",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringString::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringString ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringString::GGS_stringString (void) :
mProperty_left (),
mProperty_right () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringString::GGS_stringString (const GGS_stringString & inSource) :
mProperty_left (inSource.mProperty_left),
mProperty_right (inSource.mProperty_right) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringString & GGS_stringString::operator = (const GGS_stringString & inSource) {
  mProperty_left = inSource.mProperty_left ;
  mProperty_right = inSource.mProperty_right ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_stringString GGS_stringString::init_21__21_ (const GGS_string & in_left,
                                                 const GGS_string & in_right,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringString result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_left = in_left ;
  result.mProperty_right = in_right ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringString::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringString::GGS_stringString (const GGS_string & inOperand0,
                                    const GGS_string & inOperand1) :
mProperty_left (inOperand0),
mProperty_right (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringString::objectCompare (const GGS_stringString & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_left.objectCompare (inOperand.mProperty_left) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_right.objectCompare (inOperand.mProperty_right) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_stringString::isValid (void) const {
  return mProperty_left.isValid () && mProperty_right.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringString::drop (void) {
  mProperty_left.drop () ;
  mProperty_right.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringString::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @stringString:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_left.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_right.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2
