#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeAppTargetList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GGS_XCodeAppTargetList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeAppTargetList (const GGS_string & in_mTargetRef,
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
  public: cCollectionElement_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GGS_string & in_mTargetRef,
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
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    const GGS_XCodeAppTargetList_2E_element element (p->mObject.mProperty_mTargetRef, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mProductFileReference, p->mObject.mProperty_mProductFileName, p->mObject.mProperty_mBuildPhaseRefList, p->mObject.mProperty_mBuildPhaseRef, p->mObject.mProperty_mBuildConfigurationListRef, p->mObject.mProperty_mBuildConfigurationSettingList, p->mObject.mProperty_mBuildConfigurationRef, p->mObject.mProperty_mFrameworksFileRefList, p->mObject.mProperty_mFrameworkBuildPhaseRef, p->mObject.mProperty_mDependentTargets, p->mObject.mProperty_mResourceBuildRef, p->mObject.mProperty_mResourceFileBuildRefs) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  cCollectionElement_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs COMMA_THERE)) ;
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

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_BuildFileList : public cCollectionElement {
  public: GGS_BuildFileList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_BuildFileList (const GGS_string & in_mFileReference,
                                            const GGS_string & in_mFileName,
                                            const GGS_string & in_mBuildReference
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GGS_string & in_mFileReference,
                                                                    const GGS_string & in_mFileName,
                                                                    const GGS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_BuildFileList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @BuildFileList
//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    const GGS_BuildFileList_2E_element element (p->mObject.mProperty_mFileReference, p->mObject.mProperty_mFileName, p->mObject.mProperty_mBuildReference) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_string & in_mFileReference,
                                                   const GGS_string & in_mFileName,
                                                   const GGS_string & in_mBuildReference
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference, in_mFileName, in_mBuildReference COMMA_THERE)) ;
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

GGS_BuildFileList GGS_BuildFileList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
//  Enum xcodeProject
//--------------------------------------------------------------------------------------------------

