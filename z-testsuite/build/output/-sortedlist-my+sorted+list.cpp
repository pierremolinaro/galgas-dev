#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "-sortedlist-my+sorted+list.h"
#include "struct-my+sorted+list-2Eelement.h"

//--------------------------------------------------------------------------------------------------
//@mySortedList' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_mySortedList (const GGS_mySortedList_2E_element & inLeft,
                                               const GGS_mySortedList_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inRight.mProperty_mValue.objectCompare (inLeft.mProperty_mValue) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList::GGS_mySortedList (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_mySortedList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::plusPlusAssignOperation (const GGS_mySortedList_2E_element & inElement
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_mySortedList) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList GGS_mySortedList::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_mySortedList result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList GGS_mySortedList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mySortedList result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList GGS_mySortedList::class_func_sortedListWithValue (const GGS_string & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  GGS_mySortedList result = class_func_emptySortedList (THERE) ;
  const GGS_mySortedList_2E_element newElement (inOperand0) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::addAssignOperation (const GGS_string & inOperand0
                                           COMMA_LOCATION_ARGS) {
  const GGS_mySortedList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::setter_insert (const GGS_string inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_mySortedList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::plusAssignOperation (const GGS_mySortedList inSortedList,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_mySortedList) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::setter_popSmallest (GGS_string & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mValue ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::setter_popGreatest (GGS_string & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mValue ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::method_smallest (GGS_string & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mValue ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::method_greatest (GGS_string & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mValue ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @mySortedList
//--------------------------------------------------------------------------------------------------

DownEnumerator_mySortedList::DownEnumerator_mySortedList (const GGS_mySortedList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element DownEnumerator_mySortedList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_mySortedList::current_mValue (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @mySortedList
//--------------------------------------------------------------------------------------------------

UpEnumerator_mySortedList::UpEnumerator_mySortedList (const GGS_mySortedList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element UpEnumerator_mySortedList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_mySortedList::current_mValue (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
//     @mySortedList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mySortedList ("mySortedList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mySortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mySortedList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mySortedList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mySortedList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList GGS_mySortedList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_mySortedList result ;
  const GGS_mySortedList * p = (const GGS_mySortedList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mySortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mySortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

