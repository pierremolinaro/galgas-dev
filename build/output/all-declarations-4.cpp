#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeAppTargetList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_XCodeAppTargetList : public CollectionElementPtr {
  public: GGS_XCodeAppTargetList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_XCodeAppTargetList (const GGS_string & in_mTargetRef,
                                                   const GGS_string & in_mTargetName,
                                                   const GGS_string & in_mProductFileReference,
                                                   const GGS_string & in_mProductFileName,
                                                   const GGS_stringlist & in_mBuildPhaseRefList,
                                                   const GGS_string & in_mBuildPhaseRef,
                                                   const GGS_string & in_mBuildConfigurationListRef,
                                                   const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                   const GGS_string & in_mBuildConfigurationRef,
                                                   const GGS_stringlist & in_mFrameworksFileRefList,
                                                   const GGS_string & in_mFrameworkBuildPhaseRef,
                                                   const GGS__32_stringlist & in_mDependentTargets,
                                                   const GGS_string & in_mResourceBuildRef,
                                                   const GGS_stringlist & in_mResourceFileBuildRefs
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeAppTargetList::CollectionElementPtr_XCodeAppTargetList (const GGS_string & in_mTargetRef,
                                                                                  const GGS_string & in_mTargetName,
                                                                                  const GGS_string & in_mProductFileReference,
                                                                                  const GGS_string & in_mProductFileName,
                                                                                  const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                  const GGS_string & in_mBuildPhaseRef,
                                                                                  const GGS_string & in_mBuildConfigurationListRef,
                                                                                  const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                  const GGS_string & in_mBuildConfigurationRef,
                                                                                  const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                  const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                  const GGS__32_stringlist & in_mDependentTargets,
                                                                                  const GGS_string & in_mResourceBuildRef,
                                                                                  const GGS_stringlist & in_mResourceFileBuildRefs
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeAppTargetList::CollectionElementPtr_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_XCodeAppTargetList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_XCodeAppTargetList * p = (CollectionElementPtr_XCodeAppTargetList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_XCodeAppTargetList) ;
    const GGS_XCodeAppTargetList_2E_element element (p->mObject.mProperty_mTargetRef, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mProductFileReference, p->mObject.mProperty_mProductFileName, p->mObject.mProperty_mBuildPhaseRefList, p->mObject.mProperty_mBuildPhaseRef, p->mObject.mProperty_mBuildConfigurationListRef, p->mObject.mProperty_mBuildConfigurationSettingList, p->mObject.mProperty_mBuildConfigurationRef, p->mObject.mProperty_mFrameworksFileRefList, p->mObject.mProperty_mFrameworkBuildPhaseRef, p->mObject.mProperty_mDependentTargets, p->mObject.mProperty_mResourceBuildRef, p->mObject.mProperty_mResourceFileBuildRefs) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_string & in_mTargetRef,
                                                        const GGS_string & in_mTargetName,
                                                        const GGS_string & in_mProductFileReference,
                                                        const GGS_string & in_mProductFileName,
                                                        const GGS_stringlist & in_mBuildPhaseRefList,
                                                        const GGS_string & in_mBuildPhaseRef,
                                                        const GGS_string & in_mBuildConfigurationListRef,
                                                        const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                        const GGS_string & in_mBuildConfigurationRef,
                                                        const GGS_stringlist & in_mFrameworksFileRefList,
                                                        const GGS_string & in_mFrameworkBuildPhaseRef,
                                                        const GGS__32_stringlist & in_mDependentTargets,
                                                        const GGS_string & in_mResourceBuildRef,
                                                        const GGS_stringlist & in_mResourceFileBuildRefs
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_XCodeAppTargetList (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeAppTargetList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeAppTargetList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationListRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationListRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationSettingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworksFileRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworksFileRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworkBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDependentTargets:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDependentTargets.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mResourceBuildRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mResourceBuildRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mResourceFileBuildRefs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mResourceFileBuildRefs.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusPlusAssignOperation (const GGS_XCodeAppTargetList_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                         const GGS_string & inOperand1,
                                                                         const GGS_string & inOperand2,
                                                                         const GGS_string & inOperand3,
                                                                         const GGS_stringlist & inOperand4,
                                                                         const GGS_string & inOperand5,
                                                                         const GGS_string & inOperand6,
                                                                         const GGS_stringlist & inOperand7,
                                                                         const GGS_string & inOperand8,
                                                                         const GGS_stringlist & inOperand9,
                                                                         const GGS_string & inOperand10,
                                                                         const GGS__32_stringlist & inOperand11,
                                                                         const GGS_string & inOperand12,
                                                                         const GGS_stringlist & inOperand13
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  GGS_XCodeAppTargetList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::addAssignOperation (const GGS_string & inOperand0,
                                                 const GGS_string & inOperand1,
                                                 const GGS_string & inOperand2,
                                                 const GGS_string & inOperand3,
                                                 const GGS_stringlist & inOperand4,
                                                 const GGS_string & inOperand5,
                                                 const GGS_string & inOperand6,
                                                 const GGS_stringlist & inOperand7,
                                                 const GGS_string & inOperand8,
                                                 const GGS_stringlist & inOperand9,
                                                 const GGS_string & inOperand10,
                                                 const GGS__32_stringlist & inOperand11,
                                                 const GGS_string & inOperand12,
                                                 const GGS_stringlist & inOperand13
                                                 COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_append (const GGS_string inOperand0,
                                            const GGS_string inOperand1,
                                            const GGS_string inOperand2,
                                            const GGS_string inOperand3,
                                            const GGS_stringlist inOperand4,
                                            const GGS_string inOperand5,
                                            const GGS_string inOperand6,
                                            const GGS_stringlist inOperand7,
                                            const GGS_string inOperand8,
                                            const GGS_stringlist inOperand9,
                                            const GGS_string inOperand10,
                                            const GGS__32_stringlist inOperand11,
                                            const GGS_string inOperand12,
                                            const GGS_stringlist inOperand13,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_insertAtIndex (const GGS_string inOperand0,
                                                   const GGS_string inOperand1,
                                                   const GGS_string inOperand2,
                                                   const GGS_string inOperand3,
                                                   const GGS_stringlist inOperand4,
                                                   const GGS_string inOperand5,
                                                   const GGS_string inOperand6,
                                                   const GGS_stringlist inOperand7,
                                                   const GGS_string inOperand8,
                                                   const GGS_stringlist inOperand9,
                                                   const GGS_string inOperand10,
                                                   const GGS__32_stringlist inOperand11,
                                                   const GGS_string inOperand12,
                                                   const GGS_stringlist inOperand13,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_removeAtIndex (GGS_string & outOperand0,
                                                   GGS_string & outOperand1,
                                                   GGS_string & outOperand2,
                                                   GGS_string & outOperand3,
                                                   GGS_stringlist & outOperand4,
                                                   GGS_string & outOperand5,
                                                   GGS_string & outOperand6,
                                                   GGS_stringlist & outOperand7,
                                                   GGS_string & outOperand8,
                                                   GGS_stringlist & outOperand9,
                                                   GGS_string & outOperand10,
                                                   GGS__32_stringlist & outOperand11,
                                                   GGS_string & outOperand12,
                                                   GGS_stringlist & outOperand13,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTargetRef ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mProductFileName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (idx COMMA_HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (idx COMMA_HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (idx COMMA_HERE).mProperty_mResourceFileBuildRefs ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_popFirst (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_stringlist & outOperand4,
                                              GGS_string & outOperand5,
                                              GGS_string & outOperand6,
                                              GGS_stringlist & outOperand7,
                                              GGS_string & outOperand8,
                                              GGS_stringlist & outOperand9,
                                              GGS_string & outOperand10,
                                              GGS__32_stringlist & outOperand11,
                                              GGS_string & outOperand12,
                                              GGS_stringlist & outOperand13,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (0 COMMA_THERE).mProperty_mResourceFileBuildRefs ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_popLast (GGS_string & outOperand0,
                                             GGS_string & outOperand1,
                                             GGS_string & outOperand2,
                                             GGS_string & outOperand3,
                                             GGS_stringlist & outOperand4,
                                             GGS_string & outOperand5,
                                             GGS_string & outOperand6,
                                             GGS_stringlist & outOperand7,
                                             GGS_string & outOperand8,
                                             GGS_stringlist & outOperand9,
                                             GGS_string & outOperand10,
                                             GGS__32_stringlist & outOperand11,
                                             GGS_string & outOperand12,
                                             GGS_stringlist & outOperand13,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray.lastObject (HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray.lastObject (HERE).mProperty_mResourceFileBuildRefs ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::method_first (GGS_string & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_stringlist & outOperand4,
                                           GGS_string & outOperand5,
                                           GGS_string & outOperand6,
                                           GGS_stringlist & outOperand7,
                                           GGS_string & outOperand8,
                                           GGS_stringlist & outOperand9,
                                           GGS_string & outOperand10,
                                           GGS__32_stringlist & outOperand11,
                                           GGS_string & outOperand12,
                                           GGS_stringlist & outOperand13,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (0 COMMA_THERE).mProperty_mResourceFileBuildRefs ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::method_last (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_string & outOperand3,
                                          GGS_stringlist & outOperand4,
                                          GGS_string & outOperand5,
                                          GGS_string & outOperand6,
                                          GGS_stringlist & outOperand7,
                                          GGS_string & outOperand8,
                                          GGS_stringlist & outOperand9,
                                          GGS_string & outOperand10,
                                          GGS__32_stringlist & outOperand11,
                                          GGS_string & outOperand12,
                                          GGS_stringlist & outOperand13,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray.lastObject (HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray.lastObject (HERE).mProperty_mResourceFileBuildRefs ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusAssignOperation (const GGS_XCodeAppTargetList inList,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GGS__32_stringlist inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDependentTargets = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS__32_stringlist GGS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDependentTargets ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceBuildRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceBuildRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceFileBuildRefs = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceFileBuildRefs ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeAppTargetList::DownEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element DownEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceFileBuildRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeAppTargetList::UpEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element UpEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceFileBuildRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeAppTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  const GGS_XCodeAppTargetList * p = (const GGS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@BuildFileList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_BuildFileList : public CollectionElementPtr {
  public: GGS_BuildFileList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_BuildFileList (const GGS_string & in_mFileReference,
                                              const GGS_string & in_mFileName,
                                              const GGS_string & in_mBuildReference
                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_BuildFileList::CollectionElementPtr_BuildFileList (const GGS_string & in_mFileReference,
                                                                        const GGS_string & in_mFileName,
                                                                        const GGS_string & in_mBuildReference
                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_BuildFileList::CollectionElementPtr_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_BuildFileList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_BuildFileList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @BuildFileList
//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_BuildFileList * p = (CollectionElementPtr_BuildFileList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_BuildFileList) ;
    const GGS_BuildFileList_2E_element element (p->mObject.mProperty_mFileReference, p->mObject.mProperty_mFileName, p->mObject.mProperty_mBuildReference) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                   const GGS_string & in_mFileReference,
                                                   const GGS_string & in_mFileName,
                                                   const GGS_string & in_mBuildReference
                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_BuildFileList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_BuildFileList (in_mFileReference, in_mFileName, in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_BuildFileList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_BuildFileList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildReference.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::plusPlusAssignOperation (const GGS_BuildFileList_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_BuildFileList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1,
                                            const GGS_string & inOperand2
                                            COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       const GGS_string inOperand2,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_string inOperand2,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFileReference ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFileName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBuildReference ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFileReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFileName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBuildReference ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        GGS_string & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFileReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFileName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBuildReference ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFileReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFileName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBuildReference ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     GGS_string & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFileReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFileName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBuildReference ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::add_operation (const GGS_BuildFileList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::plusAssignOperation (const GGS_BuildFileList inList,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMFileReferenceAtIndex (GGS_string inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFileReference = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_BuildFileList::getter_mFileReferenceAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFileReference ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMFileNameAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFileName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_BuildFileList::getter_mFileNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFileName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMBuildReferenceAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildReference = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_BuildFileList::getter_mBuildReferenceAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildReference ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

DownEnumerator_BuildFileList::DownEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element DownEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildReference ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

UpEnumerator_BuildFileList::UpEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element UpEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildReference ;
}




//--------------------------------------------------------------------------------------------------
//     @BuildFileList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_BuildFileList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  const GGS_BuildFileList * p = (const GGS_BuildFileList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualParameterListAST analyzeRoutineArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineArguments (const GGS_actualParameterListAST inObject,
                                              const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                              const GGS_lstring constinArgument_inRoutineName,
                                              const GGS_string constinArgument_inInvokedEntityName,
                                              const GGS_formalParameterSignature constinArgument_inRoutineSignature,
                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                              GGS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_actualParameterListAST temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas3", 38)).objectCompare (temp_1.getter_count (SOURCE_FILE ("actual-parameters.galgas3", 38)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string temp_2 ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas3", 41)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = GGS_string::makeEmptyString () ;
      }
      const GGS_actualParameterListAST temp_4 = inObject ;
      const GGS_actualParameterListAST temp_5 = inObject ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = GGS_bool (ComparisonKind::greaterThan, temp_5.getter_count (SOURCE_FILE ("actual-parameters.galgas3", 43)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_7) {
        temp_6 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 40)).add_operation (GGS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 40)).add_operation (constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas3", 40)).getter_string (SOURCE_FILE ("actual-parameters.galgas3", 40)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 40)).add_operation (GGS_string (" formal argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 40)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 41)).add_operation (GGS_string (" but this invocation names "), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 41)).add_operation (temp_4.getter_count (SOURCE_FILE ("actual-parameters.galgas3", 43)).getter_string (SOURCE_FILE ("actual-parameters.galgas3", 42)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 42)).add_operation (GGS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 43)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 43)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 39)) ;
      outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GGS_actualParameterListForGeneration::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_exclusiveVariableSet_2819 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    const GGS_actualParameterListAST temp_9 = inObject ;
    UpEnumerator_formalParameterSignature enumerator_2874 (constinArgument_inRoutineSignature) ;
    UpEnumerator_actualParameterListAST enumerator_2895 (temp_9) ;
    while (enumerator_2874.hasCurrentObject () && enumerator_2895.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((cPtr_actualParameterAST *) enumerator_2895.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_2874.current (HERE).readProperty_mFormalSelector (), enumerator_2874.current (HERE).readProperty_mFormalArgumentType (), enumerator_2874.current (HERE).readProperty_mFormalArgumentPassingMode (), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_2819, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 49)) ;
      enumerator_2874.gotoNextObject () ;
      enumerator_2895.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @actualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterAST::objectCompare (const GGS_actualParameterAST & inOperand) const {
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

GGS_actualParameterAST::GGS_actualParameterAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_actualParameterAST::
actualParameterAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST::GGS_actualParameterAST (const cPtr_actualParameterAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_actualParameterAST::cPtr_actualParameterAST (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actualParameterAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @actualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterAST ("actualParameterAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST GGS_actualParameterAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_actualParameterAST result ;
  const GGS_actualParameterAST * p = (const GGS_actualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterParameterInSemanticContext (cPtr_actualParameterAST * inObject,
                                                          GGS_unifiedTypeMap & io_ioTypeMap,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_enterParameterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@actualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isCompatibleWith (const cPtr_actualParameterAST * inObject,
                                               const GGS_formalArgumentPassingModeAST in_inFormalPassingMode,
                                               const GGS_string in_inSelector,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isCompatibleWith (in_inFormalPassingMode, in_inSelector, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInActualOutputParameterList (cPtr_actualParameterAST * inObject,
                                                           GGS_actualOutputArgumentList & io_ioActualOutputArgumentList,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_enterInActualOutputParameterList (io_ioActualOutputArgumentList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkAgainstFormalArgument (cPtr_actualParameterAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_analysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     const GGS_lstring constin_inFormalSelector,
                                                     const GGS_unifiedTypeMapEntry constin_inFormalArgumentType,
                                                     const GGS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                     GGS_localVarManager & io_ioVariableMap,
                                                     GGS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                     GGS_stringset & io_ioExclusiveVariableSet,
                                                     GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_checkAgainstFormalArgument (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inFormalSelector, constin_inFormalArgumentType, constin_inFormalArgumentPassingMode, io_ioVariableMap, io_ioActualParameterListForGeneration, io_ioExclusiveVariableSet, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterAST_2E_weak::objectCompare (const GGS_actualParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_actualParameterAST_2E_weak::GGS_actualParameterAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak & GGS_actualParameterAST_2E_weak::operator = (const GGS_actualParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak::GGS_actualParameterAST_2E_weak (const GGS_actualParameterAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak GGS_actualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_actualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST GGS_actualParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_actualParameterAST result ;
  if (isValid ()) {
    const cPtr_actualParameterAST * p = (cPtr_actualParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_actualParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST GGS_actualParameterAST_2E_weak::bang_actualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_actualParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterAST) ;
      result = GGS_actualParameterAST ((cPtr_actualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @actualParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterAST_2E_weak ("actualParameterAST.weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak GGS_actualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_actualParameterAST_2E_weak result ;
  const GGS_actualParameterAST_2E_weak * p = (const GGS_actualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterAST_2E_weak::objectCompare (const GGS_outputActualParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_outputActualParameterAST_2E_weak::GGS_outputActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak & GGS_outputActualParameterAST_2E_weak::operator = (const GGS_outputActualParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak::GGS_outputActualParameterAST_2E_weak (const GGS_outputActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak GGS_outputActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_outputActualParameterAST result ;
  if (isValid ()) {
    const cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_outputActualParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST_2E_weak::bang_outputActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputActualParameterAST) ;
      result = GGS_outputActualParameterAST ((cPtr_outputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterAST_2E_weak ("outputActualParameterAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak GGS_outputActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterAST_2E_weak result ;
  const GGS_outputActualParameterAST_2E_weak * p = (const GGS_outputActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterAST_2E_weak::objectCompare (const GGS_outputInputActualParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_outputInputActualParameterAST_2E_weak::GGS_outputInputActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak & GGS_outputInputActualParameterAST_2E_weak::operator = (const GGS_outputInputActualParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak::GGS_outputInputActualParameterAST_2E_weak (const GGS_outputInputActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak GGS_outputInputActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_outputInputActualParameterAST result ;
  if (isValid ()) {
    const cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_outputInputActualParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST_2E_weak::bang_outputInputActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterAST) ;
      result = GGS_outputInputActualParameterAST ((cPtr_outputInputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outputInputActualParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST_2E_weak ("outputInputActualParameterAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak GGS_outputInputActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterAST_2E_weak result ;
  const GGS_outputInputActualParameterAST_2E_weak * p = (const GGS_outputInputActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputJokerParameterAST_2E_weak::objectCompare (const GGS_outputInputJokerParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_outputInputJokerParameterAST_2E_weak::GGS_outputInputJokerParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak & GGS_outputInputJokerParameterAST_2E_weak::operator = (const GGS_outputInputJokerParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak::GGS_outputInputJokerParameterAST_2E_weak (const GGS_outputInputJokerParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak GGS_outputInputJokerParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputJokerParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_outputInputJokerParameterAST result ;
  if (isValid ()) {
    const cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_outputInputJokerParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST_2E_weak::bang_outputInputJokerParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputJokerParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputJokerParameterAST) ;
      result = GGS_outputInputJokerParameterAST ((cPtr_outputInputJokerParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outputInputJokerParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2E_weak ("outputInputJokerParameterAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputJokerParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputJokerParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputJokerParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak GGS_outputInputJokerParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_outputInputJokerParameterAST_2E_weak result ;
  const GGS_outputInputJokerParameterAST_2E_weak * p = (const GGS_outputInputJokerParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputJokerParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputSelfParameterAST_2E_weak::objectCompare (const GGS_outputInputSelfParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_outputInputSelfParameterAST_2E_weak::GGS_outputInputSelfParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak & GGS_outputInputSelfParameterAST_2E_weak::operator = (const GGS_outputInputSelfParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak::GGS_outputInputSelfParameterAST_2E_weak (const GGS_outputInputSelfParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak GGS_outputInputSelfParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputSelfParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_outputInputSelfParameterAST result ;
  if (isValid ()) {
    const cPtr_outputInputSelfParameterAST * p = (cPtr_outputInputSelfParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_outputInputSelfParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST_2E_weak::bang_outputInputSelfParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputSelfParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputSelfParameterAST) ;
      result = GGS_outputInputSelfParameterAST ((cPtr_outputInputSelfParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outputInputSelfParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2E_weak ("outputInputSelfParameterAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputSelfParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputSelfParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputSelfParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak GGS_outputInputSelfParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_outputInputSelfParameterAST_2E_weak result ;
  const GGS_outputInputSelfParameterAST_2E_weak * p = (const GGS_outputInputSelfParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputSelfParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSelfParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualExistingVariableParameterAST_2E_weak::objectCompare (const GGS_inputActualExistingVariableParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_inputActualExistingVariableParameterAST_2E_weak::GGS_inputActualExistingVariableParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak & GGS_inputActualExistingVariableParameterAST_2E_weak::operator = (const GGS_inputActualExistingVariableParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak::GGS_inputActualExistingVariableParameterAST_2E_weak (const GGS_inputActualExistingVariableParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak GGS_inputActualExistingVariableParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualExistingVariableParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_inputActualExistingVariableParameterAST result ;
  if (isValid ()) {
    const cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputActualExistingVariableParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST_2E_weak::bang_inputActualExistingVariableParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualExistingVariableParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualExistingVariableParameterAST) ;
      result = GGS_inputActualExistingVariableParameterAST ((cPtr_inputActualExistingVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputActualExistingVariableParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2E_weak ("inputActualExistingVariableParameterAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualExistingVariableParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualExistingVariableParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualExistingVariableParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak GGS_inputActualExistingVariableParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_inputActualExistingVariableParameterAST_2E_weak result ;
  const GGS_inputActualExistingVariableParameterAST_2E_weak * p = (const GGS_inputActualExistingVariableParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualExistingVariableParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfPropertyParameterAST_2E_weak::objectCompare (const GGS_inputActualSelfPropertyParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_inputActualSelfPropertyParameterAST_2E_weak::GGS_inputActualSelfPropertyParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak & GGS_inputActualSelfPropertyParameterAST_2E_weak::operator = (const GGS_inputActualSelfPropertyParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak::GGS_inputActualSelfPropertyParameterAST_2E_weak (const GGS_inputActualSelfPropertyParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak GGS_inputActualSelfPropertyParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualSelfPropertyParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_inputActualSelfPropertyParameterAST result ;
  if (isValid ()) {
    const cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputActualSelfPropertyParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST_2E_weak::bang_inputActualSelfPropertyParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualSelfPropertyParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualSelfPropertyParameterAST) ;
      result = GGS_inputActualSelfPropertyParameterAST ((cPtr_inputActualSelfPropertyParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputActualSelfPropertyParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2E_weak ("inputActualSelfPropertyParameterAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualSelfPropertyParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfPropertyParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfPropertyParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak GGS_inputActualSelfPropertyParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfPropertyParameterAST_2E_weak result ;
  const GGS_inputActualSelfPropertyParameterAST_2E_weak * p = (const GGS_inputActualSelfPropertyParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfPropertyParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfParameterAST_2E_weak::objectCompare (const GGS_inputActualSelfParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_inputActualSelfParameterAST_2E_weak::GGS_inputActualSelfParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak & GGS_inputActualSelfParameterAST_2E_weak::operator = (const GGS_inputActualSelfParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak::GGS_inputActualSelfParameterAST_2E_weak (const GGS_inputActualSelfParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak GGS_inputActualSelfParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualSelfParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_inputActualSelfParameterAST result ;
  if (isValid ()) {
    const cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputActualSelfParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST_2E_weak::bang_inputActualSelfParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualSelfParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualSelfParameterAST) ;
      result = GGS_inputActualSelfParameterAST ((cPtr_inputActualSelfParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputActualSelfParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2E_weak ("inputActualSelfParameterAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualSelfParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak GGS_inputActualSelfParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfParameterAST_2E_weak result ;
  const GGS_inputActualSelfParameterAST_2E_weak * p = (const GGS_inputActualSelfParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewVariableParameterAST_2E_weak::objectCompare (const GGS_inputActualNewVariableParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_inputActualNewVariableParameterAST_2E_weak::GGS_inputActualNewVariableParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak & GGS_inputActualNewVariableParameterAST_2E_weak::operator = (const GGS_inputActualNewVariableParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak::GGS_inputActualNewVariableParameterAST_2E_weak (const GGS_inputActualNewVariableParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak GGS_inputActualNewVariableParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualNewVariableParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_inputActualNewVariableParameterAST result ;
  if (isValid ()) {
    const cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputActualNewVariableParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST_2E_weak::bang_inputActualNewVariableParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualNewVariableParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewVariableParameterAST) ;
      result = GGS_inputActualNewVariableParameterAST ((cPtr_inputActualNewVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputActualNewVariableParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2E_weak ("inputActualNewVariableParameterAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualNewVariableParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewVariableParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewVariableParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak GGS_inputActualNewVariableParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewVariableParameterAST_2E_weak result ;
  const GGS_inputActualNewVariableParameterAST_2E_weak * p = (const GGS_inputActualNewVariableParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewVariableParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewConstantParameterAST_2E_weak::objectCompare (const GGS_inputActualNewConstantParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_inputActualNewConstantParameterAST_2E_weak::GGS_inputActualNewConstantParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak & GGS_inputActualNewConstantParameterAST_2E_weak::operator = (const GGS_inputActualNewConstantParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak::GGS_inputActualNewConstantParameterAST_2E_weak (const GGS_inputActualNewConstantParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak GGS_inputActualNewConstantParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualNewConstantParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_inputActualNewConstantParameterAST result ;
  if (isValid ()) {
    const cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputActualNewConstantParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST_2E_weak::bang_inputActualNewConstantParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualNewConstantParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewConstantParameterAST) ;
      result = GGS_inputActualNewConstantParameterAST ((cPtr_inputActualNewConstantParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputActualNewConstantParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2E_weak ("inputActualNewConstantParameterAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualNewConstantParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewConstantParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewConstantParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak GGS_inputActualNewConstantParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewConstantParameterAST_2E_weak result ;
  const GGS_inputActualNewConstantParameterAST_2E_weak * p = (const GGS_inputActualNewConstantParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewConstantParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputSingleJokerActualParameterAST_2E_weak::objectCompare (const GGS_inputSingleJokerActualParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_inputSingleJokerActualParameterAST_2E_weak::GGS_inputSingleJokerActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak & GGS_inputSingleJokerActualParameterAST_2E_weak::operator = (const GGS_inputSingleJokerActualParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak::GGS_inputSingleJokerActualParameterAST_2E_weak (const GGS_inputSingleJokerActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak GGS_inputSingleJokerActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputSingleJokerActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_inputSingleJokerActualParameterAST result ;
  if (isValid ()) {
    const cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputSingleJokerActualParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST_2E_weak::bang_inputSingleJokerActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputSingleJokerActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputSingleJokerActualParameterAST) ;
      result = GGS_inputSingleJokerActualParameterAST ((cPtr_inputSingleJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputSingleJokerActualParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2E_weak ("inputSingleJokerActualParameterAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputSingleJokerActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputSingleJokerActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputSingleJokerActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak GGS_inputSingleJokerActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputSingleJokerActualParameterAST_2E_weak result ;
  const GGS_inputSingleJokerActualParameterAST_2E_weak * p = (const GGS_inputSingleJokerActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputSingleJokerActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerActualParameterAST::objectCompare (const GGS_inputJokerActualParameterAST & inOperand) const {
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

GGS_inputJokerActualParameterAST::GGS_inputJokerActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST::
init_21__21_ (const GGS_location & in_mQualifierLocation,
              const GGS_uint & in_mJokerIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputJokerActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputJokerActualParameterAST (inCompiler COMMA_THERE)) ;
  object->inputJokerActualParameterAST_init_21__21_ (in_mQualifierLocation, in_mJokerIndex, inCompiler) ;
  const GGS_inputJokerActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::
inputJokerActualParameterAST_init_21__21_ (const GGS_location & in_mQualifierLocation,
                                           const GGS_uint & in_mJokerIndex,
                                           Compiler * /* inCompiler */) {
  mProperty_mQualifierLocation = in_mQualifierLocation ;
  mProperty_mJokerIndex = in_mJokerIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST::GGS_inputJokerActualParameterAST (const cPtr_inputJokerActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_inputJokerActualParameterAST::readProperty_mQualifierLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mQualifierLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_inputJokerActualParameterAST::readProperty_mJokerIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mJokerIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mQualifierLocation (),
mProperty_mJokerIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (const GGS_location & in_mQualifierLocation,
                                                                      const GGS_uint & in_mJokerIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mQualifierLocation (),
mProperty_mJokerIndex () {
  mProperty_mQualifierLocation = in_mQualifierLocation ;
  mProperty_mJokerIndex = in_mJokerIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

void cPtr_inputJokerActualParameterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@inputJokerActualParameterAST:") ;
  mProperty_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputJokerActualParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputJokerActualParameterAST (mProperty_mQualifierLocation, mProperty_mJokerIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputJokerActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mQualifierLocation.printNonNullClassInstanceProperties ("mQualifierLocation") ;
    mProperty_mJokerIndex.printNonNullClassInstanceProperties ("mJokerIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputJokerActualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST ("inputJokerActualParameterAST",
                                                                                 & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_inputJokerActualParameterAST result ;
  const GGS_inputJokerActualParameterAST * p = (const GGS_inputJokerActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerActualParameterAST_2E_weak::objectCompare (const GGS_inputJokerActualParameterAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_inputJokerActualParameterAST_2E_weak::GGS_inputJokerActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak & GGS_inputJokerActualParameterAST_2E_weak::operator = (const GGS_inputJokerActualParameterAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak::GGS_inputJokerActualParameterAST_2E_weak (const GGS_inputJokerActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak GGS_inputJokerActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputJokerActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST_2E_weak::unwrappedValue (void) const {
  GGS_inputJokerActualParameterAST result ;
  if (isValid ()) {
    const cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputJokerActualParameterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST_2E_weak::bang_inputJokerActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputJokerActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputJokerActualParameterAST) ;
      result = GGS_inputJokerActualParameterAST ((cPtr_inputJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputJokerActualParameterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2E_weak ("inputJokerActualParameterAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputJokerActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak GGS_inputJokerActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_inputJokerActualParameterAST_2E_weak result ;
  const GGS_inputJokerActualParameterAST_2E_weak * p = (const GGS_inputJokerActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiSimpleAttributeListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_guiSimpleAttributeListAST : public CollectionElementPtr {
  public: GGS_guiSimpleAttributeListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_guiSimpleAttributeListAST (const GGS_lstring & in_mKey,
                                                          const GGS_lstring & in_mValue
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiSimpleAttributeListAST::CollectionElementPtr_guiSimpleAttributeListAST (const GGS_lstring & in_mKey,
                                                                                                const GGS_lstring & in_mValue
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mKey, in_mValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiSimpleAttributeListAST::CollectionElementPtr_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_guiSimpleAttributeListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_guiSimpleAttributeListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_guiSimpleAttributeListAST (mObject.mProperty_mKey, mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @guiSimpleAttributeListAST
//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST::GGS_guiSimpleAttributeListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST::GGS_guiSimpleAttributeListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_guiSimpleAttributeListAST * p = (CollectionElementPtr_guiSimpleAttributeListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_guiSimpleAttributeListAST) ;
    const GGS_guiSimpleAttributeListAST_2E_element element (p->mObject.mProperty_mKey, p->mObject.mProperty_mValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_lstring & in_mKey,
                                                               const GGS_lstring & in_mValue
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_guiSimpleAttributeListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_guiSimpleAttributeListAST (in_mKey, in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guiSimpleAttributeListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_guiSimpleAttributeListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mKey:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mKey.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::plusPlusAssignOperation (const GGS_guiSimpleAttributeListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                       const GGS_lstring & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_guiSimpleAttributeListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_guiSimpleAttributeListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  const GGS_guiSimpleAttributeListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_append (const GGS_lstring inOperand0,
                                                   const GGS_lstring inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_guiSimpleAttributeListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                          const GGS_lstring inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_guiSimpleAttributeListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                          GGS_lstring & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mKey ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_popLast (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::method_first (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::method_last (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::add_operation (const GGS_guiSimpleAttributeListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::plusAssignOperation (const GGS_guiSimpleAttributeListAST inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_setMKeyAtIndex (GGS_lstring inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mKey = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_guiSimpleAttributeListAST::getter_mKeyAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mKey ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST::setter_setMValueAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_guiSimpleAttributeListAST::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiSimpleAttributeListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiSimpleAttributeListAST::DownEnumerator_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element DownEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiSimpleAttributeListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiSimpleAttributeListAST::UpEnumerator_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element UpEnumerator_guiSimpleAttributeListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiSimpleAttributeListAST::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiSimpleAttributeListAST::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @guiSimpleAttributeListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ("guiSimpleAttributeListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiSimpleAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiSimpleAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiSimpleAttributeListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST GGS_guiSimpleAttributeListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST result ;
  const GGS_guiSimpleAttributeListAST * p = (const GGS_guiSimpleAttributeListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiSimpleAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiCompoundAttributeListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_guiCompoundAttributeListAST : public CollectionElementPtr {
  public: GGS_guiCompoundAttributeListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_guiCompoundAttributeListAST (const GGS_lstring & in_mKey,
                                                            const GGS_lstring & in_mAttributeName,
                                                            const GGS_lstring & in_mValue
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiCompoundAttributeListAST::CollectionElementPtr_guiCompoundAttributeListAST (const GGS_lstring & in_mKey,
                                                                                                    const GGS_lstring & in_mAttributeName,
                                                                                                    const GGS_lstring & in_mValue
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mKey, in_mAttributeName, in_mValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiCompoundAttributeListAST::CollectionElementPtr_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mAttributeName, inElement.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_guiCompoundAttributeListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_guiCompoundAttributeListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_guiCompoundAttributeListAST (mObject.mProperty_mKey, mObject.mProperty_mAttributeName, mObject.mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @guiCompoundAttributeListAST
//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST::GGS_guiCompoundAttributeListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST::GGS_guiCompoundAttributeListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_guiCompoundAttributeListAST * p = (CollectionElementPtr_guiCompoundAttributeListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_guiCompoundAttributeListAST) ;
    const GGS_guiCompoundAttributeListAST_2E_element element (p->mObject.mProperty_mKey, p->mObject.mProperty_mAttributeName, p->mObject.mProperty_mValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mKey,
                                                                 const GGS_lstring & in_mAttributeName,
                                                                 const GGS_lstring & in_mValue
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_guiCompoundAttributeListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_guiCompoundAttributeListAST (in_mKey, in_mAttributeName, in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guiCompoundAttributeListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_guiCompoundAttributeListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mKey:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mKey.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::plusPlusAssignOperation (const GGS_guiCompoundAttributeListAST_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_lstring & inOperand1,
                                                                                           const GGS_lstring & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_guiCompoundAttributeListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_guiCompoundAttributeListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_lstring & inOperand1,
                                                          const GGS_lstring & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  const GGS_guiCompoundAttributeListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     const GGS_lstring inOperand2,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_guiCompoundAttributeListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_lstring inOperand2,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_guiCompoundAttributeListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_lstring & outOperand2,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mKey ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mAttributeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_lstring & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_lstring & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::method_first (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_lstring & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::method_last (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_lstring & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::add_operation (const GGS_guiCompoundAttributeListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::plusAssignOperation (const GGS_guiCompoundAttributeListAST inList,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_setMKeyAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mKey = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_guiCompoundAttributeListAST::getter_mKeyAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mKey ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_guiCompoundAttributeListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST::setter_setMValueAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_guiCompoundAttributeListAST::getter_mValueAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiCompoundAttributeListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiCompoundAttributeListAST::DownEnumerator_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element DownEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiCompoundAttributeListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiCompoundAttributeListAST::UpEnumerator_guiCompoundAttributeListAST (const GGS_guiCompoundAttributeListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element UpEnumerator_guiCompoundAttributeListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiCompoundAttributeListAST::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiCompoundAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guiCompoundAttributeListAST::current_mValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue ;
}




//--------------------------------------------------------------------------------------------------
//     @guiCompoundAttributeListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ("guiCompoundAttributeListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCompoundAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCompoundAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCompoundAttributeListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST GGS_guiCompoundAttributeListAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST result ;
  const GGS_guiCompoundAttributeListAST * p = (const GGS_guiCompoundAttributeListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCompoundAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@terminalLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_terminalLabelListAST : public CollectionElementPtr {
  public: GGS_terminalLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_terminalLabelListAST (const GGS_lstring & in_mTerminal,
                                                     const GGS_uint & in_mDisplayFlags
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_terminalLabelListAST (const GGS_terminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalLabelListAST::CollectionElementPtr_terminalLabelListAST (const GGS_lstring & in_mTerminal,
                                                                                      const GGS_uint & in_mDisplayFlags
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTerminal, in_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalLabelListAST::CollectionElementPtr_terminalLabelListAST (const GGS_terminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTerminal, inElement.mProperty_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_terminalLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_terminalLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_terminalLabelListAST (mObject.mProperty_mTerminal, mObject.mProperty_mDisplayFlags COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST::GGS_terminalLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST::GGS_terminalLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_terminalLabelListAST * p = (CollectionElementPtr_terminalLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_terminalLabelListAST) ;
    const GGS_terminalLabelListAST_2E_element element (p->mObject.mProperty_mTerminal, p->mObject.mProperty_mDisplayFlags) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_lstring & in_mTerminal,
                                                          const GGS_uint & in_mDisplayFlags
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_terminalLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_terminalLabelListAST (in_mTerminal, in_mDisplayFlags COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_terminalLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTerminal:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTerminal.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDisplayFlags:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDisplayFlags.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::plusPlusAssignOperation (const GGS_terminalLabelListAST_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_terminalLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_uint & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_append (const GGS_lstring inOperand0,
                                              const GGS_uint inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_uint inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_uint & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTerminal ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mDisplayFlags ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTerminal ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDisplayFlags ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTerminal ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDisplayFlags ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::method_first (GGS_lstring & outOperand0,
                                             GGS_uint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTerminal ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDisplayFlags ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::method_last (GGS_lstring & outOperand0,
                                            GGS_uint & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTerminal ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDisplayFlags ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::add_operation (const GGS_terminalLabelListAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::plusAssignOperation (const GGS_terminalLabelListAST inList,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_setMTerminalAtIndex (GGS_lstring inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminal = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_terminalLabelListAST::getter_mTerminalAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminal ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_setMDisplayFlagsAtIndex (GGS_uint inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDisplayFlags = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_terminalLabelListAST::getter_mDisplayFlagsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDisplayFlags ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalLabelListAST::DownEnumerator_terminalLabelListAST (const GGS_terminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element DownEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDisplayFlags ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalLabelListAST::UpEnumerator_terminalLabelListAST (const GGS_terminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element UpEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDisplayFlags ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalLabelListAST result ;
  const GGS_terminalLabelListAST * p = (const GGS_terminalLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_guiLabelListAST : public CollectionElementPtr {
  public: GGS_guiLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_guiLabelListAST (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                const GGS_terminalLabelListAST & in_mTerminalList,
                                                const GGS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_guiLabelListAST (const GGS_guiLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiLabelListAST::CollectionElementPtr_guiLabelListAST (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                            const GGS_terminalLabelListAST & in_mTerminalList,
                                                                            const GGS_location & in_mLocation
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiLabelListAST::CollectionElementPtr_guiLabelListAST (const GGS_guiLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLeadingCharacterStrippedCount, inElement.mProperty_mTerminalList, inElement.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_guiLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_guiLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_guiLabelListAST (mObject.mProperty_mLeadingCharacterStrippedCount, mObject.mProperty_mTerminalList, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @guiLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST::GGS_guiLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST::GGS_guiLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_guiLabelListAST * p = (CollectionElementPtr_guiLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_guiLabelListAST) ;
    const GGS_guiLabelListAST_2E_element element (p->mObject.mProperty_mLeadingCharacterStrippedCount, p->mObject.mProperty_mTerminalList, p->mObject.mProperty_mLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                     const GGS_terminalLabelListAST & in_mTerminalList,
                                                     const GGS_location & in_mLocation
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_guiLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_guiLabelListAST (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guiLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_guiLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLeadingCharacterStrippedCount:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTerminalList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTerminalList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::plusPlusAssignOperation (const GGS_guiLabelListAST_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                   const GGS_terminalLabelListAST & inOperand1,
                                                                   const GGS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_guiLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::addAssignOperation (const GGS_uint & inOperand0,
                                              const GGS_terminalLabelListAST & inOperand1,
                                              const GGS_location & inOperand2
                                              COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_append (const GGS_uint inOperand0,
                                         const GGS_terminalLabelListAST inOperand1,
                                         const GGS_location inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_insertAtIndex (const GGS_uint inOperand0,
                                                const GGS_terminalLabelListAST inOperand1,
                                                const GGS_location inOperand2,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_removeAtIndex (GGS_uint & outOperand0,
                                                GGS_terminalLabelListAST & outOperand1,
                                                GGS_location & outOperand2,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTerminalList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_popFirst (GGS_uint & outOperand0,
                                           GGS_terminalLabelListAST & outOperand1,
                                           GGS_location & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTerminalList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_popLast (GGS_uint & outOperand0,
                                          GGS_terminalLabelListAST & outOperand1,
                                          GGS_location & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTerminalList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::method_first (GGS_uint & outOperand0,
                                        GGS_terminalLabelListAST & outOperand1,
                                        GGS_location & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTerminalList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::method_last (GGS_uint & outOperand0,
                                       GGS_terminalLabelListAST & outOperand1,
                                       GGS_location & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTerminalList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::add_operation (const GGS_guiLabelListAST & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::plusAssignOperation (const GGS_guiLabelListAST inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_setMLeadingCharacterStrippedCountAtIndex (GGS_uint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLeadingCharacterStrippedCount = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_guiLabelListAST::getter_mLeadingCharacterStrippedCountAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLeadingCharacterStrippedCount ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_setMTerminalListAtIndex (GGS_terminalLabelListAST inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminalList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_terminalLabelListAST GGS_guiLabelListAST::getter_mTerminalListAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminalList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_setMLocationAtIndex (GGS_location inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_guiLabelListAST::getter_mLocationAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiLabelListAST::DownEnumerator_guiLabelListAST (const GGS_guiLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element DownEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST DownEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminalList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiLabelListAST::UpEnumerator_guiLabelListAST (const GGS_guiLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element UpEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST UpEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminalList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @guiLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_guiLabelListAST result ;
  const GGS_guiLabelListAST * p = (const GGS_guiLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@withLexiqueListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_withLexiqueListAST : public CollectionElementPtr {
  public: GGS_withLexiqueListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_withLexiqueListAST (const GGS_lstring & in_mLexiqueFileName,
                                                   const GGS_guiLabelListAST & in_mLabels,
                                                   const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                   const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_withLexiqueListAST (const GGS_withLexiqueListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_withLexiqueListAST::CollectionElementPtr_withLexiqueListAST (const GGS_lstring & in_mLexiqueFileName,
                                                                                  const GGS_guiLabelListAST & in_mLabels,
                                                                                  const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                                  const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_withLexiqueListAST::CollectionElementPtr_withLexiqueListAST (const GGS_withLexiqueListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLexiqueFileName, inElement.mProperty_mLabels, inElement.mProperty_mSimpleAttributes, inElement.mProperty_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_withLexiqueListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_withLexiqueListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_withLexiqueListAST (mObject.mProperty_mLexiqueFileName, mObject.mProperty_mLabels, mObject.mProperty_mSimpleAttributes, mObject.mProperty_mCompoundAttributes COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST::GGS_withLexiqueListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST::GGS_withLexiqueListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_withLexiqueListAST * p = (CollectionElementPtr_withLexiqueListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_withLexiqueListAST) ;
    const GGS_withLexiqueListAST_2E_element element (p->mObject.mProperty_mLexiqueFileName, p->mObject.mProperty_mLabels, p->mObject.mProperty_mSimpleAttributes, p->mObject.mProperty_mCompoundAttributes) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_lstring & in_mLexiqueFileName,
                                                        const GGS_guiLabelListAST & in_mLabels,
                                                        const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                        const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_withLexiqueListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_withLexiqueListAST (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_withLexiqueListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_withLexiqueListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexiqueFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexiqueFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabels:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabels.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSimpleAttributes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSimpleAttributes.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCompoundAttributes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCompoundAttributes.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_withLexiqueListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::plusPlusAssignOperation (const GGS_withLexiqueListAST_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                         const GGS_guiLabelListAST & inOperand1,
                                                                         const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                         const GGS_guiCompoundAttributeListAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_withLexiqueListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                 const GGS_guiLabelListAST & inOperand1,
                                                 const GGS_guiSimpleAttributeListAST & inOperand2,
                                                 const GGS_guiCompoundAttributeListAST & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_append (const GGS_lstring inOperand0,
                                            const GGS_guiLabelListAST inOperand1,
                                            const GGS_guiSimpleAttributeListAST inOperand2,
                                            const GGS_guiCompoundAttributeListAST inOperand3,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                   const GGS_guiLabelListAST inOperand1,
                                                   const GGS_guiSimpleAttributeListAST inOperand2,
                                                   const GGS_guiCompoundAttributeListAST inOperand3,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                   GGS_guiLabelListAST & outOperand1,
                                                   GGS_guiSimpleAttributeListAST & outOperand2,
                                                   GGS_guiCompoundAttributeListAST & outOperand3,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLabels ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mCompoundAttributes ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_popFirst (GGS_lstring & outOperand0,
                                              GGS_guiLabelListAST & outOperand1,
                                              GGS_guiSimpleAttributeListAST & outOperand2,
                                              GGS_guiCompoundAttributeListAST & outOperand3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mCompoundAttributes ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_popLast (GGS_lstring & outOperand0,
                                             GGS_guiLabelListAST & outOperand1,
                                             GGS_guiSimpleAttributeListAST & outOperand2,
                                             GGS_guiCompoundAttributeListAST & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mCompoundAttributes ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::method_first (GGS_lstring & outOperand0,
                                           GGS_guiLabelListAST & outOperand1,
                                           GGS_guiSimpleAttributeListAST & outOperand2,
                                           GGS_guiCompoundAttributeListAST & outOperand3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mCompoundAttributes ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::method_last (GGS_lstring & outOperand0,
                                          GGS_guiLabelListAST & outOperand1,
                                          GGS_guiSimpleAttributeListAST & outOperand2,
                                          GGS_guiCompoundAttributeListAST & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mCompoundAttributes ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::add_operation (const GGS_withLexiqueListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::plusAssignOperation (const GGS_withLexiqueListAST inList,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMLexiqueFileNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueFileName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_withLexiqueListAST::getter_mLexiqueFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueFileName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMLabelsAtIndex (GGS_guiLabelListAST inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_guiLabelListAST GGS_withLexiqueListAST::getter_mLabelsAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMSimpleAttributesAtIndex (GGS_guiSimpleAttributeListAST inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSimpleAttributes = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_guiSimpleAttributeListAST GGS_withLexiqueListAST::getter_mSimpleAttributesAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSimpleAttributes ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_setMCompoundAttributesAtIndex (GGS_guiCompoundAttributeListAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCompoundAttributes = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_guiCompoundAttributeListAST GGS_withLexiqueListAST::getter_mCompoundAttributesAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCompoundAttributes ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_withLexiqueListAST::DownEnumerator_withLexiqueListAST (const GGS_withLexiqueListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element DownEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST DownEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST DownEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSimpleAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST DownEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCompoundAttributes ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_withLexiqueListAST::UpEnumerator_withLexiqueListAST (const GGS_withLexiqueListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element UpEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST UpEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST UpEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSimpleAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST UpEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCompoundAttributes ;
}




//--------------------------------------------------------------------------------------------------
//     @withLexiqueListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_withLexiqueListAST result ;
  const GGS_withLexiqueListAST * p = (const GGS_withLexiqueListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_withLexiqueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiCommandLineOptionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_guiCommandLineOptionList : public CollectionElementPtr {
  public: GGS_guiCommandLineOptionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_guiCommandLineOptionList (const GGS_string & in_mOptionComponent,
                                                         const GGS_string & in_mOptionIdentifier,
                                                         const GGS_char & in_mOptionChar,
                                                         const GGS_string & in_mOptionString,
                                                         const GGS_string & in_mComment
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_guiCommandLineOptionList (const GGS_guiCommandLineOptionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiCommandLineOptionList::CollectionElementPtr_guiCommandLineOptionList (const GGS_string & in_mOptionComponent,
                                                                                              const GGS_string & in_mOptionIdentifier,
                                                                                              const GGS_char & in_mOptionChar,
                                                                                              const GGS_string & in_mOptionString,
                                                                                              const GGS_string & in_mComment
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiCommandLineOptionList::CollectionElementPtr_guiCommandLineOptionList (const GGS_guiCommandLineOptionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOptionComponent, inElement.mProperty_mOptionIdentifier, inElement.mProperty_mOptionChar, inElement.mProperty_mOptionString, inElement.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_guiCommandLineOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_guiCommandLineOptionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_guiCommandLineOptionList (mObject.mProperty_mOptionComponent, mObject.mProperty_mOptionIdentifier, mObject.mProperty_mOptionChar, mObject.mProperty_mOptionString, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList::GGS_guiCommandLineOptionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList::GGS_guiCommandLineOptionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_guiCommandLineOptionList * p = (CollectionElementPtr_guiCommandLineOptionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_guiCommandLineOptionList) ;
    const GGS_guiCommandLineOptionList_2E_element element (p->mObject.mProperty_mOptionComponent, p->mObject.mProperty_mOptionIdentifier, p->mObject.mProperty_mOptionChar, p->mObject.mProperty_mOptionString, p->mObject.mProperty_mComment) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_string & in_mOptionComponent,
                                                              const GGS_string & in_mOptionIdentifier,
                                                              const GGS_char & in_mOptionChar,
                                                              const GGS_string & in_mOptionString,
                                                              const GGS_string & in_mComment
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_guiCommandLineOptionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_guiCommandLineOptionList (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guiCommandLineOptionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_guiCommandLineOptionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionComponent:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionComponent.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionIdentifier:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionIdentifier.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionChar:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionChar.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mComment:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mComment.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::plusPlusAssignOperation (const GGS_guiCommandLineOptionList_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                     const GGS_string & inOperand1,
                                                                                     const GGS_char & inOperand2,
                                                                                     const GGS_string & inOperand3,
                                                                                     const GGS_string & inOperand4
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_guiCommandLineOptionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::addAssignOperation (const GGS_string & inOperand0,
                                                       const GGS_string & inOperand1,
                                                       const GGS_char & inOperand2,
                                                       const GGS_string & inOperand3,
                                                       const GGS_string & inOperand4
                                                       COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_append (const GGS_string inOperand0,
                                                  const GGS_string inOperand1,
                                                  const GGS_char inOperand2,
                                                  const GGS_string inOperand3,
                                                  const GGS_string inOperand4,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_insertAtIndex (const GGS_string inOperand0,
                                                         const GGS_string inOperand1,
                                                         const GGS_char inOperand2,
                                                         const GGS_string inOperand3,
                                                         const GGS_string inOperand4,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_removeAtIndex (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         GGS_char & outOperand2,
                                                         GGS_string & outOperand3,
                                                         GGS_string & outOperand4,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOptionComponent ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mOptionChar ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mOptionString ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mComment ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_popFirst (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_char & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_string & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionComponent ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOptionChar ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mOptionString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mComment ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_popLast (GGS_string & outOperand0,
                                                   GGS_string & outOperand1,
                                                   GGS_char & outOperand2,
                                                   GGS_string & outOperand3,
                                                   GGS_string & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionComponent ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOptionChar ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mOptionString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mComment ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::method_first (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_char & outOperand2,
                                                 GGS_string & outOperand3,
                                                 GGS_string & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionComponent ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOptionChar ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mOptionString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mComment ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::method_last (GGS_string & outOperand0,
                                                GGS_string & outOperand1,
                                                GGS_char & outOperand2,
                                                GGS_string & outOperand3,
                                                GGS_string & outOperand4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionComponent ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOptionChar ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mOptionString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mComment ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::add_operation (const GGS_guiCommandLineOptionList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::plusAssignOperation (const GGS_guiCommandLineOptionList inList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionComponentAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionComponent = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionComponent ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionIdentifierAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionIdentifier = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionIdentifier ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionCharAtIndex (GGS_char inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionChar = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_char GGS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionChar ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMOptionStringAtIndex (GGS_string inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_setMCommentAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mComment = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_guiCommandLineOptionList::getter_mCommentAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mComment ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiCommandLineOptionList::DownEnumerator_guiCommandLineOptionList (const GGS_guiCommandLineOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element DownEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionComponent ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char DownEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiCommandLineOptionList::UpEnumerator_guiCommandLineOptionList (const GGS_guiCommandLineOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element UpEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionComponent ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char UpEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mComment ;
}




//--------------------------------------------------------------------------------------------------
//     @guiCommandLineOptionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList result ;
  const GGS_guiCommandLineOptionList * p = (const GGS_guiCommandLineOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCommandLineOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::GGS_extensionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::~ GGS_extensionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::GGS_extensionMap (const GGS_extensionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap & GGS_extensionMap::operator = (const GGS_extensionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMap::getter_hasKey (const GGS_string & inKey
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                 const GGS_uint & inLevel
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionMap::getter_locationForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_extensionMap::getter_keyList (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::performInsert (const GGS_extensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>
GGS_extensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>>
GGS_extensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_ GGS_extensionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexiqueName = info->mProperty_mLexiqueName ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::class_func_mapWithMapToOverride (const GGS_extensionMap & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_insertKey (GGS_lstring inLKey,
                                         GGS_string inArgument0,
                                         GGS_uint inArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_extensionMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionMap::getter_mLexiqueNameForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexiqueName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_mIndexForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_setMLexiqueNameForKey (GGS_string inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexiqueName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_setMIndexForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexiqueName:") ;
    inArray (i COMMA_HERE)->mProperty_mLexiqueName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> array = sortedInfoArray () ;
    GGS_extensionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMap::DownEnumerator_extensionMap (const GGS_extensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element DownEnumerator_extensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMap::UpEnumerator_extensionMap (const GGS_extensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element UpEnumerator_extensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  const GGS_extensionMap * p = (const GGS_extensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@textMacroList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_textMacroList : public CollectionElementPtr {
  public: GGS_textMacroList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_textMacroList (const GGS_string & in_mKey,
                                              const GGS_string & in_mContents
                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_textMacroList (const GGS_textMacroList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_textMacroList::CollectionElementPtr_textMacroList (const GGS_string & in_mKey,
                                                                        const GGS_string & in_mContents
                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mKey, in_mContents) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_textMacroList::CollectionElementPtr_textMacroList (const GGS_textMacroList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mContents) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_textMacroList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_textMacroList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_textMacroList (mObject.mProperty_mKey, mObject.mProperty_mContents COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @textMacroList
//--------------------------------------------------------------------------------------------------

GGS_textMacroList::GGS_textMacroList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList::GGS_textMacroList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_textMacroList * p = (CollectionElementPtr_textMacroList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_textMacroList) ;
    const GGS_textMacroList_2E_element element (p->mObject.mProperty_mKey, p->mObject.mProperty_mContents) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                   const GGS_string & in_mKey,
                                                   const GGS_string & in_mContents
                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_textMacroList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_textMacroList (in_mKey, in_mContents COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_textMacroList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_textMacroList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mKey:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mKey.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mContents:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mContents.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_textMacroList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::plusPlusAssignOperation (const GGS_textMacroList_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element element (inOperand0, inOperand1) ;
  GGS_textMacroList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1
                                            COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mKey ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mContents ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mContents ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mContents ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mContents ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mContents ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::add_operation (const GGS_textMacroList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::plusAssignOperation (const GGS_textMacroList inList,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_setMKeyAtIndex (GGS_string inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mKey = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_textMacroList::getter_mKeyAtIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mKey ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_setMContentsAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mContents = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_textMacroList::getter_mContentsAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mContents ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @textMacroList
//--------------------------------------------------------------------------------------------------

DownEnumerator_textMacroList::DownEnumerator_textMacroList (const GGS_textMacroList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element DownEnumerator_textMacroList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mContents ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @textMacroList
//--------------------------------------------------------------------------------------------------

UpEnumerator_textMacroList::UpEnumerator_textMacroList (const GGS_textMacroList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element UpEnumerator_textMacroList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mContents ;
}




//--------------------------------------------------------------------------------------------------
//     @textMacroList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_textMacroList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_textMacroList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_textMacroList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_textMacroList result ;
  const GGS_textMacroList * p = (const GGS_textMacroList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_textMacroList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@importedLexiqueList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_importedLexiqueList : public CollectionElementPtr {
  public: GGS_importedLexiqueList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_importedLexiqueList (const GGS_string & in_mLexiqueClassName,
                                                    const GGS_uint & in_mIndex,
                                                    const GGS_string & in_mBlockComment,
                                                    const GGS_string & in_mTitle,
                                                    const GGS_textMacroList & in_mTextMacroList,
                                                    const GGS_guiLabelListAST & in_mLabels,
                                                    const GGS_lexicalStyleListAST & in_mLexicalStyleList
                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_importedLexiqueList (const GGS_importedLexiqueList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_importedLexiqueList::CollectionElementPtr_importedLexiqueList (const GGS_string & in_mLexiqueClassName,
                                                                                    const GGS_uint & in_mIndex,
                                                                                    const GGS_string & in_mBlockComment,
                                                                                    const GGS_string & in_mTitle,
                                                                                    const GGS_textMacroList & in_mTextMacroList,
                                                                                    const GGS_guiLabelListAST & in_mLabels,
                                                                                    const GGS_lexicalStyleListAST & in_mLexicalStyleList
                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLexiqueClassName, in_mIndex, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels, in_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_importedLexiqueList::CollectionElementPtr_importedLexiqueList (const GGS_importedLexiqueList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLexiqueClassName, inElement.mProperty_mIndex, inElement.mProperty_mBlockComment, inElement.mProperty_mTitle, inElement.mProperty_mTextMacroList, inElement.mProperty_mLabels, inElement.mProperty_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_importedLexiqueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_importedLexiqueList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_importedLexiqueList (mObject.mProperty_mLexiqueClassName, mObject.mProperty_mIndex, mObject.mProperty_mBlockComment, mObject.mProperty_mTitle, mObject.mProperty_mTextMacroList, mObject.mProperty_mLabels, mObject.mProperty_mLexicalStyleList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @importedLexiqueList
//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList::GGS_importedLexiqueList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList::GGS_importedLexiqueList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_importedLexiqueList * p = (CollectionElementPtr_importedLexiqueList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_importedLexiqueList) ;
    const GGS_importedLexiqueList_2E_element element (p->mObject.mProperty_mLexiqueClassName, p->mObject.mProperty_mIndex, p->mObject.mProperty_mBlockComment, p->mObject.mProperty_mTitle, p->mObject.mProperty_mTextMacroList, p->mObject.mProperty_mLabels, p->mObject.mProperty_mLexicalStyleList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                         const GGS_string & in_mLexiqueClassName,
                                                         const GGS_uint & in_mIndex,
                                                         const GGS_string & in_mBlockComment,
                                                         const GGS_string & in_mTitle,
                                                         const GGS_textMacroList & in_mTextMacroList,
                                                         const GGS_guiLabelListAST & in_mLabels,
                                                         const GGS_lexicalStyleListAST & in_mLexicalStyleList
                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_importedLexiqueList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_importedLexiqueList (in_mLexiqueClassName, in_mIndex, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels, in_mLexicalStyleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_importedLexiqueList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_importedLexiqueList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexiqueClassName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexiqueClassName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBlockComment:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBlockComment.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTitle:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTitle.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTextMacroList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTextMacroList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabels:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabels.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalStyleList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalStyleList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_importedLexiqueList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::plusPlusAssignOperation (const GGS_importedLexiqueList_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_string & inOperand2,
                                                                           const GGS_string & inOperand3,
                                                                           const GGS_textMacroList & inOperand4,
                                                                           const GGS_guiLabelListAST & inOperand5,
                                                                           const GGS_lexicalStyleListAST & inOperand6
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  GGS_importedLexiqueList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::addAssignOperation (const GGS_string & inOperand0,
                                                  const GGS_uint & inOperand1,
                                                  const GGS_string & inOperand2,
                                                  const GGS_string & inOperand3,
                                                  const GGS_textMacroList & inOperand4,
                                                  const GGS_guiLabelListAST & inOperand5,
                                                  const GGS_lexicalStyleListAST & inOperand6
                                                  COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_append (const GGS_string inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_string inOperand2,
                                             const GGS_string inOperand3,
                                             const GGS_textMacroList inOperand4,
                                             const GGS_guiLabelListAST inOperand5,
                                             const GGS_lexicalStyleListAST inOperand6,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_uint inOperand1,
                                                    const GGS_string inOperand2,
                                                    const GGS_string inOperand3,
                                                    const GGS_textMacroList inOperand4,
                                                    const GGS_guiLabelListAST inOperand5,
                                                    const GGS_lexicalStyleListAST inOperand6,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_uint & outOperand1,
                                                    GGS_string & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_textMacroList & outOperand4,
                                                    GGS_guiLabelListAST & outOperand5,
                                                    GGS_lexicalStyleListAST & outOperand6,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mIndex ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBlockComment ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mTitle ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mTextMacroList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mLabels ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mLexicalStyleList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_string & outOperand3,
                                               GGS_textMacroList & outOperand4,
                                               GGS_guiLabelListAST & outOperand5,
                                               GGS_lexicalStyleListAST & outOperand6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBlockComment ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTitle ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTextMacroList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mLexicalStyleList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_popLast (GGS_string & outOperand0,
                                              GGS_uint & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_textMacroList & outOperand4,
                                              GGS_guiLabelListAST & outOperand5,
                                              GGS_lexicalStyleListAST & outOperand6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBlockComment ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTitle ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTextMacroList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mLexicalStyleList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::method_first (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_string & outOperand2,
                                            GGS_string & outOperand3,
                                            GGS_textMacroList & outOperand4,
                                            GGS_guiLabelListAST & outOperand5,
                                            GGS_lexicalStyleListAST & outOperand6,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBlockComment ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTitle ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTextMacroList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mLexicalStyleList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::method_last (GGS_string & outOperand0,
                                           GGS_uint & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_textMacroList & outOperand4,
                                           GGS_guiLabelListAST & outOperand5,
                                           GGS_lexicalStyleListAST & outOperand6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBlockComment ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTitle ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTextMacroList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mLexicalStyleList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::add_operation (const GGS_importedLexiqueList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::plusAssignOperation (const GGS_importedLexiqueList inList,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_setMLexiqueClassNameAtIndex (GGS_string inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueClassName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_importedLexiqueList::getter_mLexiqueClassNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueClassName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_setMIndexAtIndex (GGS_uint inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_importedLexiqueList::getter_mIndexAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_setMBlockCommentAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockComment = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_importedLexiqueList::getter_mBlockCommentAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockComment ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_setMTitleAtIndex (GGS_string inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTitle = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_importedLexiqueList::getter_mTitleAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTitle ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_setMTextMacroListAtIndex (GGS_textMacroList inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTextMacroList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_textMacroList GGS_importedLexiqueList::getter_mTextMacroListAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTextMacroList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_setMLabelsAtIndex (GGS_guiLabelListAST inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_guiLabelListAST GGS_importedLexiqueList::getter_mLabelsAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_setMLexicalStyleListAtIndex (GGS_lexicalStyleListAST inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalStyleList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalStyleListAST GGS_importedLexiqueList::getter_mLexicalStyleListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalStyleListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalStyleList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @importedLexiqueList
//--------------------------------------------------------------------------------------------------

DownEnumerator_importedLexiqueList::DownEnumerator_importedLexiqueList (const GGS_importedLexiqueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element DownEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_importedLexiqueList::current_mIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTitle ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList DownEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTextMacroList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST DownEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST DownEnumerator_importedLexiqueList::current_mLexicalStyleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalStyleList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @importedLexiqueList
//--------------------------------------------------------------------------------------------------

UpEnumerator_importedLexiqueList::UpEnumerator_importedLexiqueList (const GGS_importedLexiqueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element UpEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_importedLexiqueList::current_mIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTitle ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList UpEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTextMacroList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST UpEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST UpEnumerator_importedLexiqueList::current_mLexicalStyleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalStyleList ;
}




//--------------------------------------------------------------------------------------------------
//     @importedLexiqueList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_importedLexiqueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_importedLexiqueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_importedLexiqueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_importedLexiqueList result ;
  const GGS_importedLexiqueList * p = (const GGS_importedLexiqueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_importedLexiqueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@projectIndexingDescriptorList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_projectIndexingDescriptorList : public CollectionElementPtr {
  public: GGS_projectIndexingDescriptorList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_projectIndexingDescriptorList (const GGS_lstring & in_mProjectFileExtension,
                                                              const GGS_lstring & in_indexingPathSuffix
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_projectIndexingDescriptorList::CollectionElementPtr_projectIndexingDescriptorList (const GGS_lstring & in_mProjectFileExtension,
                                                                                                        const GGS_lstring & in_indexingPathSuffix
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProjectFileExtension, in_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_projectIndexingDescriptorList::CollectionElementPtr_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProjectFileExtension, inElement.mProperty_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_projectIndexingDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_projectIndexingDescriptorList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_projectIndexingDescriptorList (mObject.mProperty_mProjectFileExtension, mObject.mProperty_indexingPathSuffix COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @projectIndexingDescriptorList
//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList::GGS_projectIndexingDescriptorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList::GGS_projectIndexingDescriptorList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_projectIndexingDescriptorList * p = (CollectionElementPtr_projectIndexingDescriptorList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_projectIndexingDescriptorList) ;
    const GGS_projectIndexingDescriptorList_2E_element element (p->mObject.mProperty_mProjectFileExtension, p->mObject.mProperty_indexingPathSuffix) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mProjectFileExtension,
                                                                   const GGS_lstring & in_indexingPathSuffix
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_projectIndexingDescriptorList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_projectIndexingDescriptorList (in_mProjectFileExtension, in_indexingPathSuffix COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectIndexingDescriptorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_projectIndexingDescriptorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProjectFileExtension:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProjectFileExtension.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("indexingPathSuffix:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_indexingPathSuffix.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::plusPlusAssignOperation (const GGS_projectIndexingDescriptorList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lstring & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element element (inOperand0, inOperand1) ;
  GGS_projectIndexingDescriptorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lstring inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lstring inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_indexingPathSuffix ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_indexingPathSuffix ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_indexingPathSuffix ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::method_first (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_indexingPathSuffix ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::method_last (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_indexingPathSuffix ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::add_operation (const GGS_projectIndexingDescriptorList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::plusAssignOperation (const GGS_projectIndexingDescriptorList inList,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_setMProjectFileExtensionAtIndex (GGS_lstring inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectFileExtension = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_projectIndexingDescriptorList::getter_mProjectFileExtensionAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectFileExtension ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_setIndexingPathSuffixAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_indexingPathSuffix = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_projectIndexingDescriptorList::getter_indexingPathSuffixAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_indexingPathSuffix ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @projectIndexingDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_projectIndexingDescriptorList::DownEnumerator_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element DownEnumerator_projectIndexingDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectIndexingDescriptorList::current_mProjectFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectIndexingDescriptorList::current_indexingPathSuffix (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_indexingPathSuffix ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @projectIndexingDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_projectIndexingDescriptorList::UpEnumerator_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element UpEnumerator_projectIndexingDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectIndexingDescriptorList::current_mProjectFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectIndexingDescriptorList::current_indexingPathSuffix (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_indexingPathSuffix ;
}




//--------------------------------------------------------------------------------------------------
//     @projectIndexingDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectIndexingDescriptorList ("projectIndexingDescriptorList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectIndexingDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectIndexingDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectIndexingDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectIndexingDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList result ;
  const GGS_projectIndexingDescriptorList * p = (const GGS_projectIndexingDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectIndexingDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectIndexingDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgasGUIComponentListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_galgasGUIComponentListAST : public CollectionElementPtr {
  public: GGS_galgasGUIComponentListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_galgasGUIComponentListAST (const GGS_lstring & in_mGUIComponentName,
                                                          const GGS_lstringlist & in_mImportedOptionList,
                                                          const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                          const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                          const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgasGUIComponentListAST::CollectionElementPtr_galgasGUIComponentListAST (const GGS_lstring & in_mGUIComponentName,
                                                                                                const GGS_lstringlist & in_mImportedOptionList,
                                                                                                const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                                                const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                                                                const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mGUIComponentName, in_mImportedOptionList, in_mGlobalSimpleAttributeList, in_mWithLexiqueList, in_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgasGUIComponentListAST::CollectionElementPtr_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mGUIComponentName, inElement.mProperty_mImportedOptionList, inElement.mProperty_mGlobalSimpleAttributeList, inElement.mProperty_mWithLexiqueList, inElement.mProperty_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_galgasGUIComponentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_galgasGUIComponentListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_galgasGUIComponentListAST (mObject.mProperty_mGUIComponentName, mObject.mProperty_mImportedOptionList, mObject.mProperty_mGlobalSimpleAttributeList, mObject.mProperty_mWithLexiqueList, mObject.mProperty_mProjectIndexingDescriptorList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @galgasGUIComponentListAST
//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST::GGS_galgasGUIComponentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST::GGS_galgasGUIComponentListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_galgasGUIComponentListAST * p = (CollectionElementPtr_galgasGUIComponentListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_galgasGUIComponentListAST) ;
    const GGS_galgasGUIComponentListAST_2E_element element (p->mObject.mProperty_mGUIComponentName, p->mObject.mProperty_mImportedOptionList, p->mObject.mProperty_mGlobalSimpleAttributeList, p->mObject.mProperty_mWithLexiqueList, p->mObject.mProperty_mProjectIndexingDescriptorList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_lstring & in_mGUIComponentName,
                                                               const GGS_lstringlist & in_mImportedOptionList,
                                                               const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                               const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                               const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_galgasGUIComponentListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_galgasGUIComponentListAST (in_mGUIComponentName, in_mImportedOptionList, in_mGlobalSimpleAttributeList, in_mWithLexiqueList, in_mProjectIndexingDescriptorList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_galgasGUIComponentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_galgasGUIComponentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGUIComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGUIComponentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mImportedOptionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mImportedOptionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGlobalSimpleAttributeList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGlobalSimpleAttributeList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mWithLexiqueList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mWithLexiqueList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProjectIndexingDescriptorList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::plusPlusAssignOperation (const GGS_galgasGUIComponentListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                       const GGS_lstringlist & inOperand1,
                                                                                       const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                                       const GGS_withLexiqueListAST & inOperand3,
                                                                                       const GGS_projectIndexingDescriptorList & inOperand4
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_galgasGUIComponentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                        const GGS_lstringlist & inOperand1,
                                                        const GGS_guiSimpleAttributeListAST & inOperand2,
                                                        const GGS_withLexiqueListAST & inOperand3,
                                                        const GGS_projectIndexingDescriptorList & inOperand4
                                                        COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_append (const GGS_lstring inOperand0,
                                                   const GGS_lstringlist inOperand1,
                                                   const GGS_guiSimpleAttributeListAST inOperand2,
                                                   const GGS_withLexiqueListAST inOperand3,
                                                   const GGS_projectIndexingDescriptorList inOperand4,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                          const GGS_lstringlist inOperand1,
                                                          const GGS_guiSimpleAttributeListAST inOperand2,
                                                          const GGS_withLexiqueListAST inOperand3,
                                                          const GGS_projectIndexingDescriptorList inOperand4,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                          GGS_lstringlist & outOperand1,
                                                          GGS_guiSimpleAttributeListAST & outOperand2,
                                                          GGS_withLexiqueListAST & outOperand3,
                                                          GGS_projectIndexingDescriptorList & outOperand4,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mProjectIndexingDescriptorList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                     GGS_lstringlist & outOperand1,
                                                     GGS_guiSimpleAttributeListAST & outOperand2,
                                                     GGS_withLexiqueListAST & outOperand3,
                                                     GGS_projectIndexingDescriptorList & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                    GGS_lstringlist & outOperand1,
                                                    GGS_guiSimpleAttributeListAST & outOperand2,
                                                    GGS_withLexiqueListAST & outOperand3,
                                                    GGS_projectIndexingDescriptorList & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProjectIndexingDescriptorList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::method_first (GGS_lstring & outOperand0,
                                                  GGS_lstringlist & outOperand1,
                                                  GGS_guiSimpleAttributeListAST & outOperand2,
                                                  GGS_withLexiqueListAST & outOperand3,
                                                  GGS_projectIndexingDescriptorList & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::method_last (GGS_lstring & outOperand0,
                                                 GGS_lstringlist & outOperand1,
                                                 GGS_guiSimpleAttributeListAST & outOperand2,
                                                 GGS_withLexiqueListAST & outOperand3,
                                                 GGS_projectIndexingDescriptorList & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProjectIndexingDescriptorList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::add_operation (const GGS_galgasGUIComponentListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::plusAssignOperation (const GGS_galgasGUIComponentListAST inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_setMGUIComponentNameAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGUIComponentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_galgasGUIComponentListAST::getter_mGUIComponentNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGUIComponentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_setMImportedOptionListAtIndex (GGS_lstringlist inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedOptionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstringlist GGS_galgasGUIComponentListAST::getter_mImportedOptionListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedOptionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_setMGlobalSimpleAttributeListAtIndex (GGS_guiSimpleAttributeListAST inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGlobalSimpleAttributeList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_guiSimpleAttributeListAST GGS_galgasGUIComponentListAST::getter_mGlobalSimpleAttributeListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGlobalSimpleAttributeList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_setMWithLexiqueListAtIndex (GGS_withLexiqueListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mWithLexiqueList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_withLexiqueListAST GGS_galgasGUIComponentListAST::getter_mWithLexiqueListAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mWithLexiqueList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_setMProjectIndexingDescriptorListAtIndex (GGS_projectIndexingDescriptorList inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectIndexingDescriptorList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_projectIndexingDescriptorList GGS_galgasGUIComponentListAST::getter_mProjectIndexingDescriptorListAtIndex (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectIndexingDescriptorList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @galgasGUIComponentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgasGUIComponentListAST::DownEnumerator_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element DownEnumerator_galgasGUIComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgasGUIComponentListAST::current_mGUIComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGUIComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_galgasGUIComponentListAST::current_mImportedOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedOptionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST DownEnumerator_galgasGUIComponentListAST::current_mGlobalSimpleAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST DownEnumerator_galgasGUIComponentListAST::current_mWithLexiqueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWithLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList DownEnumerator_galgasGUIComponentListAST::current_mProjectIndexingDescriptorList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgasGUIComponentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgasGUIComponentListAST::UpEnumerator_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element UpEnumerator_galgasGUIComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgasGUIComponentListAST::current_mGUIComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGUIComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_galgasGUIComponentListAST::current_mImportedOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedOptionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST UpEnumerator_galgasGUIComponentListAST::current_mGlobalSimpleAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST UpEnumerator_galgasGUIComponentListAST::current_mWithLexiqueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWithLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList UpEnumerator_galgasGUIComponentListAST::current_mProjectIndexingDescriptorList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
}




//--------------------------------------------------------------------------------------------------
//     @galgasGUIComponentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasGUIComponentListAST ("galgasGUIComponentListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasGUIComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasGUIComponentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasGUIComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasGUIComponentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST result ;
  const GGS_galgasGUIComponentListAST * p = (const GGS_galgasGUIComponentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasGUIComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasGUIComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext::GGS_guiAnalysisContext (void) :
mProperty_mImportedOptionComponentList (),
mProperty_mBoolOptionList (),
mProperty_mUIntOptionList (),
mProperty_mStringOptionList (),
mProperty_mNibAndClassList (),
mProperty_mExtensionMap (),
mProperty_mWithLexiqueList (),
mProperty_mBuildRunOption (),
mProperty_mProjectIndexingDescriptorList () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext::GGS_guiAnalysisContext (const GGS_guiAnalysisContext & inSource) :
mProperty_mImportedOptionComponentList (inSource.mProperty_mImportedOptionComponentList),
mProperty_mBoolOptionList (inSource.mProperty_mBoolOptionList),
mProperty_mUIntOptionList (inSource.mProperty_mUIntOptionList),
mProperty_mStringOptionList (inSource.mProperty_mStringOptionList),
mProperty_mNibAndClassList (inSource.mProperty_mNibAndClassList),
mProperty_mExtensionMap (inSource.mProperty_mExtensionMap),
mProperty_mWithLexiqueList (inSource.mProperty_mWithLexiqueList),
mProperty_mBuildRunOption (inSource.mProperty_mBuildRunOption),
mProperty_mProjectIndexingDescriptorList (inSource.mProperty_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext & GGS_guiAnalysisContext::operator = (const GGS_guiAnalysisContext & inSource) {
  mProperty_mImportedOptionComponentList = inSource.mProperty_mImportedOptionComponentList ;
  mProperty_mBoolOptionList = inSource.mProperty_mBoolOptionList ;
  mProperty_mUIntOptionList = inSource.mProperty_mUIntOptionList ;
  mProperty_mStringOptionList = inSource.mProperty_mStringOptionList ;
  mProperty_mNibAndClassList = inSource.mProperty_mNibAndClassList ;
  mProperty_mExtensionMap = inSource.mProperty_mExtensionMap ;
  mProperty_mWithLexiqueList = inSource.mProperty_mWithLexiqueList ;
  mProperty_mBuildRunOption = inSource.mProperty_mBuildRunOption ;
  mProperty_mProjectIndexingDescriptorList = inSource.mProperty_mProjectIndexingDescriptorList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiAnalysisContext GGS_guiAnalysisContext::init (Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiAnalysisContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mImportedOptionComponentList = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mBoolOptionList = GGS_guiCommandLineOptionList::init (inCompiler COMMA_HERE) ;
  mProperty_mUIntOptionList = GGS_guiCommandLineOptionList::init (inCompiler COMMA_HERE) ;
  mProperty_mStringOptionList = GGS_guiCommandLineOptionList::init (inCompiler COMMA_HERE) ;
  mProperty_mNibAndClassList = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mExtensionMap = GGS_extensionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mWithLexiqueList = GGS_importedLexiqueList::init (inCompiler COMMA_HERE) ;
  mProperty_mBuildRunOption = GGS_string::makeEmptyString () ;
  mProperty_mProjectIndexingDescriptorList = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext::GGS_guiAnalysisContext (const GGS_stringlist & inOperand0,
                                                const GGS_guiCommandLineOptionList & inOperand1,
                                                const GGS_guiCommandLineOptionList & inOperand2,
                                                const GGS_guiCommandLineOptionList & inOperand3,
                                                const GGS_stringlist & inOperand4,
                                                const GGS_extensionMap & inOperand5,
                                                const GGS_importedLexiqueList & inOperand6,
                                                const GGS_string & inOperand7,
                                                const GGS_projectIndexingDescriptorList & inOperand8) :
mProperty_mImportedOptionComponentList (inOperand0),
mProperty_mBoolOptionList (inOperand1),
mProperty_mUIntOptionList (inOperand2),
mProperty_mStringOptionList (inOperand3),
mProperty_mNibAndClassList (inOperand4),
mProperty_mExtensionMap (inOperand5),
mProperty_mWithLexiqueList (inOperand6),
mProperty_mBuildRunOption (inOperand7),
mProperty_mProjectIndexingDescriptorList (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiAnalysisContext::isValid (void) const {
  return mProperty_mImportedOptionComponentList.isValid () && mProperty_mBoolOptionList.isValid () && mProperty_mUIntOptionList.isValid () && mProperty_mStringOptionList.isValid () && mProperty_mNibAndClassList.isValid () && mProperty_mExtensionMap.isValid () && mProperty_mWithLexiqueList.isValid () && mProperty_mBuildRunOption.isValid () && mProperty_mProjectIndexingDescriptorList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiAnalysisContext::drop (void) {
  mProperty_mImportedOptionComponentList.drop () ;
  mProperty_mBoolOptionList.drop () ;
  mProperty_mUIntOptionList.drop () ;
  mProperty_mStringOptionList.drop () ;
  mProperty_mNibAndClassList.drop () ;
  mProperty_mExtensionMap.drop () ;
  mProperty_mWithLexiqueList.drop () ;
  mProperty_mBuildRunOption.drop () ;
  mProperty_mProjectIndexingDescriptorList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiAnalysisContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mImportedOptionComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoolOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUIntOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNibAndClassList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtensionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWithLexiqueList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildRunOption.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiAnalysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiAnalysisContext ("guiAnalysisContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext GGS_guiAnalysisContext::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_guiAnalysisContext result ;
  const GGS_guiAnalysisContext * p = (const GGS_guiAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @optionComponentMapForGeneration
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration::GGS_optionComponentMapForGeneration (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration::~ GGS_optionComponentMapForGeneration (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration::GGS_optionComponentMapForGeneration (const GGS_optionComponentMapForGeneration & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration & GGS_optionComponentMapForGeneration::operator = (const GGS_optionComponentMapForGeneration & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForGeneration::getter_hasKey (const GGS_string & inKey
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForGeneration::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                    const GGS_uint & inLevel
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_optionComponentMapForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_optionComponentMapForGeneration::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_optionComponentMapForGeneration::getter_locationForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_optionComponentMapForGeneration::getter_keyList (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForGeneration::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForGeneration_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::performInsert (const GGS_optionComponentMapForGeneration_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForGeneration_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>
GGS_optionComponentMapForGeneration::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_optionComponentMapForGeneration::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>>
GGS_optionComponentMapForGeneration::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_optionComponentMapForGeneration::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_ GGS_optionComponentMapForGeneration
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_optionComponentMapForGeneration_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_optionComponentMapForGeneration_2E_element_3F_::init_nil () ;
    }else{
      GGS_optionComponentMapForGeneration_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mGuiComponentContext = info->mProperty_mGuiComponentContext ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::class_func_mapWithMapToOverride (const GGS_optionComponentMapForGeneration & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForGeneration_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_optionComponentMapForGeneration result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::setter_insertKey (GGS_lstring inLKey,
                                                            GGS_guiAnalysisContext inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_optionComponentMapForGeneration_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext GGS_optionComponentMapForGeneration::getter_mGuiComponentContextForKey (const GGS_string & inKey,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_guiAnalysisContext result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mGuiComponentContext ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::setter_setMGuiComponentContextForKey (GGS_guiAnalysisContext inValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForGeneration_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mGuiComponentContext = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_optionComponentMapForGeneration_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mGuiComponentContext:") ;
    inArray (i COMMA_HERE)->mProperty_mGuiComponentContext.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> array = sortedInfoArray () ;
    GGS_optionComponentMapForGeneration_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForGeneration_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_optionComponentMapForGeneration_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @optionComponentMapForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_optionComponentMapForGeneration::DownEnumerator_optionComponentMapForGeneration (const GGS_optionComponentMapForGeneration & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element DownEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext DownEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGuiComponentContext ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @optionComponentMapForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_optionComponentMapForGeneration::UpEnumerator_optionComponentMapForGeneration (const GGS_optionComponentMapForGeneration & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element UpEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext UpEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGuiComponentContext ;
}


//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration result ;
  const GGS_optionComponentMapForGeneration * p = (const GGS_optionComponentMapForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalCallInstruction_2E_weak::objectCompare (const GGS_nonterminalCallInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction_2E_weak::unwrappedValue (void) const {
  GGS_nonterminalCallInstruction result ;
  if (isValid ()) {
    const cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_nonterminalCallInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction_2E_weak::bang_nonterminalCallInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalCallInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @nonterminalCallInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction_2E_weak ("nonterminalCallInstruction.weak",
                                                                                       & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalCallInstruction_2E_weak::staticTypeDescriptor (void) const {
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

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mNonterminalName,
                                                                                    const GGS_string & in_mLabelName,
                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_nonterminalInstructionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_nonterminalInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mLabelName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @nonterminalInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalInstructionForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_nonterminalInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_nonterminalInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration_2E_weak::bang_nonterminalInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @nonterminalInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2E_weak ("nonterminalInstructionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@actualInputParameterListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_actualInputParameterListAST : public CollectionElementPtr {
  public: GGS_actualInputParameterListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_actualInputParameterListAST (const GGS_lstring & in_mActualSelector,
                                                            const GGS_abstractInputParameter & in_mInputParameter
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_actualInputParameterListAST (const GGS_actualInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualInputParameterListAST::CollectionElementPtr_actualInputParameterListAST (const GGS_lstring & in_mActualSelector,
                                                                                                    const GGS_abstractInputParameter & in_mInputParameter
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mActualSelector, in_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualInputParameterListAST::CollectionElementPtr_actualInputParameterListAST (const GGS_actualInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_actualInputParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_actualInputParameterListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_actualInputParameterListAST (mObject.mProperty_mActualSelector, mObject.mProperty_mInputParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @actualInputParameterListAST
//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST::GGS_actualInputParameterListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST::GGS_actualInputParameterListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_actualInputParameterListAST * p = (CollectionElementPtr_actualInputParameterListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_actualInputParameterListAST) ;
    const GGS_actualInputParameterListAST_2E_element element (p->mObject.mProperty_mActualSelector, p->mObject.mProperty_mInputParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mActualSelector,
                                                                 const GGS_abstractInputParameter & in_mInputParameter
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_actualInputParameterListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_actualInputParameterListAST (in_mActualSelector, in_mInputParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualInputParameterListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_actualInputParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mActualSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActualSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInputParameter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInputParameter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualInputParameterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::plusPlusAssignOperation (const GGS_actualInputParameterListAST_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_abstractInputParameter & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_actualInputParameterListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_abstractInputParameter & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_abstractInputParameter inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_abstractInputParameter inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_abstractInputParameter & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mActualSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInputParameter ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_abstractInputParameter & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInputParameter ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_abstractInputParameter & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInputParameter ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::method_first (GGS_lstring & outOperand0,
                                                    GGS_abstractInputParameter & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInputParameter ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::method_last (GGS_lstring & outOperand0,
                                                   GGS_abstractInputParameter & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInputParameter ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::add_operation (const GGS_actualInputParameterListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::plusAssignOperation (const GGS_actualInputParameterListAST inList,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_setMActualSelectorAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActualSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_actualInputParameterListAST::getter_mActualSelectorAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActualSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_setMInputParameterAtIndex (GGS_abstractInputParameter inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInputParameter = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractInputParameter GGS_actualInputParameterListAST::getter_mInputParameterAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_abstractInputParameter result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInputParameter ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @actualInputParameterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualInputParameterListAST::DownEnumerator_actualInputParameterListAST (const GGS_actualInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element DownEnumerator_actualInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_actualInputParameterListAST::current_mActualSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter DownEnumerator_actualInputParameterListAST::current_mInputParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @actualInputParameterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualInputParameterListAST::UpEnumerator_actualInputParameterListAST (const GGS_actualInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element UpEnumerator_actualInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_actualInputParameterListAST::current_mActualSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter UpEnumerator_actualInputParameterListAST::current_mInputParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @actualInputParameterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualInputParameterListAST ("actualInputParameterListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualInputParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_actualInputParameterListAST result ;
  const GGS_actualInputParameterListAST * p = (const GGS_actualInputParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST_2E_weak::objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionAST result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @terminalCheckInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ("terminalCheckInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @abstractSyntaxInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ("abstractSyntaxInstructionForGrammarAnalysis.weak",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@terminalCheckAssignementList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_terminalCheckAssignementList : public CollectionElementPtr {
  public: GGS_terminalCheckAssignementList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                             const GGS_string & in_mTargetVarCppName,
                                                             const GGS_string & in_mSourceLexicalAttributeName
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalCheckAssignementList::CollectionElementPtr_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                                                                      const GGS_string & in_mTargetVarCppName,
                                                                                                      const GGS_string & in_mSourceLexicalAttributeName
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalCheckAssignementList::CollectionElementPtr_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mTargetVarCppName, inElement.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_terminalCheckAssignementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_terminalCheckAssignementList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_terminalCheckAssignementList (mObject.mProperty_mTypeName, mObject.mProperty_mTargetVarCppName, mObject.mProperty_mSourceLexicalAttributeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @terminalCheckAssignementList
//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_terminalCheckAssignementList * p = (CollectionElementPtr_terminalCheckAssignementList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_terminalCheckAssignementList) ;
    const GGS_terminalCheckAssignementList_2E_element element (p->mObject.mProperty_mTypeName, p->mObject.mProperty_mTargetVarCppName, p->mObject.mProperty_mSourceLexicalAttributeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_string & in_mTypeName,
                                                                  const GGS_string & in_mTargetVarCppName,
                                                                  const GGS_string & in_mSourceLexicalAttributeName
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_terminalCheckAssignementList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_terminalCheckAssignementList (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalCheckAssignementList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_terminalCheckAssignementList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetVarCppName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetVarCppName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceLexicalAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::plusPlusAssignOperation (const GGS_terminalCheckAssignementList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                             const GGS_string & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_terminalCheckAssignementList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_terminalCheckAssignementList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::addAssignOperation (const GGS_string & inOperand0,
                                                           const GGS_string & inOperand1,
                                                           const GGS_string & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  const GGS_terminalCheckAssignementList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_append (const GGS_string inOperand0,
                                                      const GGS_string inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_terminalCheckAssignementList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_insertAtIndex (const GGS_string inOperand0,
                                                             const GGS_string inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_terminalCheckAssignementList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_removeAtIndex (GGS_string & outOperand0,
                                                             GGS_string & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetVarCppName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mSourceLexicalAttributeName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popFirst (GGS_string & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetVarCppName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSourceLexicalAttributeName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popLast (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetVarCppName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSourceLexicalAttributeName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_first (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetVarCppName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSourceLexicalAttributeName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_last (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetVarCppName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSourceLexicalAttributeName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::add_operation (const GGS_terminalCheckAssignementList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::plusAssignOperation (const GGS_terminalCheckAssignementList inList,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTypeNameAtIndex (GGS_string inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_terminalCheckAssignementList::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTargetVarCppNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetVarCppName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_terminalCheckAssignementList::getter_mTargetVarCppNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetVarCppName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMSourceLexicalAttributeNameAtIndex (GGS_string inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceLexicalAttributeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_terminalCheckAssignementList::getter_mSourceLexicalAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceLexicalAttributeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalCheckAssignementList
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalCheckAssignementList::DownEnumerator_terminalCheckAssignementList (const GGS_terminalCheckAssignementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element DownEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceLexicalAttributeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalCheckAssignementList
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalCheckAssignementList::UpEnumerator_terminalCheckAssignementList (const GGS_terminalCheckAssignementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element UpEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceLexicalAttributeName ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalCheckAssignementList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ("terminalCheckAssignementList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckAssignementList::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_terminalCheckInstructionForGeneration_2E_weak::objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @terminalCheckInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ("terminalCheckInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@listOfSyntaxInstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_listOfSyntaxInstructionList : public CollectionElementPtr {
  public: GGS_listOfSyntaxInstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_listOfSyntaxInstructionList (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                            const GGS_location & in_mEndOf_5F_instructions
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSyntaxInstructionList::CollectionElementPtr_listOfSyntaxInstructionList (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                    const GGS_location & in_mEndOf_5F_instructions
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxInstructionList, in_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSyntaxInstructionList::CollectionElementPtr_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_listOfSyntaxInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_listOfSyntaxInstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_listOfSyntaxInstructionList (mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOf_5F_instructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList::GGS_listOfSyntaxInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList::GGS_listOfSyntaxInstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_listOfSyntaxInstructionList * p = (CollectionElementPtr_listOfSyntaxInstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_listOfSyntaxInstructionList) ;
    const GGS_listOfSyntaxInstructionList_2E_element element (p->mObject.mProperty_mSyntaxInstructionList, p->mObject.mProperty_mEndOf_5F_instructions) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                 const GGS_location & in_mEndOf_5F_instructions
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_listOfSyntaxInstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_listOfSyntaxInstructionList (in_mSyntaxInstructionList, in_mEndOf_5F_instructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_listOfSyntaxInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_listOfSyntaxInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOf_instructions:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOf_5F_instructions.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::plusPlusAssignOperation (const GGS_listOfSyntaxInstructionList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::class_func_listWithValue (const GGS_syntaxInstructionList & inOperand0,
                                                                                           const GGS_location & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element element (inOperand0, inOperand1) ;
  GGS_listOfSyntaxInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::addAssignOperation (const GGS_syntaxInstructionList & inOperand0,
                                                          const GGS_location & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_append (const GGS_syntaxInstructionList inOperand0,
                                                     const GGS_location inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_insertAtIndex (const GGS_syntaxInstructionList inOperand0,
                                                            const GGS_location inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_removeAtIndex (GGS_syntaxInstructionList & outOperand0,
                                                            GGS_location & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOf_5F_instructions ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_popFirst (GGS_syntaxInstructionList & outOperand0,
                                                       GGS_location & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOf_5F_instructions ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_popLast (GGS_syntaxInstructionList & outOperand0,
                                                      GGS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOf_5F_instructions ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::method_first (GGS_syntaxInstructionList & outOperand0,
                                                    GGS_location & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOf_5F_instructions ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::method_last (GGS_syntaxInstructionList & outOperand0,
                                                   GGS_location & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOf_5F_instructions ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::add_operation (const GGS_listOfSyntaxInstructionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::plusAssignOperation (const GGS_listOfSyntaxInstructionList inList,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionList inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_syntaxInstructionList GGS_listOfSyntaxInstructionList::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_setMEndOf_5F_instructionsAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOf_5F_instructions = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_listOfSyntaxInstructionList::getter_mEndOf_5F_instructionsAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOf_5F_instructions ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_listOfSyntaxInstructionList::DownEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element DownEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList DownEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOf_5F_instructions ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_listOfSyntaxInstructionList::UpEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element UpEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList UpEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOf_5F_instructions ;
}




//--------------------------------------------------------------------------------------------------
//     @listOfSyntaxInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ("listOfSyntaxInstructionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSyntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSyntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSyntaxInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList result ;
  const GGS_listOfSyntaxInstructionList * p = (const GGS_listOfSyntaxInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSyntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction_2E_weak::objectCompare (const GGS_selectInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::unwrappedValue (void) const {
  GGS_selectInstruction result ;
  if (isValid ()) {
    const cPtr_selectInstruction * p = (cPtr_selectInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::bang_selectInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @selectInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction_2E_weak ("selectInstruction.weak",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstruction_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@listOfSemanticInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_listOfSemanticInstructionListForGeneration : public CollectionElementPtr {
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                           const GGS_location & in_mEndOfInstructionList
                                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSemanticInstructionListForGeneration::CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                  const GGS_location & in_mEndOfInstructionList
                                                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSemanticInstructionListForGeneration::CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_listOfSemanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_listOfSemanticInstructionListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_listOfSemanticInstructionListForGeneration (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_listOfSemanticInstructionListForGeneration * p = (CollectionElementPtr_listOfSemanticInstructionListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_listOfSemanticInstructionListForGeneration) ;
    const GGS_listOfSemanticInstructionListForGeneration_2E_element element (p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                const GGS_location & in_mEndOfInstructionList
                                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_listOfSemanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_listOfSemanticInstructionListForGeneration (in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_listOfSemanticInstructionListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_listOfSemanticInstructionListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::plusPlusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::class_func_listWithValue (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                         const GGS_location & inOperand1
                                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element element (inOperand0, inOperand1) ;
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::addAssignOperation (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                         const GGS_location & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_append (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                    const GGS_location inOperand1,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_insertAtIndex (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                           const GGS_location inOperand1,
                                                                           const GGS_uint inInsertionIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_removeAtIndex (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                           GGS_location & outOperand1,
                                                                           const GGS_uint inRemoveIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_popFirst (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                      GGS_location & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_popLast (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                     GGS_location & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::method_first (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                   GGS_location & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::method_last (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                  GGS_location & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::add_operation (const GGS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::subList (const int32_t inStart,
                                                                                                        const int32_t inLength,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::plusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration inList,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_setMInstructionListAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_semanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_listOfSemanticInstructionListForGeneration::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_listOfSemanticInstructionListForGeneration::DownEnumerator_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element DownEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_listOfSemanticInstructionListForGeneration::UpEnumerator_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element UpEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @listOfSemanticInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ("listOfSemanticInstructionListForGeneration",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSemanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSemanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSemanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  const GGS_listOfSemanticInstructionListForGeneration * p = (const GGS_listOfSemanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSemanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration_2E_weak::objectCompare (const GGS_selectInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::bang_selectInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @selectInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ("selectInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@syntaxInstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syntaxInstructionList : public CollectionElementPtr {
  public: GGS_syntaxInstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionAST & in_mInstruction
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxInstructionList::CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionAST & in_mInstruction
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxInstructionList::CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syntaxInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syntaxInstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syntaxInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syntaxInstructionList
//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList::GGS_syntaxInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList::GGS_syntaxInstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syntaxInstructionList * p = (CollectionElementPtr_syntaxInstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syntaxInstructionList) ;
    const GGS_syntaxInstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_syntaxInstructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syntaxInstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syntaxInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syntaxInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::plusPlusAssignOperation (const GGS_syntaxInstructionList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::class_func_listWithValue (const GGS_syntaxInstructionAST & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element element (inOperand0) ;
  GGS_syntaxInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::addAssignOperation (const GGS_syntaxInstructionAST & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_append (const GGS_syntaxInstructionAST inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_insertAtIndex (const GGS_syntaxInstructionAST inOperand0,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_removeAtIndex (GGS_syntaxInstructionAST & outOperand0,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_popFirst (GGS_syntaxInstructionAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_popLast (GGS_syntaxInstructionAST & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::method_first (GGS_syntaxInstructionAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::method_last (GGS_syntaxInstructionAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::add_operation (const GGS_syntaxInstructionList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::plusAssignOperation (const GGS_syntaxInstructionList inList,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_setMInstructionAtIndex (GGS_syntaxInstructionAST inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_syntaxInstructionAST GGS_syntaxInstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxInstructionList::DownEnumerator_syntaxInstructionList (const GGS_syntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element DownEnumerator_syntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST DownEnumerator_syntaxInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxInstructionList::UpEnumerator_syntaxInstructionList (const GGS_syntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element UpEnumerator_syntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST UpEnumerator_syntaxInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionList ("syntaxInstructionList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionList result ;
  const GGS_syntaxInstructionList * p = (const GGS_syntaxInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