GGS_xcodeProject::GGS_xcodeProject (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_objcApp (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_objcApp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_swiftApp (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_swiftApp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_xcodeProject [4] = {
  "(not built)",
  "none",
  "objcApp",
  "swiftApp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isObjcApp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_objcApp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isSwiftApp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_swiftApp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_xcodeProject::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @xcodeProject: ") ;
  ioString.appendCString (gEnumNameArrayFor_xcodeProject [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xcodeProject::objectCompare (const GGS_xcodeProject & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @xcodeProject generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xcodeProject ("xcodeProject",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xcodeProject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xcodeProject ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xcodeProject::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xcodeProject (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  const GGS_xcodeProject * p = (const GGS_xcodeProject *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xcodeProject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xcodeProject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element::GGS_templateInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element::GGS_templateInstructionListAST_2E_element (const GGS_templateInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element & GGS_templateInstructionListAST_2E_element::operator = (const GGS_templateInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element GGS_templateInstructionListAST_2E_element::init_21_ (const GGS_templateInstructionAST & in_mInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element::GGS_templateInstructionListAST_2E_element (const GGS_templateInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element GGS_templateInstructionListAST_2E_element::class_func_new (const GGS_templateInstructionAST & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2E_element ("templateInstructionListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element GGS_templateInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionListAST_2E_element result ;
  const GGS_templateInstructionListAST_2E_element * p = (const GGS_templateInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element & GGS_templateInstructionIfBranchListAST_2E_element::operator = (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element GGS_templateInstructionIfBranchListAST_2E_element::init_21__21_ (const GGS_templateExpressionAST & in_mExpression,
                                                                                                                   const GGS_templateInstructionListAST & in_mInstructionList,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateExpressionAST & inOperand0,
                                                                                                      const GGS_templateInstructionListAST & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element GGS_templateInstructionIfBranchListAST_2E_element::class_func_new (const GGS_templateExpressionAST & in_mExpression,
                                                                                                                     const GGS_templateInstructionListAST & in_mInstructionList,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionIfBranchListAST_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionIfBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ("templateInstructionIfBranchListAST.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element GGS_templateInstructionIfBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST_2E_element result ;
  const GGS_templateInstructionIfBranchListAST_2E_element * p = (const GGS_templateInstructionIfBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit::GGS_templateInstructionForEnumerationAST_2E_implicit (void) :
mProperty_prefix (),
mProperty_remplacementRange () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit::GGS_templateInstructionForEnumerationAST_2E_implicit (const GGS_templateInstructionForEnumerationAST_2E_implicit & inSource) :
mProperty_prefix (inSource.mProperty_prefix),
mProperty_remplacementRange (inSource.mProperty_remplacementRange) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit & GGS_templateInstructionForEnumerationAST_2E_implicit::operator = (const GGS_templateInstructionForEnumerationAST_2E_implicit & inSource) {
  mProperty_prefix = inSource.mProperty_prefix ;
  mProperty_remplacementRange = inSource.mProperty_remplacementRange ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit GGS_templateInstructionForEnumerationAST_2E_implicit::init_21__21_ (const GGS_string & in_prefix,
                                                                                                                         const GGS_location & in_remplacementRange,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_prefix = in_prefix ;
  result.mProperty_remplacementRange = in_remplacementRange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit::GGS_templateInstructionForEnumerationAST_2E_implicit (const GGS_string & inOperand0,
                                                                                                            const GGS_location & inOperand1) :
mProperty_prefix (inOperand0),
mProperty_remplacementRange (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit GGS_templateInstructionForEnumerationAST_2E_implicit::class_func_new (const GGS_string & in_prefix,
                                                                                                                           const GGS_location & in_remplacementRange,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_prefix = in_prefix ;
  result.mProperty_remplacementRange = in_remplacementRange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_implicit::isValid (void) const {
  return mProperty_prefix.isValid () && mProperty_remplacementRange.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit::drop (void) {
  mProperty_prefix.drop () ;
  mProperty_remplacementRange.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionForEnumerationAST.implicit:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_prefix.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_remplacementRange.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForEnumerationAST.implicit generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit ("templateInstructionForEnumerationAST.implicit",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForEnumerationAST_2E_implicit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_implicit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_implicit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit GGS_templateInstructionForEnumerationAST_2E_implicit::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit result ;
  const GGS_templateInstructionForEnumerationAST_2E_implicit * p = (const GGS_templateInstructionForEnumerationAST_2E_implicit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_implicit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.implicit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @templateInstructionForEnumerationAST_2E_implicit_3F_
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ (const GGS_templateInstructionForEnumerationAST_2E_implicit & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::init_nil (void) {
  GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::isValid (void) const {
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

bool GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_templateInstructionForEnumerationAST_2E_implicit () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::description (String & ioString,
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
//     @templateInstructionForEnumerationAST.implicit? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit_3F_ ("templateInstructionForEnumerationAST.implicit?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ result ;
  const GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ * p = (const GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.implicit?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit::GGS_templateInstructionForEnumerationAST_2E_explicit (void) :
mProperty_enumeration (),
mProperty_endOfProperties () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit::GGS_templateInstructionForEnumerationAST_2E_explicit (const GGS_templateInstructionForEnumerationAST_2E_explicit & inSource) :
mProperty_enumeration (inSource.mProperty_enumeration),
mProperty_endOfProperties (inSource.mProperty_endOfProperties) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit & GGS_templateInstructionForEnumerationAST_2E_explicit::operator = (const GGS_templateInstructionForEnumerationAST_2E_explicit & inSource) {
  mProperty_enumeration = inSource.mProperty_enumeration ;
  mProperty_endOfProperties = inSource.mProperty_endOfProperties ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit GGS_templateInstructionForEnumerationAST_2E_explicit::init_21__21_ (const GGS_lstringlist & in_enumeration,
                                                                                                                         const GGS_location & in_endOfProperties,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumeration = in_enumeration ;
  result.mProperty_endOfProperties = in_endOfProperties ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit::GGS_templateInstructionForEnumerationAST_2E_explicit (const GGS_lstringlist & inOperand0,
                                                                                                            const GGS_location & inOperand1) :
mProperty_enumeration (inOperand0),
mProperty_endOfProperties (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit GGS_templateInstructionForEnumerationAST_2E_explicit::class_func_new (const GGS_lstringlist & in_enumeration,
                                                                                                                           const GGS_location & in_endOfProperties,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumeration = in_enumeration ;
  result.mProperty_endOfProperties = in_endOfProperties ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_explicit::isValid (void) const {
  return mProperty_enumeration.isValid () && mProperty_endOfProperties.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit::drop (void) {
  mProperty_enumeration.drop () ;
  mProperty_endOfProperties.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionForEnumerationAST.explicit:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_enumeration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfProperties.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForEnumerationAST.explicit generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit ("templateInstructionForEnumerationAST.explicit",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForEnumerationAST_2E_explicit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_explicit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_explicit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit GGS_templateInstructionForEnumerationAST_2E_explicit::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit result ;
  const GGS_templateInstructionForEnumerationAST_2E_explicit * p = (const GGS_templateInstructionForEnumerationAST_2E_explicit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_explicit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.explicit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @templateInstructionForEnumerationAST_2E_explicit_3F_
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ (const GGS_templateInstructionForEnumerationAST_2E_explicit & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::init_nil (void) {
  GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::isValid (void) const {
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

bool GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_templateInstructionForEnumerationAST_2E_explicit () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::description (String & ioString,
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
//     @templateInstructionForEnumerationAST.explicit? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit_3F_ ("templateInstructionForEnumerationAST.explicit?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ result ;
  const GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ * p = (const GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.explicit?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (void) :
mProperty_constantList (),
mProperty_associatedValuesExtraction (),
mProperty_instructionList (),
mProperty_endOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) :
mProperty_constantList (inSource.mProperty_constantList),
mProperty_associatedValuesExtraction (inSource.mProperty_associatedValuesExtraction),
mProperty_instructionList (inSource.mProperty_instructionList),
mProperty_endOfBranch (inSource.mProperty_endOfBranch) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element & GGS_templateInstructionSwitchBranchListAST_2E_element::operator = (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) {
  mProperty_constantList = inSource.mProperty_constantList ;
  mProperty_associatedValuesExtraction = inSource.mProperty_associatedValuesExtraction ;
  mProperty_instructionList = inSource.mProperty_instructionList ;
  mProperty_endOfBranch = inSource.mProperty_endOfBranch ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_constantList,
                                                                                                                                   const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                                                                                   const GGS_templateInstructionListAST & in_instructionList,
                                                                                                                                   const GGS_location & in_endOfBranch,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantList = in_constantList ;
  result.mProperty_associatedValuesExtraction = in_associatedValuesExtraction ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfBranch = in_endOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                                              const GGS_switchExtractedValuesListAST & inOperand1,
                                                                                                              const GGS_templateInstructionListAST & inOperand2,
                                                                                                              const GGS_location & inOperand3) :
mProperty_constantList (inOperand0),
mProperty_associatedValuesExtraction (inOperand1),
mProperty_instructionList (inOperand2),
mProperty_endOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_constantList,
                                                                                                                             const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                                                                             const GGS_templateInstructionListAST & in_instructionList,
                                                                                                                             const GGS_location & in_endOfBranch,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantList = in_constantList ;
  result.mProperty_associatedValuesExtraction = in_associatedValuesExtraction ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfBranch = in_endOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionSwitchBranchListAST_2E_element::isValid (void) const {
  return mProperty_constantList.isValid () && mProperty_associatedValuesExtraction.isValid () && mProperty_instructionList.isValid () && mProperty_endOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::drop (void) {
  mProperty_constantList.drop () ;
  mProperty_associatedValuesExtraction.drop () ;
  mProperty_instructionList.drop () ;
  mProperty_endOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionSwitchBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_associatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_instructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2E_element ("templateInstructionSwitchBranchListAST.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionSwitchBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  const GGS_templateInstructionSwitchBranchListAST_2E_element * p = (const GGS_templateInstructionSwitchBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element::GGS_templateInstructionSwitchBranchListForGeneration_2E_element (void) :
mProperty_mConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element::GGS_templateInstructionSwitchBranchListForGeneration_2E_element (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inSource) :
mProperty_mConstantList (inSource.mProperty_mConstantList),
mProperty_mExtractedAssociatedValuesForGeneration (inSource.mProperty_mExtractedAssociatedValuesForGeneration),
mProperty_mEndOfBranchLocationIndex (inSource.mProperty_mEndOfBranchLocationIndex),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element & GGS_templateInstructionSwitchBranchListForGeneration_2E_element::operator = (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inSource) {
  mProperty_mConstantList = inSource.mProperty_mConstantList ;
  mProperty_mExtractedAssociatedValuesForGeneration = inSource.mProperty_mExtractedAssociatedValuesForGeneration ;
  mProperty_mEndOfBranchLocationIndex = inSource.mProperty_mEndOfBranchLocationIndex ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element GGS_templateInstructionSwitchBranchListForGeneration_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                                                                                                       const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                                       const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                                       const GGS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element::GGS_templateInstructionSwitchBranchListForGeneration_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                                                                  const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                                                  const GGS_uint & inOperand2,
                                                                                                                                  const GGS_templateInstructionListForGeneration & inOperand3) :
mProperty_mConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element GGS_templateInstructionSwitchBranchListForGeneration_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                                                                                                 const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                                 const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                                 const GGS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionSwitchBranchListForGeneration_2E_element::isValid (void) const {
  return mProperty_mConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration_2E_element::drop (void) {
  mProperty_mConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration_2E_element::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionSwitchBranchListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchBranchListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2E_element ("templateInstructionSwitchBranchListForGeneration.element",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionSwitchBranchListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchBranchListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchBranchListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element GGS_templateInstructionSwitchBranchListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration_2E_element result ;
  const GGS_templateInstructionSwitchBranchListForGeneration_2E_element * p = (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchBranchListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element & GGS_lexicalInstructionListAST_2E_element::operator = (const GGS_lexicalInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::init_21_ (const GGS_lexicalInstructionAST & in_mInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::class_func_new (const GGS_lexicalInstructionAST & in_mInstruction,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2E_element ("lexicalInstructionListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  const GGS_lexicalInstructionListAST_2E_element * p = (const GGS_lexicalInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (void) :
mProperty_mLexicalRule () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (const GGS_lexicalRuleListAST_2E_element & inSource) :
mProperty_mLexicalRule (inSource.mProperty_mLexicalRule) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element & GGS_lexicalRuleListAST_2E_element::operator = (const GGS_lexicalRuleListAST_2E_element & inSource) {
  mProperty_mLexicalRule = inSource.mProperty_mLexicalRule ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::init_21_ (const GGS_abstractLexicalRuleAST & in_mLexicalRule,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRule = in_mLexicalRule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (const GGS_abstractLexicalRuleAST & inOperand0) :
mProperty_mLexicalRule (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::class_func_new (const GGS_abstractLexicalRuleAST & in_mLexicalRule,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRule = in_mLexicalRule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRuleListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalRule.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::drop (void) {
  mProperty_mLexicalRule.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRuleListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRule.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRuleListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2E_element ("lexicalRuleListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRuleListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRuleListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRuleListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  const GGS_lexicalRuleListAST_2E_element * p = (const GGS_lexicalRuleListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRuleListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (void) :
mProperty_mWhileExpression (),
mProperty_mWhileInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalWhileBranchListAST_2E_element & inSource) :
mProperty_mWhileExpression (inSource.mProperty_mWhileExpression),
mProperty_mWhileInstructionList (inSource.mProperty_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element & GGS_lexicalWhileBranchListAST_2E_element::operator = (const GGS_lexicalWhileBranchListAST_2E_element & inSource) {
  mProperty_mWhileExpression = inSource.mProperty_mWhileExpression ;
  mProperty_mWhileInstructionList = inSource.mProperty_mWhileInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::init_21__21_ (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                 const GGS_lexicalInstructionListAST & in_mWhileInstructionList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalExpressionAST & inOperand0,
                                                                                    const GGS_lexicalInstructionListAST & inOperand1) :
mProperty_mWhileExpression (inOperand0),
mProperty_mWhileInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::class_func_new (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                   const GGS_lexicalInstructionListAST & in_mWhileInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalWhileBranchListAST_2E_element::isValid (void) const {
  return mProperty_mWhileExpression.isValid () && mProperty_mWhileInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::drop (void) {
  mProperty_mWhileExpression.drop () ;
  mProperty_mWhileInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalWhileBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalWhileBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2E_element ("lexicalWhileBranchListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalWhileBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWhileBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWhileBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  const GGS_lexicalWhileBranchListAST_2E_element * p = (const GGS_lexicalWhileBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWhileBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (void) :
mProperty_mSelectExpression (),
mProperty_mSelectInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalSelectBranchListAST_2E_element & inSource) :
mProperty_mSelectExpression (inSource.mProperty_mSelectExpression),
mProperty_mSelectInstructionList (inSource.mProperty_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element & GGS_lexicalSelectBranchListAST_2E_element::operator = (const GGS_lexicalSelectBranchListAST_2E_element & inSource) {
  mProperty_mSelectExpression = inSource.mProperty_mSelectExpression ;
  mProperty_mSelectInstructionList = inSource.mProperty_mSelectInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::init_21__21_ (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                   const GGS_lexicalInstructionListAST & in_mSelectInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalExpressionAST & inOperand0,
                                                                                      const GGS_lexicalInstructionListAST & inOperand1) :
mProperty_mSelectExpression (inOperand0),
mProperty_mSelectInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::class_func_new (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                     const GGS_lexicalInstructionListAST & in_mSelectInstructionList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalSelectBranchListAST_2E_element::isValid (void) const {
  return mProperty_mSelectExpression.isValid () && mProperty_mSelectInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::drop (void) {
  mProperty_mSelectExpression.drop () ;
  mProperty_mSelectInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSelectBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2E_element ("lexicalSelectBranchListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  const GGS_lexicalSelectBranchListAST_2E_element * p = (const GGS_lexicalSelectBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (void) :
mProperty_mLexicalActualInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) :
mProperty_mLexicalActualInputArgument (inSource.mProperty_mLexicalActualInputArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element & GGS_lexicalFunctionCallActualArgumentListAST_2E_element::operator = (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) {
  mProperty_mLexicalActualInputArgument = inSource.mProperty_mLexicalActualInputArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::init_21_ (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalActualInputArgument = in_mLexicalActualInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0) :
mProperty_mLexicalActualInputArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::class_func_new (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalActualInputArgument = in_mLexicalActualInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionCallActualArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalActualInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::drop (void) {
  mProperty_mLexicalActualInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionCallActualArgumentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalActualInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionCallActualArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2E_element ("lexicalFunctionCallActualArgumentListAST.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionCallActualArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionCallActualArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionCallActualArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  const GGS_lexicalFunctionCallActualArgumentListAST_2E_element * p = (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionCallActualArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (void) :
mProperty_mLength (),
mProperty_mName (),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (const GGS_tokenSortedlist_2E_element & inSource) :
mProperty_mLength (inSource.mProperty_mLength),
mProperty_mName (inSource.mProperty_mName),
mProperty_mTerminalName (inSource.mProperty_mTerminalName) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element & GGS_tokenSortedlist_2E_element::operator = (const GGS_tokenSortedlist_2E_element & inSource) {
  mProperty_mLength = inSource.mProperty_mLength ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mTerminalName = inSource.mProperty_mTerminalName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::init_21__21__21_ (const GGS_uint & in_mLength,
                                                                                 const GGS_string & in_mName,
                                                                                 const GGS_string & in_mTerminalName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLength = in_mLength ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (const GGS_uint & inOperand0,
                                                                const GGS_string & inOperand1,
                                                                const GGS_string & inOperand2) :
mProperty_mLength (inOperand0),
mProperty_mName (inOperand1),
mProperty_mTerminalName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::class_func_new (const GGS_uint & in_mLength,
                                                                               const GGS_string & in_mName,
                                                                               const GGS_string & in_mTerminalName,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLength = in_mLength ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_tokenSortedlist_2E_element::isValid (void) const {
  return mProperty_mLength.isValid () && mProperty_mName.isValid () && mProperty_mTerminalName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::drop (void) {
  mProperty_mLength.drop () ;
  mProperty_mName.drop () ;
  mProperty_mTerminalName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tokenSortedlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLength.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @tokenSortedlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ("tokenSortedlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tokenSortedlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tokenSortedlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tokenSortedlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  const GGS_tokenSortedlist_2E_element * p = (const GGS_tokenSortedlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tokenSortedlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (void) :
mProperty_mLexicalFormalArgumentMode (),
mProperty_mLexicalFormalArgumentType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) :
mProperty_mLexicalFormalArgumentMode (inSource.mProperty_mLexicalFormalArgumentMode),
mProperty_mLexicalFormalArgumentType (inSource.mProperty_mLexicalFormalArgumentType),
mProperty_mArgumentNameForComment (inSource.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element & GGS_lexicalRoutineFormalArgumentList_2E_element::operator = (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) {
  mProperty_mLexicalFormalArgumentMode = inSource.mProperty_mLexicalFormalArgumentMode ;
  mProperty_mLexicalFormalArgumentType = inSource.mProperty_mLexicalFormalArgumentType ;
  mProperty_mArgumentNameForComment = inSource.mProperty_mArgumentNameForComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                   const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                   const GGS_string & in_mArgumentNameForComment,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalArgumentModeAST & inOperand0,
                                                                                                  const GGS_lexicalTypeEnum & inOperand1,
                                                                                                  const GGS_string & inOperand2) :
mProperty_mLexicalFormalArgumentMode (inOperand0),
mProperty_mLexicalFormalArgumentType (inOperand1),
mProperty_mArgumentNameForComment (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::class_func_new (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                 const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                 const GGS_string & in_mArgumentNameForComment,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineFormalArgumentList_2E_element::isValid (void) const {
  return mProperty_mLexicalFormalArgumentMode.isValid () && mProperty_mLexicalFormalArgumentType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::drop (void) {
  mProperty_mLexicalFormalArgumentMode.drop () ;
  mProperty_mLexicalFormalArgumentType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineFormalArgumentList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineFormalArgumentList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ("lexicalRoutineFormalArgumentList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineFormalArgumentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineFormalArgumentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineFormalArgumentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  const GGS_lexicalRoutineFormalArgumentList_2E_element * p = (const GGS_lexicalRoutineFormalArgumentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineFormalArgumentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (void) :
mProperty_mLexicalType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) :
mProperty_mLexicalType (inSource.mProperty_mLexicalType),
mProperty_mArgumentNameForComment (inSource.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element & GGS_lexicalFunctionFormalArgumentList_2E_element::operator = (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) {
  mProperty_mLexicalType = inSource.mProperty_mLexicalType ;
  mProperty_mArgumentNameForComment = inSource.mProperty_mArgumentNameForComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::init_21__21_ (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                 const GGS_string & in_mArgumentNameForComment,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalTypeEnum & inOperand0,
                                                                                                    const GGS_string & inOperand1) :
mProperty_mLexicalType (inOperand0),
mProperty_mArgumentNameForComment (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::class_func_new (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                   const GGS_string & in_mArgumentNameForComment,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionFormalArgumentList_2E_element::isValid (void) const {
  return mProperty_mLexicalType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::drop (void) {
  mProperty_mLexicalType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionFormalArgumentList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionFormalArgumentList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ("lexicalFunctionFormalArgumentList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionFormalArgumentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionFormalArgumentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionFormalArgumentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  const GGS_lexicalFunctionFormalArgumentList_2E_element * p = (const GGS_lexicalFunctionFormalArgumentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionFormalArgumentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (void) :
mProperty_mLexicalRoutineActualArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) :
mProperty_mLexicalRoutineActualArgument (inSource.mProperty_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element & GGS_lexicalRoutineCallActualArgumentListAST_2E_element::operator = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) {
  mProperty_mLexicalRoutineActualArgument = inSource.mProperty_mLexicalRoutineActualArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::init_21_ (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRoutineActualArgument = in_mLexicalRoutineActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand0) :
mProperty_mLexicalRoutineActualArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::class_func_new (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRoutineActualArgument = in_mLexicalRoutineActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineCallActualArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalRoutineActualArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::drop (void) {
  mProperty_mLexicalRoutineActualArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineCallActualArgumentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallActualArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ("lexicalRoutineCallActualArgumentListAST.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallActualArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallActualArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallActualArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  const GGS_lexicalRoutineCallActualArgumentListAST_2E_element * p = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallActualArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (void) :
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_commandLineOptionSortedList_2E_element & inSource) :
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element & GGS_commandLineOptionSortedList_2E_element::operator = (const GGS_commandLineOptionSortedList_2E_element & inSource) {
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::init_21__21__21__21__21_ (const GGS_string & in_mOptionIdentifier,
                                                                                                                 const GGS_char & in_mOptionChar,
                                                                                                                 const GGS_string & in_mOptionString,
                                                                                                                 const GGS_string & in_mComment,
                                                                                                                 const GGS_string & in_mDefaultValue,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_string & inOperand0,
                                                                                        const GGS_char & inOperand1,
                                                                                        const GGS_string & inOperand2,
                                                                                        const GGS_string & inOperand3,
                                                                                        const GGS_string & inOperand4) :
mProperty_mOptionIdentifier (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::class_func_new (const GGS_string & in_mOptionIdentifier,
                                                                                                       const GGS_char & in_mOptionChar,
                                                                                                       const GGS_string & in_mOptionString,
                                                                                                       const GGS_string & in_mComment,
                                                                                                       const GGS_string & in_mDefaultValue,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionSortedList_2E_element::isValid (void) const {
  return mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::drop (void) {
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionSortedList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionSortedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ("commandLineOptionSortedList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionSortedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionSortedList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionSortedList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  const GGS_commandLineOptionSortedList_2E_element * p = (const GGS_commandLineOptionSortedList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionSortedList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionSortedList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (void) :
mProperty_mLeadingCharacterStrippedCount (),
mProperty_mTerminalList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (const GGS_guiLabelListAST_2E_element & inSource) :
mProperty_mLeadingCharacterStrippedCount (inSource.mProperty_mLeadingCharacterStrippedCount),
mProperty_mTerminalList (inSource.mProperty_mTerminalList),
mProperty_mLocation (inSource.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element & GGS_guiLabelListAST_2E_element::operator = (const GGS_guiLabelListAST_2E_element & inSource) {
  mProperty_mLeadingCharacterStrippedCount = inSource.mProperty_mLeadingCharacterStrippedCount ;
  mProperty_mTerminalList = inSource.mProperty_mTerminalList ;
  mProperty_mLocation = inSource.mProperty_mLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::init_21__21__21_ (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                                 const GGS_terminalLabelListAST & in_mTerminalList,
                                                                                 const GGS_location & in_mLocation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeadingCharacterStrippedCount = in_mLeadingCharacterStrippedCount ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (const GGS_uint & inOperand0,
                                                                const GGS_terminalLabelListAST & inOperand1,
                                                                const GGS_location & inOperand2) :
mProperty_mLeadingCharacterStrippedCount (inOperand0),
mProperty_mTerminalList (inOperand1),
mProperty_mLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::class_func_new (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                               const GGS_terminalLabelListAST & in_mTerminalList,
                                                                               const GGS_location & in_mLocation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeadingCharacterStrippedCount = in_mLeadingCharacterStrippedCount ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiLabelListAST_2E_element::isValid (void) const {
  return mProperty_mLeadingCharacterStrippedCount.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::drop (void) {
  mProperty_mLeadingCharacterStrippedCount.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiLabelListAST_2E_element ("guiLabelListAST.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  const GGS_guiLabelListAST_2E_element * p = (const GGS_guiLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (void) :
mProperty_mOptionComponent (),
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (const GGS_guiCommandLineOptionList_2E_element & inSource) :
mProperty_mOptionComponent (inSource.mProperty_mOptionComponent),
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element & GGS_guiCommandLineOptionList_2E_element::operator = (const GGS_guiCommandLineOptionList_2E_element & inSource) {
  mProperty_mOptionComponent = inSource.mProperty_mOptionComponent ;
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::init_21__21__21__21__21_ (const GGS_string & in_mOptionComponent,
                                                                                                           const GGS_string & in_mOptionIdentifier,
                                                                                                           const GGS_char & in_mOptionChar,
                                                                                                           const GGS_string & in_mOptionString,
                                                                                                           const GGS_string & in_mComment,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionComponent = in_mOptionComponent ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (const GGS_string & inOperand0,
                                                                                  const GGS_string & inOperand1,
                                                                                  const GGS_char & inOperand2,
                                                                                  const GGS_string & inOperand3,
                                                                                  const GGS_string & inOperand4) :
mProperty_mOptionComponent (inOperand0),
mProperty_mOptionIdentifier (inOperand1),
mProperty_mOptionChar (inOperand2),
mProperty_mOptionString (inOperand3),
mProperty_mComment (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::class_func_new (const GGS_string & in_mOptionComponent,
                                                                                                 const GGS_string & in_mOptionIdentifier,
                                                                                                 const GGS_char & in_mOptionChar,
                                                                                                 const GGS_string & in_mOptionString,
                                                                                                 const GGS_string & in_mComment,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionComponent = in_mOptionComponent ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiCommandLineOptionList_2E_element::isValid (void) const {
  return mProperty_mOptionComponent.isValid () && mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::drop (void) {
  mProperty_mOptionComponent.drop () ;
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiCommandLineOptionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionComponent.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiCommandLineOptionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList_2E_element ("guiCommandLineOptionList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCommandLineOptionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCommandLineOptionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCommandLineOptionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  const GGS_guiCommandLineOptionList_2E_element * p = (const GGS_guiCommandLineOptionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCommandLineOptionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (void) :
mProperty_mKey (),
mProperty_mContents () {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (const GGS_textMacroList_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mContents (inSource.mProperty_mContents) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element & GGS_textMacroList_2E_element::operator = (const GGS_textMacroList_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mContents = inSource.mProperty_mContents ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::init_21__21_ (const GGS_string & in_mKey,
                                                                         const GGS_string & in_mContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mContents = in_mContents ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mContents (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::class_func_new (const GGS_string & in_mKey,
                                                                           const GGS_string & in_mContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mContents = in_mContents ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_textMacroList_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mContents.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mContents.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @textMacroList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mContents.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @textMacroList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_textMacroList_2E_element ("textMacroList.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_textMacroList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_textMacroList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_textMacroList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  const GGS_textMacroList_2E_element * p = (const GGS_textMacroList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_textMacroList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (void) :
mProperty_mLexiqueClassName (),
mProperty_mIndex (),
mProperty_mBlockComment (),
mProperty_mTitle (),
mProperty_mTextMacroList (),
mProperty_mLabels (),
mProperty_mLexicalStyleList () {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (const GGS_importedLexiqueList_2E_element & inSource) :
mProperty_mLexiqueClassName (inSource.mProperty_mLexiqueClassName),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mBlockComment (inSource.mProperty_mBlockComment),
mProperty_mTitle (inSource.mProperty_mTitle),
mProperty_mTextMacroList (inSource.mProperty_mTextMacroList),
mProperty_mLabels (inSource.mProperty_mLabels),
mProperty_mLexicalStyleList (inSource.mProperty_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element & GGS_importedLexiqueList_2E_element::operator = (const GGS_importedLexiqueList_2E_element & inSource) {
  mProperty_mLexiqueClassName = inSource.mProperty_mLexiqueClassName ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mBlockComment = inSource.mProperty_mBlockComment ;
  mProperty_mTitle = inSource.mProperty_mTitle ;
  mProperty_mTextMacroList = inSource.mProperty_mTextMacroList ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  mProperty_mLexicalStyleList = inSource.mProperty_mLexicalStyleList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_string & in_mLexiqueClassName,
                                                                                                         const GGS_uint & in_mIndex,
                                                                                                         const GGS_string & in_mBlockComment,
                                                                                                         const GGS_string & in_mTitle,
                                                                                                         const GGS_textMacroList & in_mTextMacroList,
                                                                                                         const GGS_guiLabelListAST & in_mLabels,
                                                                                                         const GGS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueClassName = in_mLexiqueClassName ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBlockComment = in_mBlockComment ;
  result.mProperty_mTitle = in_mTitle ;
  result.mProperty_mTextMacroList = in_mTextMacroList ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mLexicalStyleList = in_mLexicalStyleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_uint & inOperand1,
                                                                        const GGS_string & inOperand2,
                                                                        const GGS_string & inOperand3,
                                                                        const GGS_textMacroList & inOperand4,
                                                                        const GGS_guiLabelListAST & inOperand5,
                                                                        const GGS_lexicalStyleListAST & inOperand6) :
mProperty_mLexiqueClassName (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBlockComment (inOperand2),
mProperty_mTitle (inOperand3),
mProperty_mTextMacroList (inOperand4),
mProperty_mLabels (inOperand5),
mProperty_mLexicalStyleList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::class_func_new (const GGS_string & in_mLexiqueClassName,
                                                                                       const GGS_uint & in_mIndex,
                                                                                       const GGS_string & in_mBlockComment,
                                                                                       const GGS_string & in_mTitle,
                                                                                       const GGS_textMacroList & in_mTextMacroList,
                                                                                       const GGS_guiLabelListAST & in_mLabels,
                                                                                       const GGS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueClassName = in_mLexiqueClassName ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBlockComment = in_mBlockComment ;
  result.mProperty_mTitle = in_mTitle ;
  result.mProperty_mTextMacroList = in_mTextMacroList ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mLexicalStyleList = in_mLexicalStyleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_importedLexiqueList_2E_element::isValid (void) const {
  return mProperty_mLexiqueClassName.isValid () && mProperty_mIndex.isValid () && mProperty_mBlockComment.isValid () && mProperty_mTitle.isValid () && mProperty_mTextMacroList.isValid () && mProperty_mLabels.isValid () && mProperty_mLexicalStyleList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::drop (void) {
  mProperty_mLexiqueClassName.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBlockComment.drop () ;
  mProperty_mTitle.drop () ;
  mProperty_mTextMacroList.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mLexicalStyleList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @importedLexiqueList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueClassName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTitle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTextMacroList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @importedLexiqueList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_importedLexiqueList_2E_element ("importedLexiqueList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_importedLexiqueList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_importedLexiqueList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_importedLexiqueList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  const GGS_importedLexiqueList_2E_element * p = (const GGS_importedLexiqueList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_importedLexiqueList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (void) :
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) :
mProperty_expression (inSource.mProperty_expression) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some & GGS_propertyInCollectionInitializationAST_2E_some::operator = (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) {
  mProperty_expression = inSource.mProperty_expression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some GGS_propertyInCollectionInitializationAST_2E_some::init_21_ (const GGS_semanticExpressionAST & in_expression,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (const GGS_semanticExpressionAST & inOperand0) :
mProperty_expression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some GGS_propertyInCollectionInitializationAST_2E_some::class_func_new (const GGS_semanticExpressionAST & in_expression,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST_2E_some::objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionInitializationAST_2E_some::isValid (void) const {
  return mProperty_expression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::drop (void) {
  mProperty_expression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyInCollectionInitializationAST.some:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionInitializationAST.some generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ("propertyInCollectionInitializationAST.some",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionInitializationAST_2E_some::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyInCollectionInitializationAST_2E_some::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyInCollectionInitializationAST_2E_some (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some GGS_propertyInCollectionInitializationAST_2E_some::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some result ;
  const GGS_propertyInCollectionInitializationAST_2E_some * p = (const GGS_propertyInCollectionInitializationAST_2E_some *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyInCollectionInitializationAST_2E_some *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST.some", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyInCollectionInitializationAST_2E_some_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_::GGS_propertyInCollectionInitializationAST_2E_some_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_::GGS_propertyInCollectionInitializationAST_2E_some_3F_ (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST_2E_some_3F_::init_nil (void) {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionInitializationAST_2E_some_3F_::isValid (void) const {
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

bool GGS_propertyInCollectionInitializationAST_2E_some_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyInCollectionInitializationAST_2E_some () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST_2E_some_3F_::objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some_3F_ & inOperand) const {
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

void GGS_propertyInCollectionInitializationAST_2E_some_3F_::description (String & ioString,
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
//     @propertyInCollectionInitializationAST.some? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some_3F_ ("propertyInCollectionInitializationAST.some?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionInitializationAST_2E_some_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyInCollectionInitializationAST_2E_some_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyInCollectionInitializationAST_2E_some_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST_2E_some_3F_::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  const GGS_propertyInCollectionInitializationAST_2E_some_3F_ * p = (const GGS_propertyInCollectionInitializationAST_2E_some_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyInCollectionInitializationAST_2E_some_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST.some?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element::GGS_enumConstantListForGeneration_2E_element (void) :
mProperty_name (),
mProperty_associatedValueTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element::GGS_enumConstantListForGeneration_2E_element (const GGS_enumConstantListForGeneration_2E_element & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_associatedValueTypeList (inSource.mProperty_associatedValueTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element & GGS_enumConstantListForGeneration_2E_element::operator = (const GGS_enumConstantListForGeneration_2E_element & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_associatedValueTypeList = inSource.mProperty_associatedValueTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element GGS_enumConstantListForGeneration_2E_element::init_21__21_ (const GGS_string & in_name,
                                                                                                         const GGS_associatedValueDescriptorList & in_associatedValueTypeList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_associatedValueTypeList = in_associatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element::GGS_enumConstantListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                            const GGS_associatedValueDescriptorList & inOperand1) :
mProperty_name (inOperand0),
mProperty_associatedValueTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element GGS_enumConstantListForGeneration_2E_element::class_func_new (const GGS_string & in_name,
                                                                                                           const GGS_associatedValueDescriptorList & in_associatedValueTypeList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_associatedValueTypeList = in_associatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantListForGeneration_2E_element::isValid (void) const {
  return mProperty_name.isValid () && mProperty_associatedValueTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantListForGeneration_2E_element::drop (void) {
  mProperty_name.drop () ;
  mProperty_associatedValueTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantListForGeneration_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_associatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumConstantListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2E_element ("enumConstantListForGeneration.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstantListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element GGS_enumConstantListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_enumConstantListForGeneration_2E_element result ;
  const GGS_enumConstantListForGeneration_2E_element * p = (const GGS_enumConstantListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element::GGS_externTypeConstructorList_2E_element (void) :
mProperty_mParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element::GGS_externTypeConstructorList_2E_element (const GGS_externTypeConstructorList_2E_element & inSource) :
mProperty_mParameterList (inSource.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element & GGS_externTypeConstructorList_2E_element::operator = (const GGS_externTypeConstructorList_2E_element & inSource) {
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element GGS_externTypeConstructorList_2E_element::init_21_ (const GGS_typeNameFormalParameterNameList & in_mParameterList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeConstructorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element::GGS_externTypeConstructorList_2E_element (const GGS_typeNameFormalParameterNameList & inOperand0) :
mProperty_mParameterList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element GGS_externTypeConstructorList_2E_element::class_func_new (const GGS_typeNameFormalParameterNameList & in_mParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeConstructorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externTypeConstructorList_2E_element::isValid (void) const {
  return mProperty_mParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList_2E_element::drop (void) {
  mProperty_mParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externTypeConstructorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeConstructorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeConstructorList_2E_element ("externTypeConstructorList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeConstructorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeConstructorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeConstructorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element GGS_externTypeConstructorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externTypeConstructorList_2E_element result ;
  const GGS_externTypeConstructorList_2E_element * p = (const GGS_externTypeConstructorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeConstructorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element::GGS_insertOrReplaceDeclarationListAST_2E_element (void) :
mProperty_mInsertOrReplaceDeclarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element::GGS_insertOrReplaceDeclarationListAST_2E_element (const GGS_insertOrReplaceDeclarationListAST_2E_element & inSource) :
mProperty_mInsertOrReplaceDeclarationLocation (inSource.mProperty_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element & GGS_insertOrReplaceDeclarationListAST_2E_element::operator = (const GGS_insertOrReplaceDeclarationListAST_2E_element & inSource) {
  mProperty_mInsertOrReplaceDeclarationLocation = inSource.mProperty_mInsertOrReplaceDeclarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element GGS_insertOrReplaceDeclarationListAST_2E_element::init_21_ (const GGS_location & in_mInsertOrReplaceDeclarationLocation,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertOrReplaceDeclarationLocation = in_mInsertOrReplaceDeclarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element::GGS_insertOrReplaceDeclarationListAST_2E_element (const GGS_location & inOperand0) :
mProperty_mInsertOrReplaceDeclarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element GGS_insertOrReplaceDeclarationListAST_2E_element::class_func_new (const GGS_location & in_mInsertOrReplaceDeclarationLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertOrReplaceDeclarationLocation = in_mInsertOrReplaceDeclarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertOrReplaceDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mInsertOrReplaceDeclarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST_2E_element::drop (void) {
  mProperty_mInsertOrReplaceDeclarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @insertOrReplaceDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @insertOrReplaceDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2E_element ("insertOrReplaceDeclarationListAST.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertOrReplaceDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertOrReplaceDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertOrReplaceDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element GGS_insertOrReplaceDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST_2E_element result ;
  const GGS_insertOrReplaceDeclarationListAST_2E_element * p = (const GGS_insertOrReplaceDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertOrReplaceDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element::GGS_sortDescriptorListForGeneration_2E_element (void) :
mProperty_mAttributeTypeIndex (),
mProperty_mAttributeName (),
mProperty_mAscendingOrder () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element::GGS_sortDescriptorListForGeneration_2E_element (const GGS_sortDescriptorListForGeneration_2E_element & inSource) :
mProperty_mAttributeTypeIndex (inSource.mProperty_mAttributeTypeIndex),
mProperty_mAttributeName (inSource.mProperty_mAttributeName),
mProperty_mAscendingOrder (inSource.mProperty_mAscendingOrder) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element & GGS_sortDescriptorListForGeneration_2E_element::operator = (const GGS_sortDescriptorListForGeneration_2E_element & inSource) {
  mProperty_mAttributeTypeIndex = inSource.mProperty_mAttributeTypeIndex ;
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  mProperty_mAscendingOrder = inSource.mProperty_mAscendingOrder ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element GGS_sortDescriptorListForGeneration_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                                 const GGS_string & in_mAttributeName,
                                                                                                                 const GGS_bool & in_mAscendingOrder,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeTypeIndex = in_mAttributeTypeIndex ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAscendingOrder = in_mAscendingOrder ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element::GGS_sortDescriptorListForGeneration_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                const GGS_string & inOperand1,
                                                                                                const GGS_bool & inOperand2) :
mProperty_mAttributeTypeIndex (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mAscendingOrder (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element GGS_sortDescriptorListForGeneration_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                               const GGS_string & in_mAttributeName,
                                                                                                               const GGS_bool & in_mAscendingOrder,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeTypeIndex = in_mAttributeTypeIndex ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAscendingOrder = in_mAscendingOrder ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sortDescriptorListForGeneration_2E_element::isValid (void) const {
  return mProperty_mAttributeTypeIndex.isValid () && mProperty_mAttributeName.isValid () && mProperty_mAscendingOrder.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration_2E_element::drop (void) {
  mProperty_mAttributeTypeIndex.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mAscendingOrder.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortDescriptorListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAscendingOrder.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sortDescriptorListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2E_element ("sortDescriptorListForGeneration.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortDescriptorListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortDescriptorListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortDescriptorListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element GGS_sortDescriptorListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration_2E_element result ;
  const GGS_sortDescriptorListForGeneration_2E_element * p = (const GGS_sortDescriptorListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortDescriptorListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType::GGS_typeKindEnum_2E_classType (void) :
mProperty_isReference () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType::GGS_typeKindEnum_2E_classType (const GGS_typeKindEnum_2E_classType & inSource) :
mProperty_isReference (inSource.mProperty_isReference) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType & GGS_typeKindEnum_2E_classType::operator = (const GGS_typeKindEnum_2E_classType & inSource) {
  mProperty_isReference = inSource.mProperty_isReference ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_classType GGS_typeKindEnum_2E_classType::init_21_ (const GGS_bool & in_isReference,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isReference = in_isReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType::GGS_typeKindEnum_2E_classType (const GGS_bool & inOperand0) :
mProperty_isReference (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType GGS_typeKindEnum_2E_classType::class_func_new (const GGS_bool & in_isReference,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isReference = in_isReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_classType::objectCompare (const GGS_typeKindEnum_2E_classType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_isReference.objectCompare (inOperand.mProperty_isReference) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_classType::isValid (void) const {
  return mProperty_isReference.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType::drop (void) {
  mProperty_isReference.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.classType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isReference.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.classType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType ("typeKindEnum.classType",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_classType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_classType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_classType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_classType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType GGS_typeKindEnum_2E_classType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType result ;
  const GGS_typeKindEnum_2E_classType * p = (const GGS_typeKindEnum_2E_classType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_classType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.classType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_classType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_::GGS_typeKindEnum_2E_classType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_::GGS_typeKindEnum_2E_classType_3F_ (const GGS_typeKindEnum_2E_classType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_ GGS_typeKindEnum_2E_classType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_classType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_classType_3F_::isValid (void) const {
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

bool GGS_typeKindEnum_2E_classType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_classType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_classType_3F_::objectCompare (const GGS_typeKindEnum_2E_classType_3F_ & inOperand) const {
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

void GGS_typeKindEnum_2E_classType_3F_::description (String & ioString,
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
//     @typeKindEnum.classType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType_3F_ ("typeKindEnum.classType?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_classType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_classType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_classType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_classType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_ GGS_typeKindEnum_2E_classType_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType_3F_ result ;
  const GGS_typeKindEnum_2E_classType_3F_ * p = (const GGS_typeKindEnum_2E_classType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_classType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.classType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (void) :
mProperty_referenceType () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (const GGS_typeKindEnum_2E_weakReferenceType & inSource) :
mProperty_referenceType (inSource.mProperty_referenceType) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType & GGS_typeKindEnum_2E_weakReferenceType::operator = (const GGS_typeKindEnum_2E_weakReferenceType & inSource) {
  mProperty_referenceType = inSource.mProperty_referenceType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::init_21_ (const GGS_unifiedTypeMapEntry & in_referenceType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_referenceType = in_referenceType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_referenceType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::class_func_new (const GGS_unifiedTypeMapEntry & in_referenceType,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_referenceType = in_referenceType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_weakReferenceType::objectCompare (const GGS_typeKindEnum_2E_weakReferenceType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_referenceType.objectCompare (inOperand.mProperty_referenceType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_weakReferenceType::isValid (void) const {
  return mProperty_referenceType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::drop (void) {
  mProperty_referenceType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.weakReferenceType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_referenceType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.weakReferenceType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ("typeKindEnum.weakReferenceType",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_weakReferenceType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_weakReferenceType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_weakReferenceType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  const GGS_typeKindEnum_2E_weakReferenceType * p = (const GGS_typeKindEnum_2E_weakReferenceType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_weakReferenceType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.weakReferenceType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_weakReferenceType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_::GGS_typeKindEnum_2E_weakReferenceType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_::GGS_typeKindEnum_2E_weakReferenceType_3F_ (const GGS_typeKindEnum_2E_weakReferenceType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_ GGS_typeKindEnum_2E_weakReferenceType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_weakReferenceType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_weakReferenceType_3F_::isValid (void) const {
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

bool GGS_typeKindEnum_2E_weakReferenceType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_weakReferenceType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_weakReferenceType_3F_::objectCompare (const GGS_typeKindEnum_2E_weakReferenceType_3F_ & inOperand) const {
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

void GGS_typeKindEnum_2E_weakReferenceType_3F_::description (String & ioString,
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
//     @typeKindEnum.weakReferenceType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ("typeKindEnum.weakReferenceType?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_weakReferenceType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_weakReferenceType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_weakReferenceType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_ GGS_typeKindEnum_2E_weakReferenceType_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType_3F_ result ;
  const GGS_typeKindEnum_2E_weakReferenceType_3F_ * p = (const GGS_typeKindEnum_2E_weakReferenceType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_weakReferenceType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.weakReferenceType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (void) :
mProperty_constantMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (const GGS_typeKindEnum_2E_enumType & inSource) :
mProperty_constantMap (inSource.mProperty_constantMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType & GGS_typeKindEnum_2E_enumType::operator = (const GGS_typeKindEnum_2E_enumType & inSource) {
  mProperty_constantMap = inSource.mProperty_constantMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::init_21_ (const GGS_constantIndexMap & in_constantMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantMap = in_constantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (const GGS_constantIndexMap & inOperand0) :
mProperty_constantMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::class_func_new (const GGS_constantIndexMap & in_constantMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantMap = in_constantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_enumType::objectCompare (const GGS_typeKindEnum_2E_enumType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_constantMap.objectCompare (inOperand.mProperty_constantMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_enumType::isValid (void) const {
  return mProperty_constantMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::drop (void) {
  mProperty_constantMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.enumType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constantMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.enumType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ("typeKindEnum.enumType",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_enumType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_enumType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_enumType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  const GGS_typeKindEnum_2E_enumType * p = (const GGS_typeKindEnum_2E_enumType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_enumType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.enumType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_enumType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_::GGS_typeKindEnum_2E_enumType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_::GGS_typeKindEnum_2E_enumType_3F_ (const GGS_typeKindEnum_2E_enumType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_ GGS_typeKindEnum_2E_enumType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_enumType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_enumType_3F_::isValid (void) const {
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

bool GGS_typeKindEnum_2E_enumType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_enumType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_enumType_3F_::objectCompare (const GGS_typeKindEnum_2E_enumType_3F_ & inOperand) const {
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

void GGS_typeKindEnum_2E_enumType_3F_::description (String & ioString,
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
//     @typeKindEnum.enumType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ("typeKindEnum.enumType?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindEnum_2E_enumType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_enumType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_enumType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_ GGS_typeKindEnum_2E_enumType_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType_3F_ result ;
  const GGS_typeKindEnum_2E_enumType_3F_ * p = (const GGS_typeKindEnum_2E_enumType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_enumType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.enumType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (void) :
mProperty_usedInSubscope () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_localVarValuation_2E_declared & inSource) :
mProperty_usedInSubscope (inSource.mProperty_usedInSubscope) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared & GGS_localVarValuation_2E_declared::operator = (const GGS_localVarValuation_2E_declared & inSource) {
  mProperty_usedInSubscope = inSource.mProperty_usedInSubscope ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::init_21_ (const GGS_bool & in_usedInSubscope,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_usedInSubscope = in_usedInSubscope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_bool & inOperand0) :
mProperty_usedInSubscope (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::class_func_new (const GGS_bool & in_usedInSubscope,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_usedInSubscope = in_usedInSubscope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared::objectCompare (const GGS_localVarValuation_2E_declared & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_usedInSubscope.objectCompare (inOperand.mProperty_usedInSubscope) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared::isValid (void) const {
  return mProperty_usedInSubscope.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::drop (void) {
  mProperty_usedInSubscope.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarValuation.declared:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_usedInSubscope.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarValuation.declared generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ("localVarValuation.declared",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarValuation_2E_declared::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarValuation_2E_declared::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarValuation_2E_declared (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  const GGS_localVarValuation_2E_declared * p = (const GGS_localVarValuation_2E_declared *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarValuation_2E_declared *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation.declared", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @localVarValuation_2E_declared_3F_
//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (const GGS_localVarValuation_2E_declared & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation_2E_declared_3F_::init_nil (void) {
  GGS_localVarValuation_2E_declared_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared_3F_::isValid (void) const {
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

bool GGS_localVarValuation_2E_declared_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_localVarValuation_2E_declared () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared_3F_::objectCompare (const GGS_localVarValuation_2E_declared_3F_ & inOperand) const {
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

void GGS_localVarValuation_2E_declared_3F_::description (String & ioString,
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
//     @localVarValuation.declared? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ("localVarValuation.declared?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarValuation_2E_declared_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarValuation_2E_declared_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarValuation_2E_declared_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation_2E_declared_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared_3F_ result ;
  const GGS_localVarValuation_2E_declared_3F_ * p = (const GGS_localVarValuation_2E_declared_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarValuation_2E_declared_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation.declared?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (void) :
mProperty_mMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_localVarMapListForLLVM_2E_element & inSource) :
mProperty_mMap (inSource.mProperty_mMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element & GGS_localVarMapListForLLVM_2E_element::operator = (const GGS_localVarMapListForLLVM_2E_element & inSource) {
  mProperty_mMap = inSource.mProperty_mMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::init_21_ (const GGS_scopeLocalVarMap & in_mMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_scopeLocalVarMap & inOperand0) :
mProperty_mMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::class_func_new (const GGS_scopeLocalVarMap & in_mMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarMapListForLLVM_2E_element::isValid (void) const {
  return mProperty_mMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::drop (void) {
  mProperty_mMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarMapListForLLVM.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarMapListForLLVM.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ("localVarMapListForLLVM.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarMapListForLLVM_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarMapListForLLVM_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarMapListForLLVM_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  const GGS_localVarMapListForLLVM_2E_element * p = (const GGS_localVarMapListForLLVM_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarMapListForLLVM_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarMapListForLLVM.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (void) :
mProperty_savedManager () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) :
mProperty_savedManager (inSource.mProperty_savedManager) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch & GGS_overrideKind_2E_selectOverrideFirstBranch::operator = (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) {
  mProperty_savedManager = inSource.mProperty_savedManager ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch GGS_overrideKind_2E_selectOverrideFirstBranch::init_21_ (const GGS_currentVarManager & in_savedManager,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_currentVarManager & inOperand0) :
mProperty_savedManager (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch GGS_overrideKind_2E_selectOverrideFirstBranch::class_func_new (const GGS_currentVarManager & in_savedManager,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideFirstBranch::isValid (void) const {
  return mProperty_savedManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::drop (void) {
  mProperty_savedManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind.selectOverrideFirstBranch:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_savedManager.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @overrideKind.selectOverrideFirstBranch generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ("overrideKind.selectOverrideFirstBranch",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideFirstBranch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideFirstBranch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideFirstBranch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch GGS_overrideKind_2E_selectOverrideFirstBranch::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch result ;
  const GGS_overrideKind_2E_selectOverrideFirstBranch * p = (const GGS_overrideKind_2E_selectOverrideFirstBranch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideFirstBranch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideFirstBranch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @overrideKind_2E_selectOverrideFirstBranch_3F_
//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::init_nil (void) {
  GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::isValid (void) const {
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

bool GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_overrideKind_2E_selectOverrideFirstBranch () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::description (String & ioString,
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
//     @overrideKind.selectOverrideFirstBranch? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ("overrideKind.selectOverrideFirstBranch?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ result ;
  const GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ * p = (const GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideFirstBranch?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (void) :
mProperty_savedManager (),
mProperty_referenceManager () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) :
mProperty_savedManager (inSource.mProperty_savedManager),
mProperty_referenceManager (inSource.mProperty_referenceManager) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches & GGS_overrideKind_2E_selectOverrideNextBranches::operator = (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) {
  mProperty_savedManager = inSource.mProperty_savedManager ;
  mProperty_referenceManager = inSource.mProperty_referenceManager ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches GGS_overrideKind_2E_selectOverrideNextBranches::init_21__21_ (const GGS_currentVarManager & in_savedManager,
                                                                                                             const GGS_currentVarManager & in_referenceManager,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  result.mProperty_referenceManager = in_referenceManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_currentVarManager & inOperand0,
                                                                                                const GGS_currentVarManager & inOperand1) :
mProperty_savedManager (inOperand0),
mProperty_referenceManager (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches GGS_overrideKind_2E_selectOverrideNextBranches::class_func_new (const GGS_currentVarManager & in_savedManager,
                                                                                                               const GGS_currentVarManager & in_referenceManager,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  result.mProperty_referenceManager = in_referenceManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideNextBranches::isValid (void) const {
  return mProperty_savedManager.isValid () && mProperty_referenceManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::drop (void) {
  mProperty_savedManager.drop () ;
  mProperty_referenceManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind.selectOverrideNextBranches:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_savedManager.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_referenceManager.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @overrideKind.selectOverrideNextBranches generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ("overrideKind.selectOverrideNextBranches",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideNextBranches::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideNextBranches::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideNextBranches (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches GGS_overrideKind_2E_selectOverrideNextBranches::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches result ;
  const GGS_overrideKind_2E_selectOverrideNextBranches * p = (const GGS_overrideKind_2E_selectOverrideNextBranches *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideNextBranches *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideNextBranches", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @overrideKind_2E_selectOverrideNextBranches_3F_
//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_::GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_::GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_ GGS_overrideKind_2E_selectOverrideNextBranches_3F_::init_nil (void) {
  GGS_overrideKind_2E_selectOverrideNextBranches_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideNextBranches_3F_::isValid (void) const {
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

bool GGS_overrideKind_2E_selectOverrideNextBranches_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_overrideKind_2E_selectOverrideNextBranches () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches_3F_::description (String & ioString,
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
//     @overrideKind.selectOverrideNextBranches? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ("overrideKind.selectOverrideNextBranches?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideNextBranches_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind_2E_selectOverrideNextBranches_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_ GGS_overrideKind_2E_selectOverrideNextBranches_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches_3F_ result ;
  const GGS_overrideKind_2E_selectOverrideNextBranches_3F_ * p = (const GGS_overrideKind_2E_selectOverrideNextBranches_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind_2E_selectOverrideNextBranches_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind.selectOverrideNextBranches?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (void) :
mProperty_mOverrideKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (const GGS_openedOverrideList_2E_element & inSource) :
mProperty_mOverrideKind (inSource.mProperty_mOverrideKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element & GGS_openedOverrideList_2E_element::operator = (const GGS_openedOverrideList_2E_element & inSource) {
  mProperty_mOverrideKind = inSource.mProperty_mOverrideKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_openedOverrideList_2E_element GGS_openedOverrideList_2E_element::init_21_ (const GGS_overrideKind & in_mOverrideKind,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_openedOverrideList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (const GGS_overrideKind & inOperand0) :
mProperty_mOverrideKind (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element GGS_openedOverrideList_2E_element::class_func_new (const GGS_overrideKind & in_mOverrideKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_openedOverrideList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_openedOverrideList_2E_element::isValid (void) const {
  return mProperty_mOverrideKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::drop (void) {
  mProperty_mOverrideKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @openedOverrideList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOverrideKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @openedOverrideList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedOverrideList_2E_element ("openedOverrideList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedOverrideList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_openedOverrideList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_openedOverrideList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element GGS_openedOverrideList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_openedOverrideList_2E_element result ;
  const GGS_openedOverrideList_2E_element * p = (const GGS_openedOverrideList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_openedOverrideList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedOverrideList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (void) :
mProperty_weakElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
mProperty_weakElement (inSource.mProperty_weakElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element & GGS_unifiedTypeMapEntry_2E_element::operator = (const GGS_unifiedTypeMapEntry_2E_element & inSource) {
  mProperty_weakElement = inSource.mProperty_weakElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::init_21_ (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand0) :
mProperty_weakElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::class_func_new (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element::objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_weakElement.objectCompare (inOperand.mProperty_weakElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element::isValid (void) const {
  return mProperty_weakElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::drop (void) {
  mProperty_weakElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntry.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapEntry.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ("unifiedTypeMapEntry.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  const GGS_unifiedTypeMapEntry_2E_element * p = (const GGS_unifiedTypeMapEntry_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @unifiedTypeMapEntry_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValid (void) const {
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

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMapEntry_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element_3F_::objectCompare (const GGS_unifiedTypeMapEntry_2E_element_3F_ & inOperand) const {
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

void GGS_unifiedTypeMapEntry_2E_element_3F_::description (String & ioString,
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
//     @unifiedTypeMapEntry.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ("unifiedTypeMapEntry.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  const GGS_unifiedTypeMapEntry_2E_element_3F_ * p = (const GGS_unifiedTypeMapEntry_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (const GGS_actualParameterListAST_2E_element & inSource) :
mProperty_mActualParameter (inSource.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element & GGS_actualParameterListAST_2E_element::operator = (const GGS_actualParameterListAST_2E_element & inSource) {
  mProperty_mActualParameter = inSource.mProperty_mActualParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualParameterListAST_2E_element GGS_actualParameterListAST_2E_element::init_21_ (const GGS_actualParameterAST & in_mActualParameter,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (const GGS_actualParameterAST & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element GGS_actualParameterListAST_2E_element::class_func_new (const GGS_actualParameterAST & in_mActualParameter,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualParameterListAST_2E_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterListAST_2E_element ("actualParameterListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element GGS_actualParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_actualParameterListAST_2E_element result ;
  const GGS_actualParameterListAST_2E_element * p = (const GGS_actualParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (void) :
mProperty_key (),
mProperty_extensionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (const GGS_syntaxExtensionsDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_extensionList (inSource.mProperty_extensionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element & GGS_syntaxExtensionsDictionary_2E_element::operator = (const GGS_syntaxExtensionsDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_extensionList = inSource.mProperty_extensionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element GGS_syntaxExtensionsDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                   const GGS_galgas_33_SyntaxExtensionListAST & in_extensionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_extensionList = in_extensionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (const GGS_string & inOperand0,
                                                                                      const GGS_galgas_33_SyntaxExtensionListAST & inOperand1) :
mProperty_key (inOperand0),
mProperty_extensionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element GGS_syntaxExtensionsDictionary_2E_element::class_func_new (const GGS_string & in_key,
                                                                                                     const GGS_galgas_33_SyntaxExtensionListAST & in_extensionList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_extensionList = in_extensionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensionsDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_extensionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_extensionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensionsDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_extensionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxExtensionsDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ("syntaxExtensionsDictionary.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensionsDictionary_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensionsDictionary_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element GGS_syntaxExtensionsDictionary_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element result ;
  const GGS_syntaxExtensionsDictionary_2E_element * p = (const GGS_syntaxExtensionsDictionary_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensionsDictionary_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @syntaxExtensionsDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_::GGS_syntaxExtensionsDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_::GGS_syntaxExtensionsDictionary_2E_element_3F_ (const GGS_syntaxExtensionsDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary_2E_element_3F_::init_nil (void) {
  GGS_syntaxExtensionsDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensionsDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_syntaxExtensionsDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_syntaxExtensionsDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element_3F_::description (String & ioString,
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
//     @syntaxExtensionsDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ("syntaxExtensionsDictionary.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensionsDictionary_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensionsDictionary_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element_3F_ result ;
  const GGS_syntaxExtensionsDictionary_2E_element_3F_ * p = (const GGS_syntaxExtensionsDictionary_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensionsDictionary_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element & GGS_semanticInstructionListAST_2E_element::operator = (const GGS_semanticInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element GGS_semanticInstructionListAST_2E_element::init_21_ (const GGS_semanticInstructionAST & in_mInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element GGS_semanticInstructionListAST_2E_element::class_func_new (const GGS_semanticInstructionAST & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ("semanticInstructionListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element GGS_semanticInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListAST_2E_element result ;
  const GGS_semanticInstructionListAST_2E_element * p = (const GGS_semanticInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element::GGS_semanticDeclarationListAST_2E_element (void) :
mProperty_mSemanticDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element::GGS_semanticDeclarationListAST_2E_element (const GGS_semanticDeclarationListAST_2E_element & inSource) :
mProperty_mSemanticDeclaration (inSource.mProperty_mSemanticDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element & GGS_semanticDeclarationListAST_2E_element::operator = (const GGS_semanticDeclarationListAST_2E_element & inSource) {
  mProperty_mSemanticDeclaration = inSource.mProperty_mSemanticDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element GGS_semanticDeclarationListAST_2E_element::init_21_ (const GGS_semanticDeclarationAST & in_mSemanticDeclaration,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticDeclaration = in_mSemanticDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element::GGS_semanticDeclarationListAST_2E_element (const GGS_semanticDeclarationAST & inOperand0) :
mProperty_mSemanticDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element GGS_semanticDeclarationListAST_2E_element::class_func_new (const GGS_semanticDeclarationAST & in_mSemanticDeclaration,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticDeclaration = in_mSemanticDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mSemanticDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListAST_2E_element::drop (void) {
  mProperty_mSemanticDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2E_element ("semanticDeclarationListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST_2E_element GGS_semanticDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListAST_2E_element result ;
  const GGS_semanticDeclarationListAST_2E_element * p = (const GGS_semanticDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element::GGS_syntaxInstructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element::GGS_syntaxInstructionList_2E_element (const GGS_syntaxInstructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element & GGS_syntaxInstructionList_2E_element::operator = (const GGS_syntaxInstructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element GGS_syntaxInstructionList_2E_element::init_21_ (const GGS_syntaxInstructionAST & in_mInstruction,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element::GGS_syntaxInstructionList_2E_element (const GGS_syntaxInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element GGS_syntaxInstructionList_2E_element::class_func_new (const GGS_syntaxInstructionAST & in_mInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxInstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2E_element ("syntaxInstructionList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element GGS_syntaxInstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionList_2E_element result ;
  const GGS_syntaxInstructionList_2E_element * p = (const GGS_syntaxInstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element::GGS_listOfSyntaxInstructionList_2E_element (void) :
mProperty_mSyntaxInstructionList (),
mProperty_mEndOf_5F_instructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element::GGS_listOfSyntaxInstructionList_2E_element (const GGS_listOfSyntaxInstructionList_2E_element & inSource) :
mProperty_mSyntaxInstructionList (inSource.mProperty_mSyntaxInstructionList),
mProperty_mEndOf_5F_instructions (inSource.mProperty_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element & GGS_listOfSyntaxInstructionList_2E_element::operator = (const GGS_listOfSyntaxInstructionList_2E_element & inSource) {
  mProperty_mSyntaxInstructionList = inSource.mProperty_mSyntaxInstructionList ;
  mProperty_mEndOf_5F_instructions = inSource.mProperty_mEndOf_5F_instructions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element GGS_listOfSyntaxInstructionList_2E_element::init_21__21_ (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                     const GGS_location & in_mEndOf_5F_instructions,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_5F_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element::GGS_listOfSyntaxInstructionList_2E_element (const GGS_syntaxInstructionList & inOperand0,
                                                                                        const GGS_location & inOperand1) :
mProperty_mSyntaxInstructionList (inOperand0),
mProperty_mEndOf_5F_instructions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element GGS_listOfSyntaxInstructionList_2E_element::class_func_new (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                       const GGS_location & in_mEndOf_instructions,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_listOfSyntaxInstructionList_2E_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOf_5F_instructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList_2E_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOf_5F_instructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @listOfSyntaxInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @listOfSyntaxInstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2E_element ("listOfSyntaxInstructionList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSyntaxInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSyntaxInstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSyntaxInstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element GGS_listOfSyntaxInstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList_2E_element result ;
  const GGS_listOfSyntaxInstructionList_2E_element * p = (const GGS_listOfSyntaxInstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSyntaxInstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element::GGS_prologueEpilogueList_2E_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element::GGS_prologueEpilogueList_2E_element (const GGS_prologueEpilogueList_2E_element & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element & GGS_prologueEpilogueList_2E_element::operator = (const GGS_prologueEpilogueList_2E_element & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element GGS_prologueEpilogueList_2E_element::init_21__21_ (const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                       const GGS_location & in_mEndOfInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prologueEpilogueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element::GGS_prologueEpilogueList_2E_element (const GGS_semanticInstructionListAST & inOperand0,
                                                                          const GGS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element GGS_prologueEpilogueList_2E_element::class_func_new (const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                         const GGS_location & in_mEndOfInstructionList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prologueEpilogueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_prologueEpilogueList_2E_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList_2E_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prologueEpilogueList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @prologueEpilogueList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2E_element ("prologueEpilogueList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prologueEpilogueList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prologueEpilogueList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prologueEpilogueList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element GGS_prologueEpilogueList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_prologueEpilogueList_2E_element result ;
  const GGS_prologueEpilogueList_2E_element * p = (const GGS_prologueEpilogueList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prologueEpilogueList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element::GGS_enumerationDescriptorList_2E_element (void) :
mProperty_mEnumeratedType (),
mProperty_mEnumerationName () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element::GGS_enumerationDescriptorList_2E_element (const GGS_enumerationDescriptorList_2E_element & inSource) :
mProperty_mEnumeratedType (inSource.mProperty_mEnumeratedType),
mProperty_mEnumerationName (inSource.mProperty_mEnumerationName) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element & GGS_enumerationDescriptorList_2E_element::operator = (const GGS_enumerationDescriptorList_2E_element & inSource) {
  mProperty_mEnumeratedType = inSource.mProperty_mEnumeratedType ;
  mProperty_mEnumerationName = inSource.mProperty_mEnumerationName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element GGS_enumerationDescriptorList_2E_element::init_21__21_ (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                                 const GGS_string & in_mEnumerationName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumeratedType = in_mEnumeratedType ;
  result.mProperty_mEnumerationName = in_mEnumerationName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element::GGS_enumerationDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                    const GGS_string & inOperand1) :
mProperty_mEnumeratedType (inOperand0),
mProperty_mEnumerationName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element GGS_enumerationDescriptorList_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                                   const GGS_string & in_mEnumerationName,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumeratedType = in_mEnumeratedType ;
  result.mProperty_mEnumerationName = in_mEnumerationName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumerationDescriptorList_2E_element::isValid (void) const {
  return mProperty_mEnumeratedType.isValid () && mProperty_mEnumerationName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList_2E_element::drop (void) {
  mProperty_mEnumeratedType.drop () ;
  mProperty_mEnumerationName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEnumeratedType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumerationDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2E_element ("enumerationDescriptorList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element GGS_enumerationDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_enumerationDescriptorList_2E_element result ;
  const GGS_enumerationDescriptorList_2E_element * p = (const GGS_enumerationDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (void) :
mProperty_type (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (const GGS_associatedValueDescriptorList_2E_element & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element & GGS_associatedValueDescriptorList_2E_element::operator = (const GGS_associatedValueDescriptorList_2E_element & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element GGS_associatedValueDescriptorList_2E_element::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                                                         const GGS_string & in_name,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_name (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element GGS_associatedValueDescriptorList_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_type,
                                                                                                           const GGS_string & in_name,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_associatedValueDescriptorList_2E_element::objectCompare (const GGS_associatedValueDescriptorList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValueDescriptorList_2E_element::isValid (void) const {
  return mProperty_type.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::drop (void) {
  mProperty_type.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValueDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValueDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptorList_2E_element ("associatedValueDescriptorList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValueDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValueDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_associatedValueDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_associatedValueDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element GGS_associatedValueDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList_2E_element result ;
  const GGS_associatedValueDescriptorList_2E_element * p = (const GGS_associatedValueDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_associatedValueDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValueDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element::GGS_acceptableParameterList_2E_element (void) :
mProperty_mRoutineSignature (),
mProperty_mIsFilePrivate () {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element::GGS_acceptableParameterList_2E_element (const GGS_acceptableParameterList_2E_element & inSource) :
mProperty_mRoutineSignature (inSource.mProperty_mRoutineSignature),
mProperty_mIsFilePrivate (inSource.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element & GGS_acceptableParameterList_2E_element::operator = (const GGS_acceptableParameterList_2E_element & inSource) {
  mProperty_mRoutineSignature = inSource.mProperty_mRoutineSignature ;
  mProperty_mIsFilePrivate = inSource.mProperty_mIsFilePrivate ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_acceptableParameterList_2E_element GGS_acceptableParameterList_2E_element::init_21__21_ (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                             const GGS_bool & in_mIsFilePrivate,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_acceptableParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineSignature = in_mRoutineSignature ;
  result.mProperty_mIsFilePrivate = in_mIsFilePrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element::GGS_acceptableParameterList_2E_element (const GGS_formalParameterSignature & inOperand0,
                                                                                const GGS_bool & inOperand1) :
mProperty_mRoutineSignature (inOperand0),
mProperty_mIsFilePrivate (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element GGS_acceptableParameterList_2E_element::class_func_new (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                               const GGS_bool & in_mIsFilePrivate,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_acceptableParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineSignature = in_mRoutineSignature ;
  result.mProperty_mIsFilePrivate = in_mIsFilePrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_acceptableParameterList_2E_element::isValid (void) const {
  return mProperty_mRoutineSignature.isValid () && mProperty_mIsFilePrivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList_2E_element::drop (void) {
  mProperty_mRoutineSignature.drop () ;
  mProperty_mIsFilePrivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @acceptableParameterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsFilePrivate.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @acceptableParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_acceptableParameterList_2E_element ("acceptableParameterList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_acceptableParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_acceptableParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_acceptableParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_acceptableParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element GGS_acceptableParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_acceptableParameterList_2E_element result ;
  const GGS_acceptableParameterList_2E_element * p = (const GGS_acceptableParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_acceptableParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("acceptableParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element::GGS_templateInstructionListForGeneration_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element::GGS_templateInstructionListForGeneration_2E_element (const GGS_templateInstructionListForGeneration_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element & GGS_templateInstructionListForGeneration_2E_element::operator = (const GGS_templateInstructionListForGeneration_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element GGS_templateInstructionListForGeneration_2E_element::init_21_ (const GGS_templateInstructionForGeneration & in_mInstruction,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element::GGS_templateInstructionListForGeneration_2E_element (const GGS_templateInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element GGS_templateInstructionListForGeneration_2E_element::class_func_new (const GGS_templateInstructionForGeneration & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionListForGeneration_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2E_element ("templateInstructionListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element GGS_templateInstructionListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration_2E_element result ;
  const GGS_templateInstructionListForGeneration_2E_element * p = (const GGS_templateInstructionListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element::GGS_actualParameterListForGeneration_2E_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element::GGS_actualParameterListForGeneration_2E_element (const GGS_actualParameterListForGeneration_2E_element & inSource) :
mProperty_mActualParameter (inSource.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element & GGS_actualParameterListForGeneration_2E_element::operator = (const GGS_actualParameterListForGeneration_2E_element & inSource) {
  mProperty_mActualParameter = inSource.mProperty_mActualParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element GGS_actualParameterListForGeneration_2E_element::init_21_ (const GGS_actualParameterForGeneration & in_mActualParameter,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element::GGS_actualParameterListForGeneration_2E_element (const GGS_actualParameterForGeneration & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element GGS_actualParameterListForGeneration_2E_element::class_func_new (const GGS_actualParameterForGeneration & in_mActualParameter,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualParameterListForGeneration_2E_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration_2E_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualParameterListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration_2E_element ("actualParameterListForGeneration.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element GGS_actualParameterListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration_2E_element result ;
  const GGS_actualParameterListForGeneration_2E_element * p = (const GGS_actualParameterListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element::GGS_semanticInstructionListForGeneration_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element::GGS_semanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionListForGeneration_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element & GGS_semanticInstructionListForGeneration_2E_element::operator = (const GGS_semanticInstructionListForGeneration_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element GGS_semanticInstructionListForGeneration_2E_element::init_21_ (const GGS_semanticInstructionForGeneration & in_mInstruction,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element::GGS_semanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element GGS_semanticInstructionListForGeneration_2E_element::class_func_new (const GGS_semanticInstructionForGeneration & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticInstructionListForGeneration_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2E_element ("semanticInstructionListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element GGS_semanticInstructionListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration_2E_element result ;
  const GGS_semanticInstructionListForGeneration_2E_element * p = (const GGS_semanticInstructionListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element::GGS_listOfSemanticInstructionListForGeneration_2E_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element::GGS_listOfSemanticInstructionListForGeneration_2E_element (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element & GGS_listOfSemanticInstructionListForGeneration_2E_element::operator = (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element GGS_listOfSemanticInstructionListForGeneration_2E_element::init_21__21_ (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                   const GGS_location & in_mEndOfInstructionList,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element::GGS_listOfSemanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                      const GGS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element GGS_listOfSemanticInstructionListForGeneration_2E_element::class_func_new (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                     const GGS_location & in_mEndOfInstructionList,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_listOfSemanticInstructionListForGeneration_2E_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration_2E_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration_2E_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @listOfSemanticInstructionListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @listOfSemanticInstructionListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2E_element ("listOfSemanticInstructionListForGeneration.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSemanticInstructionListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSemanticInstructionListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSemanticInstructionListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element GGS_listOfSemanticInstructionListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration_2E_element result ;
  const GGS_listOfSemanticInstructionListForGeneration_2E_element * p = (const GGS_listOfSemanticInstructionListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSemanticInstructionListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element::GGS_semanticDeclarationListForGeneration_2E_element (void) :
mProperty_infoMessage (),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element::GGS_semanticDeclarationListForGeneration_2E_element (const GGS_semanticDeclarationListForGeneration_2E_element & inSource) :
mProperty_infoMessage (inSource.mProperty_infoMessage),
mProperty_mDeclaration (inSource.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element & GGS_semanticDeclarationListForGeneration_2E_element::operator = (const GGS_semanticDeclarationListForGeneration_2E_element & inSource) {
  mProperty_infoMessage = inSource.mProperty_infoMessage ;
  mProperty_mDeclaration = inSource.mProperty_mDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element GGS_semanticDeclarationListForGeneration_2E_element::init_21_infoMessage_21_ (const GGS_string & in_infoMessage,
                                                                                                                                  const GGS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_infoMessage = in_infoMessage ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element::GGS_semanticDeclarationListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                          const GGS_semanticDeclarationForGeneration & inOperand1) :
mProperty_infoMessage (inOperand0),
mProperty_mDeclaration (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element GGS_semanticDeclarationListForGeneration_2E_element::class_func_new (const GGS_string & in_infoMessage,
                                                                                                                         const GGS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_infoMessage = in_infoMessage ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticDeclarationListForGeneration_2E_element::isValid (void) const {
  return mProperty_infoMessage.isValid () && mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration_2E_element::drop (void) {
  mProperty_infoMessage.drop () ;
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticDeclarationListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_infoMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2E_element ("semanticDeclarationListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticDeclarationListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element GGS_semanticDeclarationListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration_2E_element result ;
  const GGS_semanticDeclarationListForGeneration_2E_element * p = (const GGS_semanticDeclarationListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonTerminalToAddCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (const GGS_nonTerminalToAddList_2E_element & inSource) :
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName),
mProperty_mNonTerminalToAddCount (inSource.mProperty_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element & GGS_nonTerminalToAddList_2E_element::operator = (const GGS_nonTerminalToAddList_2E_element & inSource) {
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  mProperty_mNonTerminalToAddCount = inSource.mProperty_mNonTerminalToAddCount ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element GGS_nonTerminalToAddList_2E_element::init_21__21_ (const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_uint & in_mNonTerminalToAddCount,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalToAddList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (const GGS_string & inOperand0,
                                                                          const GGS_uint & inOperand1) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonTerminalToAddCount (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element GGS_nonTerminalToAddList_2E_element::class_func_new (const GGS_string & in_mSyntaxComponentName,
                                                                                         const GGS_uint & in_mNonTerminalToAddCount,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalToAddList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalToAddList_2E_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonTerminalToAddCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonTerminalToAddCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalToAddList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonTerminalToAddCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalToAddList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ("nonTerminalToAddList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalToAddList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalToAddList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalToAddList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element GGS_nonTerminalToAddList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList_2E_element result ;
  const GGS_nonTerminalToAddList_2E_element * p = (const GGS_nonTerminalToAddList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalToAddList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element::GGS_terminalCheckAssignementList_2E_element (void) :
mProperty_mTypeName (),
mProperty_mTargetVarCppName (),
mProperty_mSourceLexicalAttributeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element::GGS_terminalCheckAssignementList_2E_element (const GGS_terminalCheckAssignementList_2E_element & inSource) :
mProperty_mTypeName (inSource.mProperty_mTypeName),
mProperty_mTargetVarCppName (inSource.mProperty_mTargetVarCppName),
mProperty_mSourceLexicalAttributeName (inSource.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element & GGS_terminalCheckAssignementList_2E_element::operator = (const GGS_terminalCheckAssignementList_2E_element & inSource) {
  mProperty_mTypeName = inSource.mProperty_mTypeName ;
  mProperty_mTargetVarCppName = inSource.mProperty_mTargetVarCppName ;
  mProperty_mSourceLexicalAttributeName = inSource.mProperty_mSourceLexicalAttributeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element GGS_terminalCheckAssignementList_2E_element::init_21__21__21_ (const GGS_string & in_mTypeName,
                                                                                                           const GGS_string & in_mTargetVarCppName,
                                                                                                           const GGS_string & in_mSourceLexicalAttributeName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element::GGS_terminalCheckAssignementList_2E_element (const GGS_string & inOperand0,
                                                                                          const GGS_string & inOperand1,
                                                                                          const GGS_string & inOperand2) :
mProperty_mTypeName (inOperand0),
mProperty_mTargetVarCppName (inOperand1),
mProperty_mSourceLexicalAttributeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element GGS_terminalCheckAssignementList_2E_element::class_func_new (const GGS_string & in_mTypeName,
                                                                                                         const GGS_string & in_mTargetVarCppName,
                                                                                                         const GGS_string & in_mSourceLexicalAttributeName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalCheckAssignementList_2E_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mTargetVarCppName.isValid () && mProperty_mSourceLexicalAttributeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList_2E_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mTargetVarCppName.drop () ;
  mProperty_mSourceLexicalAttributeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalCheckAssignementList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckAssignementList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList_2E_element ("terminalCheckAssignementList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckAssignementList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckAssignementList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckAssignementList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element GGS_terminalCheckAssignementList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList_2E_element result ;
  const GGS_terminalCheckAssignementList_2E_element * p = (const GGS_terminalCheckAssignementList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckAssignementList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplateFormalInputParameters (),
mProperty_mTemplateInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (const GGS_filewrapperTemplateListForGeneration_2E_element & inSource) :
mProperty_mFilewrapperTemplateName (inSource.mProperty_mFilewrapperTemplateName),
mProperty_mFilewrapperTemplateFormalInputParameters (inSource.mProperty_mFilewrapperTemplateFormalInputParameters),
mProperty_mTemplateInstructionListForGeneration (inSource.mProperty_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element & GGS_filewrapperTemplateListForGeneration_2E_element::operator = (const GGS_filewrapperTemplateListForGeneration_2E_element & inSource) {
  mProperty_mFilewrapperTemplateName = inSource.mProperty_mFilewrapperTemplateName ;
  mProperty_mFilewrapperTemplateFormalInputParameters = inSource.mProperty_mFilewrapperTemplateFormalInputParameters ;
  mProperty_mTemplateInstructionListForGeneration = inSource.mProperty_mTemplateInstructionListForGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element GGS_filewrapperTemplateListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                           const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                           const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                          const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                                          const GGS_templateInstructionListForGeneration & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand1),
mProperty_mTemplateInstructionListForGeneration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element GGS_filewrapperTemplateListForGeneration_2E_element::class_func_new (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                         const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                         const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateListForGeneration_2E_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () && mProperty_mTemplateInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
  mProperty_mTemplateInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2E_element ("filewrapperTemplateListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element GGS_filewrapperTemplateListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration_2E_element result ;
  const GGS_filewrapperTemplateListForGeneration_2E_element * p = (const GGS_filewrapperTemplateListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (void) :
mProperty_mNonterminalName (),
mProperty_mRuleIndex (),
mProperty_mLabelImplementationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (const GGS_ruleDeclarationList_2E_element & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mRuleIndex (inSource.mProperty_mRuleIndex),
mProperty_mLabelImplementationList (inSource.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element & GGS_ruleDeclarationList_2E_element::operator = (const GGS_ruleDeclarationList_2E_element & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mRuleIndex = inSource.mProperty_mRuleIndex ;
  mProperty_mLabelImplementationList = inSource.mProperty_mLabelImplementationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element GGS_ruleDeclarationList_2E_element::init_21__21__21_ (const GGS_string & in_mNonterminalName,
                                                                                         const GGS_uint & in_mRuleIndex,
                                                                                         const GGS_ruleLabelImplementationList & in_mLabelImplementationList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_uint & inOperand1,
                                                                        const GGS_ruleLabelImplementationList & inOperand2) :
mProperty_mNonterminalName (inOperand0),
mProperty_mRuleIndex (inOperand1),
mProperty_mLabelImplementationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element GGS_ruleDeclarationList_2E_element::class_func_new (const GGS_string & in_mNonterminalName,
                                                                                       const GGS_uint & in_mRuleIndex,
                                                                                       const GGS_ruleLabelImplementationList & in_mLabelImplementationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ruleDeclarationList_2E_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mRuleIndex.isValid () && mProperty_mLabelImplementationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mRuleIndex.drop () ;
  mProperty_mLabelImplementationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRuleIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelImplementationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ruleDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ("ruleDeclarationList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ruleDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element GGS_ruleDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList_2E_element result ;
  const GGS_ruleDeclarationList_2E_element * p = (const GGS_ruleDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (void) :
mProperty_mExpression (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (const GGS_collectionValueElementList_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element & GGS_collectionValueElementList_2E_element::operator = (const GGS_collectionValueElementList_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_collectionValueElementList_2E_element GGS_collectionValueElementList_2E_element::init_21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                                                                                                   const GGS_location & in_location,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (const GGS_semanticExpressionAST & inOperand0,
                                                                                      const GGS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element GGS_collectionValueElementList_2E_element::class_func_new (const GGS_semanticExpressionAST & in_mExpression,
                                                                                                     const GGS_location & in_location,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_collectionValueElementList_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @collectionValueElementList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @collectionValueElementList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ("collectionValueElementList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueElementList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueElementList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element GGS_collectionValueElementList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_collectionValueElementList_2E_element result ;
  const GGS_collectionValueElementList_2E_element * p = (const GGS_collectionValueElementList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueElementList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (void) :
mProperty_type (),
mProperty_selfMutability () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (const GGS_selfAvailability_2E_available & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_selfMutability (inSource.mProperty_selfMutability) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available & GGS_selfAvailability_2E_available::operator = (const GGS_selfAvailability_2E_available & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_selfMutability = inSource.mProperty_selfMutability ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                                   const GGS_selfMutability & in_selfMutability,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const GGS_selfMutability & inOperand1) :
mProperty_type (inOperand0),
mProperty_selfMutability (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::class_func_new (const GGS_unifiedTypeMapEntry & in_type,
                                                                                     const GGS_selfMutability & in_selfMutability,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available::objectCompare (const GGS_selfAvailability_2E_available & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_selfMutability.objectCompare (inOperand.mProperty_selfMutability) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available::isValid (void) const {
  return mProperty_type.isValid () && mProperty_selfMutability.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::drop (void) {
  mProperty_type.drop () ;
  mProperty_selfMutability.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selfAvailability.available:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfMutability.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @selfAvailability.available generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ("selfAvailability.available",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability_2E_available::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability_2E_available::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability_2E_available (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  const GGS_selfAvailability_2E_available * p = (const GGS_selfAvailability_2E_available *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability_2E_available *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability.available", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @selfAvailability_2E_available_3F_
//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (const GGS_selfAvailability_2E_available & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability_2E_available_3F_::init_nil (void) {
  GGS_selfAvailability_2E_available_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available_3F_::isValid (void) const {
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

bool GGS_selfAvailability_2E_available_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_selfAvailability_2E_available () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available_3F_::objectCompare (const GGS_selfAvailability_2E_available_3F_ & inOperand) const {
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

void GGS_selfAvailability_2E_available_3F_::description (String & ioString,
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
//     @selfAvailability.available? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ("selfAvailability.available?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability_2E_available_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability_2E_available_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability_2E_available_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability_2E_available_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available_3F_ result ;
  const GGS_selfAvailability_2E_available_3F_ * p = (const GGS_selfAvailability_2E_available_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability_2E_available_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability.available?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element::GGS_castInstructionBranchListForGeneration_2E_element (void) :
mProperty_mTypeComparisonKind (),
mProperty_mType (),
mProperty_mCastedVarCppName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element::GGS_castInstructionBranchListForGeneration_2E_element (const GGS_castInstructionBranchListForGeneration_2E_element & inSource) :
mProperty_mTypeComparisonKind (inSource.mProperty_mTypeComparisonKind),
mProperty_mType (inSource.mProperty_mType),
mProperty_mCastedVarCppName (inSource.mProperty_mCastedVarCppName),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element & GGS_castInstructionBranchListForGeneration_2E_element::operator = (const GGS_castInstructionBranchListForGeneration_2E_element & inSource) {
  mProperty_mTypeComparisonKind = inSource.mProperty_mTypeComparisonKind ;
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mCastedVarCppName = inSource.mProperty_mCastedVarCppName ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element GGS_castInstructionBranchListForGeneration_2E_element::init_21__21__21__21_ (const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                                   const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                                   const GGS_string & in_mCastedVarCppName,
                                                                                                                                   const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCastedVarCppName = in_mCastedVarCppName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element::GGS_castInstructionBranchListForGeneration_2E_element (const GGS_dynamicTypeComparisonKind & inOperand0,
                                                                                                              const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                              const GGS_string & inOperand2,
                                                                                                              const GGS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mTypeComparisonKind (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCastedVarCppName (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element GGS_castInstructionBranchListForGeneration_2E_element::class_func_new (const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                             const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                             const GGS_string & in_mCastedVarCppName,
                                                                                                                             const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCastedVarCppName = in_mCastedVarCppName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_castInstructionBranchListForGeneration_2E_element::isValid (void) const {
  return mProperty_mTypeComparisonKind.isValid () && mProperty_mType.isValid () && mProperty_mCastedVarCppName.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration_2E_element::drop (void) {
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCastedVarCppName.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @castInstructionBranchListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCastedVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @castInstructionBranchListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2E_element ("castInstructionBranchListForGeneration.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInstructionBranchListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInstructionBranchListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInstructionBranchListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element GGS_castInstructionBranchListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration_2E_element result ;
  const GGS_castInstructionBranchListForGeneration_2E_element * p = (const GGS_castInstructionBranchListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInstructionBranchListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (const GGS_fixitElementAST_2E_fixItReplace & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_errorLocation (inSource.mProperty_errorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace & GGS_fixitElementAST_2E_fixItReplace::operator = (const GGS_fixitElementAST_2E_fixItReplace & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_errorLocation = inSource.mProperty_errorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                       const GGS_location & in_errorLocation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (const GGS_semanticExpressionAST & inOperand0,
                                                                          const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                         const GGS_location & in_errorLocation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementAST.fixItReplace generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ("fixitElementAST.fixItReplace",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  const GGS_fixitElementAST_2E_fixItReplace * p = (const GGS_fixitElementAST_2E_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementAST_2E_fixItReplace_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_::GGS_fixitElementAST_2E_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_::GGS_fixitElementAST_2E_fixItReplace_3F_ (const GGS_fixitElementAST_2E_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST_2E_fixItReplace_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItReplace_3F_::isValid (void) const {
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

bool GGS_fixitElementAST_2E_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace_3F_::description (String & ioString,
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
//     @fixitElementAST.fixItReplace? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ("fixitElementAST.fixItReplace?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST_2E_fixItReplace_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  const GGS_fixitElementAST_2E_fixItReplace_3F_ * p = (const GGS_fixitElementAST_2E_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_errorLocation (inSource.mProperty_errorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter & GGS_fixitElementAST_2E_fixItInsertAfter::operator = (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_errorLocation = inSource.mProperty_errorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                               const GGS_location & in_errorLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_semanticExpressionAST & inOperand0,
                                                                                  const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                                 const GGS_location & in_errorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementAST.fixItInsertAfter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ("fixitElementAST.fixItInsertAfter",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  const GGS_fixitElementAST_2E_fixItInsertAfter * p = (const GGS_fixitElementAST_2E_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementAST_2E_fixItInsertAfter_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_::GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_::GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST_2E_fixItInsertAfter_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertAfter_3F_::isValid (void) const {
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

bool GGS_fixitElementAST_2E_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter_3F_::description (String & ioString,
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
//     @fixitElementAST.fixItInsertAfter? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ("fixitElementAST.fixItInsertAfter?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST_2E_fixItInsertAfter_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ * p = (const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_errorLocation (inSource.mProperty_errorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore & GGS_fixitElementAST_2E_fixItInsertBefore::operator = (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_errorLocation = inSource.mProperty_errorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                                 const GGS_location & in_errorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_semanticExpressionAST & inOperand0,
                                                                                    const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                                   const GGS_location & in_errorLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementAST.fixItInsertBefore generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ("fixitElementAST.fixItInsertBefore",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  const GGS_fixitElementAST_2E_fixItInsertBefore * p = (const GGS_fixitElementAST_2E_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementAST_2E_fixItInsertBefore_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_::GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_::GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST_2E_fixItInsertBefore_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertBefore_3F_::isValid (void) const {
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

bool GGS_fixitElementAST_2E_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore_3F_::description (String & ioString,
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
//     @fixitElementAST.fixItInsertBefore? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ("fixitElementAST.fixItInsertBefore?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST_2E_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST_2E_fixItInsertBefore_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ * p = (const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (const GGS_fixitListAST_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element & GGS_fixitListAST_2E_element::operator = (const GGS_fixitListAST_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::init_21_ (const GGS_fixitElementAST & in_mElement,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (const GGS_fixitElementAST & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::class_func_new (const GGS_fixitElementAST & in_mElement,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitListAST_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitListAST_2E_element ("fixitListAST.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  const GGS_fixitListAST_2E_element * p = (const GGS_fixitListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (const GGS_fixitListForGeneration_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element & GGS_fixitListForGeneration_2E_element::operator = (const GGS_fixitListForGeneration_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::init_21_ (const GGS_fixitElementForGeneration & in_mElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (const GGS_fixitElementForGeneration & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::class_func_new (const GGS_fixitElementForGeneration & in_mElement,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitListForGeneration_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ("fixitListForGeneration.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  const GGS_fixitListForGeneration_2E_element * p = (const GGS_fixitListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (void) :
mProperty_mAscending (),
mProperty_mEnumeratedCollection () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) :
mProperty_mAscending (inSource.mProperty_mAscending),
mProperty_mEnumeratedCollection (inSource.mProperty_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element & GGS_forInstructionEnumeratedObjectListAST_2E_element::operator = (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) {
  mProperty_mAscending = inSource.mProperty_mAscending ;
  mProperty_mEnumeratedCollection = inSource.mProperty_mEnumeratedCollection ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::init_21__21_ (const GGS_bool & in_mAscending,
                                                                                                                         const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_bool & inOperand0,
                                                                                                            const GGS_abstractEnumeratedCollectionAST & inOperand1) :
mProperty_mAscending (inOperand0),
mProperty_mEnumeratedCollection (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::class_func_new (const GGS_bool & in_mAscending,
                                                                                                                           const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectListAST_2E_element::isValid (void) const {
  return mProperty_mAscending.isValid () && mProperty_mEnumeratedCollection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::drop (void) {
  mProperty_mAscending.drop () ;
  mProperty_mEnumeratedCollection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAscending.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ("forInstructionEnumeratedObjectListAST.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  const GGS_forInstructionEnumeratedObjectListAST_2E_element * p = (const GGS_forInstructionEnumeratedObjectListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (void) :
mProperty_exp (),
mProperty_endOfExp () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (const GGS_ifExpressionKind_2E_regularExp & inSource) :
mProperty_exp (inSource.mProperty_exp),
mProperty_endOfExp (inSource.mProperty_endOfExp) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp & GGS_ifExpressionKind_2E_regularExp::operator = (const GGS_ifExpressionKind_2E_regularExp & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_endOfExp = inSource.mProperty_endOfExp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                     const GGS_location & in_endOfExp,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (const GGS_semanticExpressionAST & inOperand0,
                                                                        const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_endOfExp (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                       const GGS_location & in_endOfExp,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_regularExp::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_endOfExp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::drop (void) {
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.regularExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.regularExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ("ifExpressionKind.regularExp",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_regularExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_regularExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_regularExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  const GGS_ifExpressionKind_2E_regularExp * p = (const GGS_ifExpressionKind_2E_regularExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_regularExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.regularExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifExpressionKind_2E_regularExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_::GGS_ifExpressionKind_2E_regularExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_::GGS_ifExpressionKind_2E_regularExp_3F_ (const GGS_ifExpressionKind_2E_regularExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind_2E_regularExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_regularExp_3F_::isValid (void) const {
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

bool GGS_ifExpressionKind_2E_regularExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_regularExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp_3F_::description (String & ioString,
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
//     @ifExpressionKind.regularExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ("ifExpressionKind.regularExp?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_regularExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_regularExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_regularExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind_2E_regularExp_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  const GGS_ifExpressionKind_2E_regularExp_3F_ * p = (const GGS_ifExpressionKind_2E_regularExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_regularExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.regularExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element::GGS_CommaSeparatedExpressionList_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element::GGS_CommaSeparatedExpressionList_2E_element (const GGS_CommaSeparatedExpressionList_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element & GGS_CommaSeparatedExpressionList_2E_element::operator = (const GGS_CommaSeparatedExpressionList_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element GGS_CommaSeparatedExpressionList_2E_element::init_21_ (const GGS_ifExpressionKind & in_mExpression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element::GGS_CommaSeparatedExpressionList_2E_element (const GGS_ifExpressionKind & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element GGS_CommaSeparatedExpressionList_2E_element::class_func_new (const GGS_ifExpressionKind & in_mExpression,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_CommaSeparatedExpressionList_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @CommaSeparatedExpressionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @CommaSeparatedExpressionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList_2E_element ("CommaSeparatedExpressionList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_CommaSeparatedExpressionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_CommaSeparatedExpressionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_CommaSeparatedExpressionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_CommaSeparatedExpressionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element GGS_CommaSeparatedExpressionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList_2E_element result ;
  const GGS_CommaSeparatedExpressionList_2E_element * p = (const GGS_CommaSeparatedExpressionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_CommaSeparatedExpressionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("CommaSeparatedExpressionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (const GGS_ifTestListForGeneration_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element & GGS_ifTestListForGeneration_2E_element::operator = (const GGS_ifTestListForGeneration_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::init_21_ (const GGS_ifTestForGeneration & in_mExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (const GGS_ifTestForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::class_func_new (const GGS_ifTestForGeneration & in_mExpression,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestListForGeneration_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ("ifTestListForGeneration.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  const GGS_ifTestListForGeneration_2E_element * p = (const GGS_ifTestListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructions (),
mProperty_mEndOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (const GGS_switchBranchesAST_2E_element & inSource) :
mProperty_mSwitchConstantList (inSource.mProperty_mSwitchConstantList),
mProperty_mAssociatedValuesExtraction (inSource.mProperty_mAssociatedValuesExtraction),
mProperty_mInstructions (inSource.mProperty_mInstructions),
mProperty_mEndOfBranch (inSource.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element & GGS_switchBranchesAST_2E_element::operator = (const GGS_switchBranchesAST_2E_element & inSource) {
  mProperty_mSwitchConstantList = inSource.mProperty_mSwitchConstantList ;
  mProperty_mAssociatedValuesExtraction = inSource.mProperty_mAssociatedValuesExtraction ;
  mProperty_mInstructions = inSource.mProperty_mInstructions ;
  mProperty_mEndOfBranch = inSource.mProperty_mEndOfBranch ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                         const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                         const GGS_semanticInstructionListAST & in_mInstructions,
                                                                                         const GGS_location & in_mEndOfBranch,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                    const GGS_switchExtractedValuesListAST & inOperand1,
                                                                    const GGS_semanticInstructionListAST & inOperand2,
                                                                    const GGS_location & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructions (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                   const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                   const GGS_semanticInstructionListAST & in_mInstructions,
                                                                                   const GGS_location & in_mEndOfBranch,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchesAST_2E_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructions.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructions.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchBranchesAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesAST_2E_element ("switchBranchesAST.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchBranchesAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  const GGS_switchBranchesAST_2E_element * p = (const GGS_switchBranchesAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (void) :
mProperty_mType (),
mProperty_mCppName (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mCppName (inSource.mProperty_mCppName),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element & GGS_extractedAssociatedValuesForGeneration_2E_element::operator = (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                               const GGS_string & in_mCppName,
                                                                                                                               const GGS_string & in_name,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                              const GGS_string & inOperand1,
                                                                                                              const GGS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mCppName (inOperand1),
mProperty_name (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                             const GGS_string & in_mCppName,
                                                                                                                             const GGS_string & in_name,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extractedAssociatedValuesForGeneration_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extractedAssociatedValuesForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extractedAssociatedValuesForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ("extractedAssociatedValuesForGeneration.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extractedAssociatedValuesForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractedAssociatedValuesForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractedAssociatedValuesForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  const GGS_extractedAssociatedValuesForGeneration_2E_element * p = (const GGS_extractedAssociatedValuesForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractedAssociatedValuesForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (const GGS_switchBranchesForGeneration_2E_element & inSource) :
mProperty_mSwitchConstantList (inSource.mProperty_mSwitchConstantList),
mProperty_mExtractedAssociatedValuesForGeneration (inSource.mProperty_mExtractedAssociatedValuesForGeneration),
mProperty_mEndOfBranchLocationIndex (inSource.mProperty_mEndOfBranchLocationIndex),
mProperty_mInstructions (inSource.mProperty_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element & GGS_switchBranchesForGeneration_2E_element::operator = (const GGS_switchBranchesForGeneration_2E_element & inSource) {
  mProperty_mSwitchConstantList = inSource.mProperty_mSwitchConstantList ;
  mProperty_mExtractedAssociatedValuesForGeneration = inSource.mProperty_mExtractedAssociatedValuesForGeneration ;
  mProperty_mEndOfBranchLocationIndex = inSource.mProperty_mEndOfBranchLocationIndex ;
  mProperty_mInstructions = inSource.mProperty_mInstructions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                             const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                             const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                             const GGS_semanticInstructionListForGeneration & in_mInstructions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                        const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                        const GGS_uint & inOperand2,
                                                                                        const GGS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructions (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                       const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                       const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                       const GGS_semanticInstructionListForGeneration & in_mInstructions,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchesForGeneration_2E_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchBranchesForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ("switchBranchesForGeneration.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchBranchesForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  const GGS_switchBranchesForGeneration_2E_element * p = (const GGS_switchBranchesForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element & GGS_syntaxInstructionListForGrammarAnalysis_2E_element::operator = (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element GGS_syntaxInstructionListForGrammarAnalysis_2E_element::init_21_ (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element GGS_syntaxInstructionListForGrammarAnalysis_2E_element::class_func_new (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxInstructionListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2E_element ("syntaxInstructionListForGrammarAnalysis.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element GGS_syntaxInstructionListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis_2E_element result ;
  const GGS_syntaxInstructionListForGrammarAnalysis_2E_element * p = (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (void) :
mProperty_mSyntaxInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (const GGS_branchListForGrammarAnalysis_2E_element & inSource) :
mProperty_mSyntaxInstructionList (inSource.mProperty_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element & GGS_branchListForGrammarAnalysis_2E_element::operator = (const GGS_branchListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mSyntaxInstructionList = inSource.mProperty_mSyntaxInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element GGS_branchListForGrammarAnalysis_2E_element::init_21_ (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0) :
mProperty_mSyntaxInstructionList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element GGS_branchListForGrammarAnalysis_2E_element::class_func_new (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_branchListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @branchListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @branchListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ("branchListForGrammarAnalysis.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element GGS_branchListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis_2E_element result ;
  const GGS_branchListForGrammarAnalysis_2E_element * p = (const GGS_branchListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (void) :
mProperty_columns () {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (const GGS_rowList_2E_element & inSource) :
mProperty_columns (inSource.mProperty_columns) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element & GGS_rowList_2E_element::operator = (const GGS_rowList_2E_element & inSource) {
  mProperty_columns = inSource.mProperty_columns ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::init_21_ (const GGS__32_stringlist & in_columns,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (const GGS__32_stringlist & inOperand0) :
mProperty_columns (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::class_func_new (const GGS__32_stringlist & in_columns,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_rowList_2E_element::isValid (void) const {
  return mProperty_columns.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::drop (void) {
  mProperty_columns.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @rowList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_columns.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @rowList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rowList_2E_element ("rowList.element",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rowList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rowList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rowList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  const GGS_rowList_2E_element * p = (const GGS_rowList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rowList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (const GGS_programListForGeneration_2E_element & inSource) :
mProperty_mDeclaration (inSource.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element & GGS_programListForGeneration_2E_element::operator = (const GGS_programListForGeneration_2E_element & inSource) {
  mProperty_mDeclaration = inSource.mProperty_mDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::init_21_ (const GGS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (const GGS_semanticDeclarationForGeneration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::class_func_new (const GGS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_programListForGeneration_2E_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @programListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @programListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration_2E_element ("programListForGeneration.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  const GGS_programListForGeneration_2E_element * p = (const GGS_programListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (void) :
mProperty_key (),
mProperty_mList () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_mList (inSource.mProperty_mList) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element & GGS_genericExtensionMethodListMapDictionary_2E_element::operator = (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_mList = inSource.mProperty_mList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element GGS_genericExtensionMethodListMapDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                                             const GGS_lstringlist & in_mList,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_string & inOperand0,
                                                                                                                const GGS_lstringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element GGS_genericExtensionMethodListMapDictionary_2E_element::class_func_new (const GGS_string & in_key,
                                                                                                                               const GGS_lstringlist & in_mList,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMapDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericExtensionMethodListMapDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @genericExtensionMethodListMapDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ("genericExtensionMethodListMapDictionary.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericExtensionMethodListMapDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericExtensionMethodListMapDictionary_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericExtensionMethodListMapDictionary_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element GGS_genericExtensionMethodListMapDictionary_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element result ;
  const GGS_genericExtensionMethodListMapDictionary_2E_element * p = (const GGS_genericExtensionMethodListMapDictionary_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericExtensionMethodListMapDictionary_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMapDictionary.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @genericExtensionMethodListMapDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::init_nil (void) {
  GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_genericExtensionMethodListMapDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::description (String & ioString,
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
//     @genericExtensionMethodListMapDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ("genericExtensionMethodListMapDictionary.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ result ;
  const GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ * p = (const GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMapDictionary.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (void) :
mProperty_mEntry () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (const GGS_unifiedTypeMapEntryList_2E_element & inSource) :
mProperty_mEntry (inSource.mProperty_mEntry) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element & GGS_unifiedTypeMapEntryList_2E_element::operator = (const GGS_unifiedTypeMapEntryList_2E_element & inSource) {
  mProperty_mEntry = inSource.mProperty_mEntry ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element GGS_unifiedTypeMapEntryList_2E_element::init_21_ (const GGS_unifiedTypeMapEntry & in_mEntry,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntry = in_mEntry ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_mEntry (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element GGS_unifiedTypeMapEntryList_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mEntry,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntry = in_mEntry ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntryList_2E_element::objectCompare (const GGS_unifiedTypeMapEntryList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEntry.objectCompare (inOperand.mProperty_mEntry) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntryList_2E_element::isValid (void) const {
  return mProperty_mEntry.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::drop (void) {
  mProperty_mEntry.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntryList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEntry.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapEntryList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ("unifiedTypeMapEntryList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntryList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntryList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntryList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element GGS_unifiedTypeMapEntryList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList_2E_element result ;
  const GGS_unifiedTypeMapEntryList_2E_element * p = (const GGS_unifiedTypeMapEntryList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntryList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (void) :
mProperty_key (),
mProperty_typeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (const GGS_descendantClassListMapDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_typeList (inSource.mProperty_typeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element & GGS_descendantClassListMapDictionary_2E_element::operator = (const GGS_descendantClassListMapDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_typeList = inSource.mProperty_typeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element GGS_descendantClassListMapDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                               const GGS_unifiedTypeMapEntryList & in_typeList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_typeList = in_typeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (const GGS_string & inOperand0,
                                                                                                  const GGS_unifiedTypeMapEntryList & inOperand1) :
mProperty_key (inOperand0),
mProperty_typeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element GGS_descendantClassListMapDictionary_2E_element::class_func_new (const GGS_string & in_key,
                                                                                                                 const GGS_unifiedTypeMapEntryList & in_typeList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_typeList = in_typeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMapDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_typeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_typeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @descendantClassListMapDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @descendantClassListMapDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ("descendantClassListMapDictionary.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_descendantClassListMapDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_descendantClassListMapDictionary_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_descendantClassListMapDictionary_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element GGS_descendantClassListMapDictionary_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element result ;
  const GGS_descendantClassListMapDictionary_2E_element * p = (const GGS_descendantClassListMapDictionary_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_descendantClassListMapDictionary_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMapDictionary.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @descendantClassListMapDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_::GGS_descendantClassListMapDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_::GGS_descendantClassListMapDictionary_2E_element_3F_ (const GGS_descendantClassListMapDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_ GGS_descendantClassListMapDictionary_2E_element_3F_::init_nil (void) {
  GGS_descendantClassListMapDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMapDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_descendantClassListMapDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_descendantClassListMapDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element_3F_::description (String & ioString,
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
//     @descendantClassListMapDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ("descendantClassListMapDictionary.element?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_descendantClassListMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_descendantClassListMapDictionary_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_descendantClassListMapDictionary_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_ GGS_descendantClassListMapDictionary_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element_3F_ result ;
  const GGS_descendantClassListMapDictionary_2E_element_3F_ * p = (const GGS_descendantClassListMapDictionary_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_descendantClassListMapDictionary_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMapDictionary.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess & GGS_AccessControlAST_2E_fileprivateAccess::operator = (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::class_func_new (const GGS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControlAST.fileprivateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ("AccessControlAST.fileprivateAccess",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  const GGS_AccessControlAST_2E_fileprivateAccess * p = (const GGS_AccessControlAST_2E_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControlAST_2E_fileprivateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST_2E_fileprivateAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::description (String & ioString,
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
//     @AccessControlAST.fileprivateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ("AccessControlAST.fileprivateAccess?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST_2E_fileprivateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  const GGS_AccessControlAST_2E_fileprivateAccess_3F_ * p = (const GGS_AccessControlAST_2E_fileprivateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess & GGS_AccessControlAST_2E_fileprivateSetAccess::operator = (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::class_func_new (const GGS_location & in_declarationLocation,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControlAST.fileprivateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ("AccessControlAST.fileprivateSetAccess",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  const GGS_AccessControlAST_2E_fileprivateSetAccess * p = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControlAST_2E_fileprivateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::description (String & ioString,
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
//     @AccessControlAST.fileprivateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ("AccessControlAST.fileprivateSetAccess?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ * p = (const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (const GGS_AccessControl_2E_protectedAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess & GGS_AccessControl_2E_protectedAccess::operator = (const GGS_AccessControl_2E_protectedAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.protectedAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ("AccessControl.protectedAccess",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  const GGS_AccessControl_2E_protectedAccess * p = (const GGS_AccessControl_2E_protectedAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_protectedAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (const GGS_AccessControl_2E_protectedAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl_2E_protectedAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_protectedAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::description (String & ioString,
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
//     @AccessControl.protectedAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ("AccessControl.protectedAccess?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl_2E_protectedAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  const GGS_AccessControl_2E_protectedAccess_3F_ * p = (const GGS_AccessControl_2E_protectedAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (const GGS_AccessControl_2E_protectedSetAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess & GGS_AccessControl_2E_protectedSetAccess::operator = (const GGS_AccessControl_2E_protectedSetAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.protectedSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ("AccessControl.protectedSetAccess",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  const GGS_AccessControl_2E_protectedSetAccess * p = (const GGS_AccessControl_2E_protectedSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_protectedSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (const GGS_AccessControl_2E_protectedSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl_2E_protectedSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.protectedSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ("AccessControl.protectedSetAccess?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl_2E_protectedSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  const GGS_AccessControl_2E_protectedSetAccess_3F_ * p = (const GGS_AccessControl_2E_protectedSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (const GGS_AccessControl_2E_privateAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess & GGS_AccessControl_2E_privateAccess::operator = (const GGS_AccessControl_2E_privateAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.privateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ("AccessControl.privateAccess",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  const GGS_AccessControl_2E_privateAccess * p = (const GGS_AccessControl_2E_privateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_privateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (const GGS_AccessControl_2E_privateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl_2E_privateAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_privateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::description (String & ioString,
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
//     @AccessControl.privateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ("AccessControl.privateAccess?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl_2E_privateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  const GGS_AccessControl_2E_privateAccess_3F_ * p = (const GGS_AccessControl_2E_privateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (const GGS_AccessControl_2E_privateSetAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess & GGS_AccessControl_2E_privateSetAccess::operator = (const GGS_AccessControl_2E_privateSetAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.privateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ("AccessControl.privateSetAccess",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  const GGS_AccessControl_2E_privateSetAccess * p = (const GGS_AccessControl_2E_privateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_privateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (const GGS_AccessControl_2E_privateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl_2E_privateSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.privateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ("AccessControl.privateSetAccess?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl_2E_privateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  const GGS_AccessControl_2E_privateSetAccess_3F_ * p = (const GGS_AccessControl_2E_privateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (const GGS_AccessControl_2E_fileprivateAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess & GGS_AccessControl_2E_fileprivateAccess::operator = (const GGS_AccessControl_2E_fileprivateAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::class_func_new (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.fileprivateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ("AccessControl.fileprivateAccess",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  const GGS_AccessControl_2E_fileprivateAccess * p = (const GGS_AccessControl_2E_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

