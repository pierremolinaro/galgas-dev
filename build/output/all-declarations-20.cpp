#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (void) :
mProperty_mSequenceNumber (),
mProperty_mMainGroupReference (),
mProperty_mMainGroupChildrenRefs (),
mProperty_mProjectObjectReference (),
mProperty_mGroupList (),
mProperty_mToolTargetList (),
mProperty_mAppTargetList (),
mProperty_mCFileList (),
mProperty_mCppFileList (),
mProperty_m_5F_M_5F_FileList (),
mProperty_m_5F_MM_5F_FileList (),
mProperty_mFrameworkFileList (),
mProperty_mHeaderFileList (),
mProperty_mBuildFileList (),
mProperty_mDefaultConfigurationRef (),
mProperty_mDefaultConfigurationSettingList (),
mProperty_mProjectBuildConfigurationRef (),
mProperty_mInfoPlistFileList (),
mProperty_mXIB_5F_fileList (),
mProperty_mTIFF_5F_fileList (),
mProperty_mICNS_5F_fileList (),
mProperty_mApplicationBundleName (),
mProperty_mProjectName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor::~ GALGAS_XcodeProjectDescriptor (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (const GALGAS_uint & inOperand0,
                                                              const GALGAS_string & inOperand1,
                                                              const GALGAS_stringlist & inOperand2,
                                                              const GALGAS_string & inOperand3,
                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                              const GALGAS__32_stringlist & inOperand7,
                                                              const GALGAS__32_stringlist & inOperand8,
                                                              const GALGAS__32_stringlist & inOperand9,
                                                              const GALGAS__32_stringlist & inOperand10,
                                                              const GALGAS__32_stringlist & inOperand11,
                                                              const GALGAS__32_stringlist & inOperand12,
                                                              const GALGAS_BuildFileList & inOperand13,
                                                              const GALGAS_string & inOperand14,
                                                              const GALGAS_stringlist & inOperand15,
                                                              const GALGAS_string & inOperand16,
                                                              const GALGAS__32_stringlist & inOperand17,
                                                              const GALGAS__32_stringlist & inOperand18,
                                                              const GALGAS__32_stringlist & inOperand19,
                                                              const GALGAS__32_stringlist & inOperand20,
                                                              const GALGAS_string & inOperand21,
                                                              const GALGAS_string & inOperand22) :
mProperty_mSequenceNumber (inOperand0),
mProperty_mMainGroupReference (inOperand1),
mProperty_mMainGroupChildrenRefs (inOperand2),
mProperty_mProjectObjectReference (inOperand3),
mProperty_mGroupList (inOperand4),
mProperty_mToolTargetList (inOperand5),
mProperty_mAppTargetList (inOperand6),
mProperty_mCFileList (inOperand7),
mProperty_mCppFileList (inOperand8),
mProperty_m_5F_M_5F_FileList (inOperand9),
mProperty_m_5F_MM_5F_FileList (inOperand10),
mProperty_mFrameworkFileList (inOperand11),
mProperty_mHeaderFileList (inOperand12),
mProperty_mBuildFileList (inOperand13),
mProperty_mDefaultConfigurationRef (inOperand14),
mProperty_mDefaultConfigurationSettingList (inOperand15),
mProperty_mProjectBuildConfigurationRef (inOperand16),
mProperty_mInfoPlistFileList (inOperand17),
mProperty_mXIB_5F_fileList (inOperand18),
mProperty_mTIFF_5F_fileList (inOperand19),
mProperty_mICNS_5F_fileList (inOperand20),
mProperty_mApplicationBundleName (inOperand21),
mProperty_mProjectName (inOperand22) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XcodeProjectDescriptor (GALGAS_uint::constructor_default (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_XCodeGroupList::constructor_emptyList (HERE),
                                        GALGAS_XCodeToolTargetList::constructor_emptyList (HERE),
                                        GALGAS_XCodeAppTargetList::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS_BuildFileList::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_new (const GALGAS_uint & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_stringlist & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                                              const GALGAS__32_stringlist & inOperand7,
                                                                              const GALGAS__32_stringlist & inOperand8,
                                                                              const GALGAS__32_stringlist & inOperand9,
                                                                              const GALGAS__32_stringlist & inOperand10,
                                                                              const GALGAS__32_stringlist & inOperand11,
                                                                              const GALGAS__32_stringlist & inOperand12,
                                                                              const GALGAS_BuildFileList & inOperand13,
                                                                              const GALGAS_string & inOperand14,
                                                                              const GALGAS_stringlist & inOperand15,
                                                                              const GALGAS_string & inOperand16,
                                                                              const GALGAS__32_stringlist & inOperand17,
                                                                              const GALGAS__32_stringlist & inOperand18,
                                                                              const GALGAS__32_stringlist & inOperand19,
                                                                              const GALGAS__32_stringlist & inOperand20,
                                                                              const GALGAS_string & inOperand21,
                                                                              const GALGAS_string & inOperand22 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid ()) {
    result = GALGAS_XcodeProjectDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XcodeProjectDescriptor::objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSequenceNumber.objectCompare (inOperand.mProperty_mSequenceNumber) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainGroupReference.objectCompare (inOperand.mProperty_mMainGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainGroupChildrenRefs.objectCompare (inOperand.mProperty_mMainGroupChildrenRefs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectObjectReference.objectCompare (inOperand.mProperty_mProjectObjectReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupList.objectCompare (inOperand.mProperty_mGroupList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToolTargetList.objectCompare (inOperand.mProperty_mToolTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAppTargetList.objectCompare (inOperand.mProperty_mAppTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCFileList.objectCompare (inOperand.mProperty_mCFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppFileList.objectCompare (inOperand.mProperty_mCppFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_M_5F_FileList.objectCompare (inOperand.mProperty_m_5F_M_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_MM_5F_FileList.objectCompare (inOperand.mProperty_m_5F_MM_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkFileList.objectCompare (inOperand.mProperty_mFrameworkFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHeaderFileList.objectCompare (inOperand.mProperty_mHeaderFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildFileList.objectCompare (inOperand.mProperty_mBuildFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultConfigurationRef.objectCompare (inOperand.mProperty_mDefaultConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultConfigurationSettingList.objectCompare (inOperand.mProperty_mDefaultConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectBuildConfigurationRef.objectCompare (inOperand.mProperty_mProjectBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfoPlistFileList.objectCompare (inOperand.mProperty_mInfoPlistFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXIB_5F_fileList.objectCompare (inOperand.mProperty_mXIB_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTIFF_5F_fileList.objectCompare (inOperand.mProperty_mTIFF_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mICNS_5F_fileList.objectCompare (inOperand.mProperty_mICNS_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mApplicationBundleName.objectCompare (inOperand.mProperty_mApplicationBundleName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectName.objectCompare (inOperand.mProperty_mProjectName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCFileList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () && mProperty_mApplicationBundleName.isValid () && mProperty_mProjectName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XcodeProjectDescriptor::drop (void) {
  mProperty_mSequenceNumber.drop () ;
  mProperty_mMainGroupReference.drop () ;
  mProperty_mMainGroupChildrenRefs.drop () ;
  mProperty_mProjectObjectReference.drop () ;
  mProperty_mGroupList.drop () ;
  mProperty_mToolTargetList.drop () ;
  mProperty_mAppTargetList.drop () ;
  mProperty_mCFileList.drop () ;
  mProperty_mCppFileList.drop () ;
  mProperty_m_5F_M_5F_FileList.drop () ;
  mProperty_m_5F_MM_5F_FileList.drop () ;
  mProperty_mFrameworkFileList.drop () ;
  mProperty_mHeaderFileList.drop () ;
  mProperty_mBuildFileList.drop () ;
  mProperty_mDefaultConfigurationRef.drop () ;
  mProperty_mDefaultConfigurationSettingList.drop () ;
  mProperty_mProjectBuildConfigurationRef.drop () ;
  mProperty_mInfoPlistFileList.drop () ;
  mProperty_mXIB_5F_fileList.drop () ;
  mProperty_mTIFF_5F_fileList.drop () ;
  mProperty_mICNS_5F_fileList.drop () ;
  mProperty_mApplicationBundleName.drop () ;
  mProperty_mProjectName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XcodeProjectDescriptor::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @XcodeProjectDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mApplicationBundleName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProjectName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@XcodeProjectDescriptor type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  const GALGAS_XcodeProjectDescriptor * p = (const GALGAS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addTIFF_file'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 30)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 31)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addInfoPlistFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 39)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 40)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addXIBFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 48)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 49)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addFrameworkFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 57)) ;
  }
  ioObject.mProperty_mFrameworkFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 58)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inFileName,
                               GALGAS_string & outArgument_outFileRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 66)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 67)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMMFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inFileName,
                                GALGAS_string & outArgument_outFileRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 75)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 76)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCppFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 84)) ;
  }
  ioObject.mProperty_mCppFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 85)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inFileName,
                               GALGAS_string & outArgument_outFileRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 93)) ;
  }
  ioObject.mProperty_mCFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 94)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 102)) ;
  }
  ioObject.mProperty_mHeaderFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 103)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addBuildFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileReference,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outBuildRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 112)) ;
  }
  ioObject.mProperty_mBuildFileList.addAssign_operation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 113)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addToolTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inTargetName,
                                    const GALGAS_string constinArgument_inProductFileName,
                                    const GALGAS_stringlist constinArgument_inSourceList,
                                    const GALGAS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GALGAS_string & outArgument_outTargetRef,
                                    GALGAS_string & outArgument_outProductFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 126)) ;
  }
  GALGAS_string var_buildPhaseRef_5105 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5105, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 127)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 128)) ;
  }
  GALGAS_string var_buildConfigurationListRef_5212 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5212, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 129)) ;
  }
  GALGAS_string var_buildConfigurationRef_5270 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5270, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 130)) ;
  }
  GALGAS_string var_frameworkBuildRef_5324 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5324, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 131)) ;
  }
  ioObject.mProperty_mToolTargetList.addAssign_operation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5105, var_buildConfigurationListRef_5212, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5270, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_5324  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 132)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addAppTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inTargetName,
                                   const GALGAS_string constinArgument_inProductFileName,
                                   const GALGAS_stringlist constinArgument_inSourceList,
                                   const GALGAS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GALGAS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GALGAS_stringlist constinArgument_inDependentTargetRefList,
                                   const GALGAS__32_stringlist constinArgument_inProductCopyList,
                                   GALGAS_string & outArgument_outProductFileRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 158)) ;
  }
  GALGAS_string var_buildPhaseRef_6383 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_6383, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 159)) ;
  }
  GALGAS_string var_targetRef_6429 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_6429, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 160)) ;
  }
  GALGAS_string var_buildConfigurationListRef_6491 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_6491, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 161)) ;
  }
  GALGAS_string var_buildConfigurationRef_6549 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_6549, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 162)) ;
  }
  GALGAS_string var_frameworkBuildRef_6603 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_6603, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 163)) ;
  }
  GALGAS_string var_resourceBuildRef_6656 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_6656, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 164)) ;
  }
  GALGAS__32_stringlist var_dependentTargets_6693 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 165)) ;
  cEnumerator_stringlist enumerator_6709 (constinArgument_inDependentTargetRefList, kENUMERATION_UP) ;
  while (enumerator_6709.hasCurrentObject ()) {
    GALGAS_string var_dependencyBuildRef_6797 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_6797, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 167)) ;
    }
    var_dependentTargets_6693.addAssign_operation (var_dependencyBuildRef_6797, enumerator_6709.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 168)) ;
    enumerator_6709.gotoNextObject () ;
  }
  GALGAS_stringlist var_resourceFileBuildRefs_6893 = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_6935 (constinArgument_inProductCopyList, kENUMERATION_UP) ;
  while (enumerator_6935.hasCurrentObject ()) {
    GALGAS_string var_buildRef_7044 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_6935.current_mValue_30_ (HERE), enumerator_6935.current_mValue_31_ (HERE), var_buildRef_7044, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 172)) ;
    }
    var_resourceFileBuildRefs_6893.addAssign_operation (var_buildRef_7044  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 173)) ;
    enumerator_6935.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.addAssign_operation (var_targetRef_6429, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_6383, var_buildConfigurationListRef_6491, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_6549, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_6603, var_dependentTargets_6693, var_resourceBuildRef_6656, var_resourceFileBuildRefs_6893  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 175)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inGroupName,
                               const GALGAS_string constinArgument_inGroupPath,
                               const GALGAS_stringlist constinArgument_inChildrenRefs,
                               GALGAS_string & outArgument_outGroupRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 201)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 204)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.readProperty_mMainGroupReference ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 207)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 209)) ;
  }
  ioObject.mProperty_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 210)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroupWithFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GALGAS_XcodeProjectDescriptor & ioObject,
                                        const GALGAS_string constinArgument_inGroupName,
                                        const GALGAS_string constinArgument_inGroupPath,
                                        const GALGAS_stringset constinArgument_inFileNames,
                                        GALGAS_stringlist & ioArgument_ioCFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioMFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioMMFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioResourceFileBuildRefs,
                                        GALGAS_string & outArgument_outGroupRef,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 227)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 230)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.readProperty_mMainGroupReference ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 233)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 235)) ;
  }
  GALGAS_stringlist var_childrenRefs_9282 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 237)) ;
  cEnumerator_stringset enumerator_9296 (constinArgument_inFileNames, kENUMERATION_UP) ;
  while (enumerator_9296.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 239)).objectCompare (GALGAS_string ("c"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_cFileRef_9417 ;
        {
        extensionSetter_addCFile (ioObject, enumerator_9296.current_key (HERE), var_cFileRef_9417, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 240)) ;
        }
        var_childrenRefs_9282.addAssign_operation (var_cFileRef_9417  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 241)) ;
        GALGAS_string var_buildRef_9538 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cFileRef_9417, enumerator_9296.current_key (HERE), var_buildRef_9538, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 242)) ;
        }
        ioArgument_ioCFileBuildRefs.addAssign_operation (var_buildRef_9538  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 243)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 244)).objectCompare (GALGAS_string ("cpp"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_string var_cppFileRef_9686 ;
          {
          extensionSetter_addCppFile (ioObject, enumerator_9296.current_key (HERE), var_cppFileRef_9686, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 245)) ;
          }
          var_childrenRefs_9282.addAssign_operation (var_cppFileRef_9686  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 246)) ;
          GALGAS_string var_buildRef_9811 ;
          {
          extensionSetter_addBuildFile (ioObject, var_cppFileRef_9686, enumerator_9296.current_key (HERE), var_buildRef_9811, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 247)) ;
          }
          ioArgument_ioCppFileBuildRefs.addAssign_operation (var_buildRef_9811  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 248)) ;
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 249)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_string var_headerFileRef_9965 ;
            {
            extensionSetter_addHeaderFile (ioObject, enumerator_9296.current_key (HERE), var_headerFileRef_9965, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 250)) ;
            }
            var_childrenRefs_9282.addAssign_operation (var_headerFileRef_9965  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 251)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 252)).objectCompare (GALGAS_string ("m"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_string var_m_5F_FileRef_10109 ;
              {
              extensionSetter_addMFile (ioObject, enumerator_9296.current_key (HERE), var_m_5F_FileRef_10109, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 253)) ;
              }
              GALGAS_string var_buildRef_10199 ;
              {
              extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_10109, enumerator_9296.current_key (HERE), var_buildRef_10199, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 254)) ;
              }
              var_childrenRefs_9282.addAssign_operation (var_m_5F_FileRef_10109  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 255)) ;
              ioArgument_ioMFileBuildRefs.addAssign_operation (var_buildRef_10199  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 256)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 257)).objectCompare (GALGAS_string ("mm"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_string var_m_5F_FileRef_10377 ;
                {
                extensionSetter_addMMFile (ioObject, enumerator_9296.current_key (HERE), var_m_5F_FileRef_10377, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 258)) ;
                }
                GALGAS_string var_buildRef_10467 ;
                {
                extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_10377, enumerator_9296.current_key (HERE), var_buildRef_10467, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 259)) ;
                }
                var_childrenRefs_9282.addAssign_operation (var_m_5F_FileRef_10377  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 260)) ;
                ioArgument_ioMMFileBuildRefs.addAssign_operation (var_buildRef_10467  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 261)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 262)).objectCompare (GALGAS_string ("framework"))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string var_framework_5F_FileRef_10668 ;
                  {
                  extensionSetter_addFrameworkFile (ioObject, enumerator_9296.current_key (HERE), var_framework_5F_FileRef_10668, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 263)) ;
                  }
                  GALGAS_string var_buildRef_10766 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10668, enumerator_9296.current_key (HERE), var_buildRef_10766, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 264)) ;
                  }
                  var_childrenRefs_9282.addAssign_operation (var_framework_5F_FileRef_10668  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 265)) ;
                  ioArgument_ioFrameWorkFileBuildRefs.addAssign_operation (var_buildRef_10766  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 266)) ;
                }
              }
              if (kBoolFalse == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 267)).objectCompare (GALGAS_string ("plist"))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    GALGAS_string var_resource_5F_FileRef_10977 ;
                    {
                    extensionSetter_addInfoPlistFile (ioObject, enumerator_9296.current_key (HERE), var_resource_5F_FileRef_10977, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 268)) ;
                    }
                    var_childrenRefs_9282.addAssign_operation (var_resource_5F_FileRef_10977  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 269)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 270)).objectCompare (GALGAS_string ("xib"))).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      GALGAS_string var_resource_5F_FileRef_11135 ;
                      {
                      extensionSetter_addXIBFile (ioObject, enumerator_9296.current_key (HERE), var_resource_5F_FileRef_11135, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 271)) ;
                      }
                      var_childrenRefs_9282.addAssign_operation (var_resource_5F_FileRef_11135  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 272)) ;
                      GALGAS_string var_buildRef_11272 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11135, enumerator_9296.current_key (HERE), var_buildRef_11272, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_11272  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 274)) ;
                    }
                  }
                  if (kBoolFalse == test_13) {
                    enumGalgasBool test_14 = kBoolTrue ;
                    if (kBoolTrue == test_14) {
                      test_14 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 275)).objectCompare (GALGAS_string ("tiff"))).boolEnum () ;
                      if (kBoolTrue == test_14) {
                        GALGAS_string var_resource_5F_FileRef_11436 ;
                        {
                        extensionSetter_addTIFF_5F_file (ioObject, enumerator_9296.current_key (HERE), var_resource_5F_FileRef_11436, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 276)) ;
                        }
                        var_childrenRefs_9282.addAssign_operation (var_resource_5F_FileRef_11436  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 277)) ;
                        GALGAS_string var_buildRef_11573 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11436, enumerator_9296.current_key (HERE), var_buildRef_11573, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 278)) ;
                        }
                        ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_11573  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 279)) ;
                      }
                    }
                    if (kBoolFalse == test_14) {
                      enumGalgasBool test_15 = kBoolTrue ;
                      if (kBoolTrue == test_15) {
                        test_15 = GALGAS_bool (kIsEqual, enumerator_9296.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)).objectCompare (GALGAS_string ("icns"))).boolEnum () ;
                        if (kBoolTrue == test_15) {
                          GALGAS_string var_resource_5F_FileRef_11737 ;
                          {
                          extensionSetter_addICNS_5F_file (ioObject, enumerator_9296.current_key (HERE), var_resource_5F_FileRef_11737, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 281)) ;
                          }
                          var_childrenRefs_9282.addAssign_operation (var_resource_5F_FileRef_11737  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 282)) ;
                          GALGAS_string var_buildRef_11874 ;
                          {
                          extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11737, enumerator_9296.current_key (HERE), var_buildRef_11874, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 283)) ;
                          }
                          ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_11874  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 284)) ;
                        }
                      }
                      if (kBoolFalse == test_15) {
                        TC_Array <C_FixItDescription> fixItArray16 ;
                        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 286)), GALGAS_string ("unhandled extension for file '").add_operation (enumerator_9296.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 286)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 286)), fixItArray16  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 286)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_9296.gotoNextObject () ;
  }
  ioObject.mProperty_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_9282  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 289)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                            const GALGAS_string constinArgument_inGroupRef,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mMainGroupChildrenRefs.addAssign_operation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 296)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GALGAS_XcodeProjectDescriptor & ioObject,
                                                        const GALGAS_stringlist constinArgument_inSettingList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssign_operation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 303)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor getReferenceKey'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (GALGAS_XcodeProjectDescriptor & ioObject,
                                      GALGAS_string & outArgument_outRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mProjectObjectReference ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_XcodeProjectDescriptor temp_2 = ioObject ;
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 363)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 363)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 363)) ;
      ioObject.mProperty_mSequenceNumber.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 364)) ;
    }
  }
  const GALGAS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 366)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 366)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 366)) ;
  ioObject.mProperty_mSequenceNumber.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 367)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const GALGAS_XcodeProjectDescriptor inObject,
                                     const GALGAS_string constinArgument_inPath,
                                     const GALGAS_string constinArgument_inCacheFilePath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_XcodeProjectDescriptor temp_0 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_1 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_2 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_3 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_4 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_5 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_6 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_7 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_8 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_9 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_10 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_11 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_12 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_13 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_14 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_15 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_16 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_17 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_18 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_19 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_20 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_21 = inObject ;
  GALGAS_string var_contents_17574 = GALGAS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCFileList (), temp_7.readProperty_mCppFileList (), temp_8.readProperty_m_5F_M_5F_FileList (), temp_9.readProperty_m_5F_MM_5F_FileList (), temp_10.readProperty_mFrameworkFileList (), temp_11.readProperty_mHeaderFileList (), temp_12.readProperty_mInfoPlistFileList (), temp_13.readProperty_mTIFF_5F_fileList (), temp_14.readProperty_mICNS_5F_fileList (), temp_15.readProperty_mXIB_5F_fileList (), temp_16.readProperty_mBuildFileList (), temp_17.readProperty_mDefaultConfigurationRef (), temp_18.readProperty_mDefaultConfigurationSettingList (), temp_19.readProperty_mProjectBuildConfigurationRef (), temp_20.readProperty_mApplicationBundleName (), temp_21.readProperty_mProjectName () COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 436))) ;
  GALGAS_string var_projectCoreFile_18276 = constinArgument_inPath.add_operation (GALGAS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 460)) ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    GALGAS_bool test_23 = var_projectCoreFile_18276.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 461)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 461)) ;
    if (kBoolTrue != test_23.boolEnum ()) {
      test_23 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 461)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 461)) ;
    }
    GALGAS_bool test_24 = test_23 ;
    if (kBoolTrue != test_24.boolEnum ()) {
      test_24 = GALGAS_bool (kIsNotEqual, GALGAS_string::constructor_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 461)).objectCompare (var_contents_17574)) ;
    }
    test_22 = test_24.boolEnum () ;
    if (kBoolTrue == test_22) {
      GALGAS_bool joker_18526 ; // Joker input parameter
      var_contents_17574.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18526, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 462)) ;
      var_contents_17574.method_makeDirectoryAndWriteToFile (var_projectCoreFile_18276, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 463)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST_2D_element::GALGAS_templateExpressionListAST_2D_element (void) :
mProperty_mActualSelector (),
mProperty_mExpression (),
mProperty_mEndOfExpressionLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST_2D_element::~ GALGAS_templateExpressionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST_2D_element::GALGAS_templateExpressionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_templateExpressionAST & inOperand1,
                                                                                          const GALGAS_location & inOperand2) :
mProperty_mActualSelector (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mEndOfExpressionLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST_2D_element GALGAS_templateExpressionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_templateExpressionAST & inOperand1,
                                                                                                          const GALGAS_location & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateExpressionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateExpressionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateExpressionListAST_2D_element::objectCompare (const GALGAS_templateExpressionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActualSelector.objectCompare (inOperand.mProperty_mActualSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfExpressionLocation.objectCompare (inOperand.mProperty_mEndOfExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateExpressionListAST_2D_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mExpression.isValid () && mProperty_mEndOfExpressionLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST_2D_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpressionLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @templateExpressionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActualSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateExpressionListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExpressionListAST_2D_element ("templateExpressionListAST-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExpressionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExpressionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExpressionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST_2D_element GALGAS_templateExpressionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionListAST_2D_element result ;
  const GALGAS_templateExpressionListAST_2D_element * p = (const GALGAS_templateExpressionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExpressionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element::GALGAS_templateVariableMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mCppName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element::~ GALGAS_templateVariableMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element::GALGAS_templateVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                              const GALGAS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCppName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateVariableMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                              const GALGAS_string & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateVariableMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateVariableMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateVariableMap_2D_element::objectCompare (const GALGAS_templateVariableMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateVariableMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @templateVariableMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateVariableMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVariableMap_2D_element ("templateVariableMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateVariableMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateVariableMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVariableMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap_2D_element result ;
  const GALGAS_templateVariableMap_2D_element * p = (const GALGAS_templateVariableMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVariableMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element::GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) :
mProperty_mStartString (),
mProperty_mOptionList (),
mProperty_mEndString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element::~ GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element::GALGAS_metamodelTemplateDelimitorListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2) :
mProperty_mStartString (inOperand0),
mProperty_mOptionList (inOperand1),
mProperty_mEndString (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element GALGAS_metamodelTemplateDelimitorListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_metamodelTemplateDelimitorListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element GALGAS_metamodelTemplateDelimitorListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_metamodelTemplateDelimitorListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_metamodelTemplateDelimitorListAST_2D_element::objectCompare (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStartString.objectCompare (inOperand.mProperty_mStartString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionList.objectCompare (inOperand.mProperty_mOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndString.objectCompare (inOperand.mProperty_mEndString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_metamodelTemplateDelimitorListAST_2D_element::isValid (void) const {
  return mProperty_mStartString.isValid () && mProperty_mOptionList.isValid () && mProperty_mEndString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST_2D_element::drop (void) {
  mProperty_mStartString.drop () ;
  mProperty_mOptionList.drop () ;
  mProperty_mEndString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @metamodelTemplateDelimitorListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStartString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@metamodelTemplateDelimitorListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST_2D_element ("metamodelTemplateDelimitorListAST-element",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_metamodelTemplateDelimitorListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_metamodelTemplateDelimitorListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_metamodelTemplateDelimitorListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element GALGAS_metamodelTemplateDelimitorListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST_2D_element result ;
  const GALGAS_metamodelTemplateDelimitorListAST_2D_element * p = (const GALGAS_metamodelTemplateDelimitorListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_metamodelTemplateDelimitorListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("metamodelTemplateDelimitorListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element::GALGAS_templateReplacementListAST_2D_element (void) :
mProperty_mMatchString (),
mProperty_mReplacementString (),
mProperty_mReplacementFunction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element::~ GALGAS_templateReplacementListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element::GALGAS_templateReplacementListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2) :
mProperty_mMatchString (inOperand0),
mProperty_mReplacementString (inOperand1),
mProperty_mReplacementFunction (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element GALGAS_templateReplacementListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateReplacementListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element GALGAS_templateReplacementListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateReplacementListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateReplacementListAST_2D_element::objectCompare (const GALGAS_templateReplacementListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMatchString.objectCompare (inOperand.mProperty_mMatchString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReplacementString.objectCompare (inOperand.mProperty_mReplacementString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReplacementFunction.objectCompare (inOperand.mProperty_mReplacementFunction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateReplacementListAST_2D_element::isValid (void) const {
  return mProperty_mMatchString.isValid () && mProperty_mReplacementString.isValid () && mProperty_mReplacementFunction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST_2D_element::drop (void) {
  mProperty_mMatchString.drop () ;
  mProperty_mReplacementString.drop () ;
  mProperty_mReplacementFunction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @templateReplacementListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMatchString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReplacementString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReplacementFunction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateReplacementListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReplacementListAST_2D_element ("templateReplacementListAST-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateReplacementListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateReplacementListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReplacementListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element GALGAS_templateReplacementListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST_2D_element result ;
  const GALGAS_templateReplacementListAST_2D_element * p = (const GALGAS_templateReplacementListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateReplacementListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element::GALGAS_lexicalMessageDeclarationListAST_2D_element (void) :
mProperty_mMessageName (),
mProperty_mMessageValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element::~ GALGAS_lexicalMessageDeclarationListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element::GALGAS_lexicalMessageDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1) :
mProperty_mMessageName (inOperand0),
mProperty_mMessageValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element GALGAS_lexicalMessageDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalMessageDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element GALGAS_lexicalMessageDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalMessageDeclarationListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalMessageDeclarationListAST_2D_element::objectCompare (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMessageName.objectCompare (inOperand.mProperty_mMessageName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMessageValue.objectCompare (inOperand.mProperty_mMessageValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalMessageDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mMessageName.isValid () && mProperty_mMessageValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST_2D_element::drop (void) {
  mProperty_mMessageName.drop () ;
  mProperty_mMessageValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @lexicalMessageDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMessageName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMessageValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalMessageDeclarationListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ("lexicalMessageDeclarationListAST-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element GALGAS_lexicalMessageDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST_2D_element result ;
  const GALGAS_lexicalMessageDeclarationListAST_2D_element * p = (const GALGAS_lexicalMessageDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element::GALGAS_lexicalAttributeListAST_2D_element (void) :
mProperty_mTypeName (),
mProperty_mName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element::~ GALGAS_lexicalAttributeListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element::GALGAS_lexicalAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element GALGAS_lexicalAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element GALGAS_lexicalAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalAttributeListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalAttributeListAST_2D_element::objectCompare (const GALGAS_lexicalAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalAttributeListAST_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @lexicalAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeListAST_2D_element ("lexicalAttributeListAST-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element GALGAS_lexicalAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST_2D_element result ;
  const GALGAS_lexicalAttributeListAST_2D_element * p = (const GALGAS_lexicalAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element::GALGAS_lexicalStyleListAST_2D_element (void) :
mProperty_mName (),
mProperty_mComment () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element::~ GALGAS_lexicalStyleListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element::GALGAS_lexicalStyleListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mName (inOperand0),
mProperty_mComment (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element GALGAS_lexicalStyleListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalStyleListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element GALGAS_lexicalStyleListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalStyleListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalStyleListAST_2D_element::objectCompare (const GALGAS_lexicalStyleListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mComment.objectCompare (inOperand.mProperty_mComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalStyleListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mComment.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mComment.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @lexicalStyleListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStyleListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStyleListAST_2D_element ("lexicalStyleListAST-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStyleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStyleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStyleListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element GALGAS_lexicalStyleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST_2D_element result ;
  const GALGAS_lexicalStyleListAST_2D_element * p = (const GALGAS_lexicalStyleListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStyleListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element::GALGAS_terminalDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mSentAttributeList (),
mProperty_mSyntaxErrorMessage (),
mProperty_mStyle (),
mProperty_mOptionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element::~ GALGAS_terminalDeclarationListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element::GALGAS_terminalDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_lstringlist & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mSentAttributeList (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_mStyle (inOperand3),
mProperty_mOptionList (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element GALGAS_terminalDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_sentLexicalAttributeListAST::constructor_emptyList (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element GALGAS_terminalDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2,
                                                                                                            const GALGAS_lstring & inOperand3,
                                                                                                            const GALGAS_lstringlist & inOperand4 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_terminalDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalDeclarationListAST_2D_element::objectCompare (const GALGAS_terminalDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSentAttributeList.objectCompare (inOperand.mProperty_mSentAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxErrorMessage.objectCompare (inOperand.mProperty_mSyntaxErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStyle.objectCompare (inOperand.mProperty_mStyle) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionList.objectCompare (inOperand.mProperty_mOptionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_mStyle.isValid () && mProperty_mOptionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_mStyle.drop () ;
  mProperty_mOptionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @terminalDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStyle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@terminalDeclarationListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalDeclarationListAST_2D_element ("terminalDeclarationListAST-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element GALGAS_terminalDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST_2D_element result ;
  const GALGAS_terminalDeclarationListAST_2D_element * p = (const GALGAS_terminalDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element::GALGAS_lexicalListEntryListAST_2D_element (void) :
mProperty_mEntrySpelling (),
mProperty_mTerminalSpelling (),
mProperty_mAttributeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element::~ GALGAS_lexicalListEntryListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element::GALGAS_lexicalListEntryListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2) :
mProperty_mEntrySpelling (inOperand0),
mProperty_mTerminalSpelling (inOperand1),
mProperty_mAttributeList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element GALGAS_lexicalListEntryListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListEntryListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element GALGAS_lexicalListEntryListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalListEntryListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalListEntryListAST_2D_element::objectCompare (const GALGAS_lexicalListEntryListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEntrySpelling.objectCompare (inOperand.mProperty_mEntrySpelling) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalSpelling.objectCompare (inOperand.mProperty_mTerminalSpelling) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalListEntryListAST_2D_element::isValid (void) const {
  return mProperty_mEntrySpelling.isValid () && mProperty_mTerminalSpelling.isValid () && mProperty_mAttributeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST_2D_element::drop (void) {
  mProperty_mEntrySpelling.drop () ;
  mProperty_mTerminalSpelling.drop () ;
  mProperty_mAttributeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @lexicalListEntryListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEntrySpelling.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalSpelling.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalListEntryListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ("lexicalListEntryListAST-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListEntryListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element GALGAS_lexicalListEntryListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST_2D_element result ;
  const GALGAS_lexicalListEntryListAST_2D_element * p = (const GALGAS_lexicalListEntryListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListEntryListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element::GALGAS_sentLexicalAttributeListAST_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mAttributeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element::~ GALGAS_sentLexicalAttributeListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element::GALGAS_sentLexicalAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mFormalSelector (inOperand0),
mProperty_mAttributeName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element GALGAS_sentLexicalAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sentLexicalAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element GALGAS_sentLexicalAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sentLexicalAttributeListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sentLexicalAttributeListAST_2D_element::objectCompare (const GALGAS_sentLexicalAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_sentLexicalAttributeListAST_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mAttributeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mAttributeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @sentLexicalAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sentLexicalAttributeListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ("sentLexicalAttributeListAST-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element GALGAS_sentLexicalAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST_2D_element result ;
  const GALGAS_sentLexicalAttributeListAST_2D_element * p = (const GALGAS_sentLexicalAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sentLexicalAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element::GALGAS_lexicalListDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mStyle (),
mProperty_mSyntaxErrorMessage (),
mProperty_mSentAttributeList (),
mProperty_mEntryList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element::~ GALGAS_lexicalListDeclarationListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element::GALGAS_lexicalListDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                  const GALGAS_lexicalListEntryListAST & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mStyle (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_mSentAttributeList (inOperand3),
mProperty_mEntryList (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element GALGAS_lexicalListDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_sentLexicalAttributeListAST::constructor_emptyList (HERE),
                                                          GALGAS_lexicalListEntryListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element GALGAS_lexicalListDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                                  const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                                  const GALGAS_lexicalListEntryListAST & inOperand4 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexicalListDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalListDeclarationListAST_2D_element::objectCompare (const GALGAS_lexicalListDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStyle.objectCompare (inOperand.mProperty_mStyle) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxErrorMessage.objectCompare (inOperand.mProperty_mSyntaxErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSentAttributeList.objectCompare (inOperand.mProperty_mSentAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEntryList.objectCompare (inOperand.mProperty_mEntryList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalListDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mStyle.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mEntryList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mStyle.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mEntryList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @lexicalListDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStyle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEntryList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalListDeclarationListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ("lexicalListDeclarationListAST-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element GALGAS_lexicalListDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST_2D_element result ;
  const GALGAS_lexicalListDeclarationListAST_2D_element * p = (const GALGAS_lexicalListDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element::GALGAS_lexicalSendSearchListAST_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mSearchListName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element::~ GALGAS_lexicalSendSearchListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element::GALGAS_lexicalSendSearchListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mSearchListName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element GALGAS_lexicalSendSearchListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSendSearchListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element GALGAS_lexicalSendSearchListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSendSearchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalSendSearchListAST_2D_element::objectCompare (const GALGAS_lexicalSendSearchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSearchListName.objectCompare (inOperand.mProperty_mSearchListName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalSendSearchListAST_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mSearchListName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mSearchListName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @lexicalSendSearchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSearchListName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendSearchListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ("lexicalSendSearchListAST-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendSearchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendSearchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendSearchListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element GALGAS_lexicalSendSearchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST_2D_element result ;
  const GALGAS_lexicalSendSearchListAST_2D_element * p = (const GALGAS_lexicalSendSearchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendSearchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) :
mProperty_mPassingMode (),
mProperty_mLexicalTypeName (),
mProperty_mFormalArgumentName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::~ GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2) :
mProperty_mPassingMode (inOperand0),
mProperty_mLexicalTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::constructor_new (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                                          const GALGAS_lstring & inOperand2 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPassingMode.objectCompare (inOperand.mProperty_mPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalTypeName.objectCompare (inOperand.mProperty_mLexicalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mPassingMode.isValid () && mProperty_mLexicalTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::drop (void) {
  mProperty_mPassingMode.drop () ;
  mProperty_mLexicalTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalExternRoutineFormalArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExternRoutineFormalArgumentListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element ("lexicalExternRoutineFormalArgumentListAST-element",
                                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element result ;
  const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element * p = (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternRoutineFormalArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST_2D_element::GALGAS_externRoutineListAST_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mLexicalRoutineFormalArgumentList (),
mProperty_mErrorMessageList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST_2D_element::~ GALGAS_externRoutineListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST_2D_element::GALGAS_externRoutineListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                const GALGAS_stringlist & inOperand2) :
mProperty_mRoutineName (inOperand0),
mProperty_mLexicalRoutineFormalArgumentList (inOperand1),
mProperty_mErrorMessageList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST_2D_element GALGAS_externRoutineListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externRoutineListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (HERE),
                                                 GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST_2D_element GALGAS_externRoutineListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                                const GALGAS_stringlist & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externRoutineListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externRoutineListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externRoutineListAST_2D_element::objectCompare (const GALGAS_externRoutineListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalRoutineFormalArgumentList.objectCompare (inOperand.mProperty_mLexicalRoutineFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessageList.objectCompare (inOperand.mProperty_mErrorMessageList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_externRoutineListAST_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mLexicalRoutineFormalArgumentList.isValid () && mProperty_mErrorMessageList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineListAST_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mLexicalRoutineFormalArgumentList.drop () ;
  mProperty_mErrorMessageList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineListAST_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externRoutineListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externRoutineListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineListAST_2D_element ("externRoutineListAST-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externRoutineListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externRoutineListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST_2D_element GALGAS_externRoutineListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineListAST_2D_element result ;
  const GALGAS_externRoutineListAST_2D_element * p = (const GALGAS_externRoutineListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) :
mProperty_mLexicalTypeName (),
mProperty_mFormalArgumentName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::~ GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_lstring & inOperand1) :
mProperty_mLexicalTypeName (inOperand0),
mProperty_mFormalArgumentName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                            const GALGAS_lstring & inOperand1 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexicalTypeName.objectCompare (inOperand.mProperty_mLexicalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mLexicalTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::drop (void) {
  mProperty_mLexicalTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @lexicalExternFunctionFormalArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexicalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExternFunctionFormalArgumentListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element ("lexicalExternFunctionFormalArgumentListAST-element",
                                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element result ;
  const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element * p = (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternFunctionFormalArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST_2D_element::GALGAS_externFunctionListAST_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mLexicalFunctionFormalArgumentList (),
mProperty_mReturnedTypeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST_2D_element::~ GALGAS_externFunctionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST_2D_element::GALGAS_externFunctionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2) :
mProperty_mFunctionName (inOperand0),
mProperty_mLexicalFunctionFormalArgumentList (inOperand1),
mProperty_mReturnedTypeName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST_2D_element GALGAS_externFunctionListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (HERE),
                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST_2D_element GALGAS_externFunctionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externFunctionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externFunctionListAST_2D_element::objectCompare (const GALGAS_externFunctionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalFunctionFormalArgumentList.objectCompare (inOperand.mProperty_mLexicalFunctionFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedTypeName.objectCompare (inOperand.mProperty_mReturnedTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_externFunctionListAST_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mLexicalFunctionFormalArgumentList.isValid () && mProperty_mReturnedTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mLexicalFunctionFormalArgumentList.drop () ;
  mProperty_mReturnedTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externFunctionListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @externFunctionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externFunctionListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionListAST_2D_element ("externFunctionListAST-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST_2D_element GALGAS_externFunctionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionListAST_2D_element result ;
  const GALGAS_externFunctionListAST_2D_element * p = (const GALGAS_externFunctionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element::GALGAS_indexingListAST_2D_element (void) :
mProperty_mIndexName (),
mProperty_mIndexComment () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element::~ GALGAS_indexingListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element::GALGAS_indexingListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mIndexName (inOperand0),
mProperty_mIndexComment (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element GALGAS_indexingListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_indexingListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element GALGAS_indexingListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_indexingListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_indexingListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_indexingListAST_2D_element::objectCompare (const GALGAS_indexingListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIndexName.objectCompare (inOperand.mProperty_mIndexName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndexComment.objectCompare (inOperand.mProperty_mIndexComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_indexingListAST_2D_element::isValid (void) const {
  return mProperty_mIndexName.isValid () && mProperty_mIndexComment.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST_2D_element::drop (void) {
  mProperty_mIndexName.drop () ;
  mProperty_mIndexComment.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @indexingListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIndexName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndexComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@indexingListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_indexingListAST_2D_element ("indexingListAST-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_indexingListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_indexingListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_indexingListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element GALGAS_indexingListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST_2D_element result ;
  const GALGAS_indexingListAST_2D_element * p = (const GALGAS_indexingListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_indexingListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indexingListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList_2D_element::GALGAS_lexicalSentValueList_2D_element (void) :
mProperty_mLexicalFormalSelector (),
mProperty_mLexicalAttributeName (),
mProperty_mLexicalType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList_2D_element::~ GALGAS_lexicalSentValueList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList_2D_element::GALGAS_lexicalSentValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_lexicalTypeEnum & inOperand2) :
mProperty_mLexicalFormalSelector (inOperand0),
mProperty_mLexicalAttributeName (inOperand1),
mProperty_mLexicalType (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList_2D_element GALGAS_lexicalSentValueList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_lexicalTypeEnum & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalSentValueList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalSentValueList_2D_element::objectCompare (const GALGAS_lexicalSentValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexicalFormalSelector.objectCompare (inOperand.mProperty_mLexicalFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalAttributeName.objectCompare (inOperand.mProperty_mLexicalAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalType.objectCompare (inOperand.mProperty_mLexicalType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalSentValueList_2D_element::isValid (void) const {
  return mProperty_mLexicalFormalSelector.isValid () && mProperty_mLexicalAttributeName.isValid () && mProperty_mLexicalType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList_2D_element::drop (void) {
  mProperty_mLexicalFormalSelector.drop () ;
  mProperty_mLexicalAttributeName.drop () ;
  mProperty_mLexicalType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @lexicalSentValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexicalFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSentValueList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ("lexicalSentValueList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSentValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSentValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSentValueList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList_2D_element GALGAS_lexicalSentValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList_2D_element result ;
  const GALGAS_lexicalSentValueList_2D_element * p = (const GALGAS_lexicalSentValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSentValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSentValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element::GALGAS_terminalMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSentAttributeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element::~ GALGAS_terminalMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element::GALGAS_terminalMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lexicalSentValueList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mSentAttributeList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element GALGAS_terminalMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_lexicalSentValueList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element GALGAS_terminalMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lexicalSentValueList & inOperand1 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalMap_2D_element::objectCompare (const GALGAS_terminalMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSentAttributeList.objectCompare (inOperand.mProperty_mSentAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSentAttributeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSentAttributeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @terminalMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@terminalMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalMap_2D_element ("terminalMap-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element GALGAS_terminalMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap_2D_element result ;
  const GALGAS_terminalMap_2D_element * p = (const GALGAS_terminalMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element::GALGAS_lexicalTypeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexicalType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element::~ GALGAS_lexicalTypeMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element::GALGAS_lexicalTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lexicalTypeEnum & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLexicalType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element GALGAS_lexicalTypeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lexicalTypeEnum & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalTypeMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalTypeMap_2D_element::objectCompare (const GALGAS_lexicalTypeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalType.objectCompare (inOperand.mProperty_mLexicalType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @lexicalTypeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTypeMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ("lexicalTypeMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element GALGAS_lexicalTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap_2D_element result ;
  const GALGAS_lexicalTypeMap_2D_element * p = (const GALGAS_lexicalTypeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element::GALGAS_lexicalAttributeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexicalType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element::~ GALGAS_lexicalAttributeMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element::GALGAS_lexicalAttributeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lexicalTypeEnum & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLexicalType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element GALGAS_lexicalAttributeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lexicalTypeEnum & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalAttributeMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalAttributeMap_2D_element::objectCompare (const GALGAS_lexicalAttributeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalType.objectCompare (inOperand.mProperty_mLexicalType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalAttributeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @lexicalAttributeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ("lexicalAttributeMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element GALGAS_lexicalAttributeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap_2D_element result ;
  const GALGAS_lexicalAttributeMap_2D_element * p = (const GALGAS_lexicalAttributeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element::GALGAS_terminalList_2D_element (void) :
mProperty_mTerminalName (),
mProperty_mSentAttributeList (),
mProperty_mSyntaxErrorMessage (),
mProperty_mIsEndOfTemplateMark (),
mProperty_mAtomicSelection (),
mProperty_mStyleIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element::~ GALGAS_terminalList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element::GALGAS_terminalList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lexicalSentValueList & inOperand1,
                                                                const GALGAS_string & inOperand2,
                                                                const GALGAS_bool & inOperand3,
                                                                const GALGAS_bool & inOperand4,
                                                                const GALGAS_uint & inOperand5) :
mProperty_mTerminalName (inOperand0),
mProperty_mSentAttributeList (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_mIsEndOfTemplateMark (inOperand3),
mProperty_mAtomicSelection (inOperand4),
mProperty_mStyleIndex (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element GALGAS_terminalList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lexicalSentValueList::constructor_emptyList (HERE),
                                         GALGAS_string::constructor_default (HERE),
                                         GALGAS_bool::constructor_default (HERE),
                                         GALGAS_bool::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element GALGAS_terminalList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lexicalSentValueList & inOperand1,
                                                                                const GALGAS_string & inOperand2,
                                                                                const GALGAS_bool & inOperand3,
                                                                                const GALGAS_bool & inOperand4,
                                                                                const GALGAS_uint & inOperand5 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_terminalList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalList_2D_element::objectCompare (const GALGAS_terminalList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTerminalName.objectCompare (inOperand.mProperty_mTerminalName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSentAttributeList.objectCompare (inOperand.mProperty_mSentAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxErrorMessage.objectCompare (inOperand.mProperty_mSyntaxErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsEndOfTemplateMark.objectCompare (inOperand.mProperty_mIsEndOfTemplateMark) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAtomicSelection.objectCompare (inOperand.mProperty_mAtomicSelection) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStyleIndex.objectCompare (inOperand.mProperty_mStyleIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalList_2D_element::isValid (void) const {
  return mProperty_mTerminalName.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_mIsEndOfTemplateMark.isValid () && mProperty_mAtomicSelection.isValid () && mProperty_mStyleIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList_2D_element::drop (void) {
  mProperty_mTerminalName.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_mIsEndOfTemplateMark.drop () ;
  mProperty_mAtomicSelection.drop () ;
  mProperty_mStyleIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @terminalList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsEndOfTemplateMark.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAtomicSelection.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@terminalList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalList_2D_element ("terminalList-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element GALGAS_terminalList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalList_2D_element result ;
  const GALGAS_terminalList_2D_element * p = (const GALGAS_terminalList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element::GALGAS_lexicalExplicitTokenListMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTerminal (),
mProperty_mAttributeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element::~ GALGAS_lexicalExplicitTokenListMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element::GALGAS_lexicalExplicitTokenListMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstringlist & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mTerminal (inOperand1),
mProperty_mAttributeList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element GALGAS_lexicalExplicitTokenListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExplicitTokenListMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element GALGAS_lexicalExplicitTokenListMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstringlist & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalExplicitTokenListMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExplicitTokenListMap_2D_element::objectCompare (const GALGAS_lexicalExplicitTokenListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminal.objectCompare (inOperand.mProperty_mTerminal) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalExplicitTokenListMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminal.isValid () && mProperty_mAttributeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminal.drop () ;
  mProperty_mAttributeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @lexicalExplicitTokenListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminal.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExplicitTokenListMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ("lexicalExplicitTokenListMap-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element GALGAS_lexicalExplicitTokenListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap_2D_element result ;
  const GALGAS_lexicalExplicitTokenListMap_2D_element * p = (const GALGAS_lexicalExplicitTokenListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element::GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) :
mProperty_lkey (),
mProperty_mExplicitTokenListMap (),
mProperty_mTokenSortedList (),
mProperty_mShouldBeGenerated () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element::~ GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element::GALGAS_lexicalExplicitTokenListMapMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                                    const GALGAS_tokenSortedlist & inOperand2,
                                                                                                    const GALGAS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mExplicitTokenListMap (inOperand1),
mProperty_mTokenSortedList (inOperand2),
mProperty_mShouldBeGenerated (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element GALGAS_lexicalExplicitTokenListMapMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExplicitTokenListMapMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (HERE),
                                                           GALGAS_tokenSortedlist::constructor_emptySortedList (HERE),
                                                           GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element GALGAS_lexicalExplicitTokenListMapMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                                                    const GALGAS_tokenSortedlist & inOperand2,
                                                                                                                    const GALGAS_bool & inOperand3 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexicalExplicitTokenListMapMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExplicitTokenListMapMap_2D_element::objectCompare (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExplicitTokenListMap.objectCompare (inOperand.mProperty_mExplicitTokenListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTokenSortedList.objectCompare (inOperand.mProperty_mTokenSortedList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mShouldBeGenerated.objectCompare (inOperand.mProperty_mShouldBeGenerated) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalExplicitTokenListMapMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExplicitTokenListMap.isValid () && mProperty_mTokenSortedList.isValid () && mProperty_mShouldBeGenerated.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExplicitTokenListMap.drop () ;
  mProperty_mTokenSortedList.drop () ;
  mProperty_mShouldBeGenerated.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @lexicalExplicitTokenListMapMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExplicitTokenListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTokenSortedList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mShouldBeGenerated.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExplicitTokenListMapMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ("lexicalExplicitTokenListMapMap-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMapMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMapMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMapMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element GALGAS_lexicalExplicitTokenListMapMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap_2D_element result ;
  const GALGAS_lexicalExplicitTokenListMapMap_2D_element * p = (const GALGAS_lexicalExplicitTokenListMapMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMapMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element::GALGAS_lexicalMessageMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexicalMessage (),
mProperty_mMessageIsUsed () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element::~ GALGAS_lexicalMessageMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element::GALGAS_lexicalMessageMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLexicalMessage (inOperand1),
mProperty_mMessageIsUsed (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element GALGAS_lexicalMessageMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalMessageMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element GALGAS_lexicalMessageMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_bool & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalMessageMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalMessageMap_2D_element::objectCompare (const GALGAS_lexicalMessageMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalMessage.objectCompare (inOperand.mProperty_mLexicalMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMessageIsUsed.objectCompare (inOperand.mProperty_mMessageIsUsed) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalMessageMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalMessage.isValid () && mProperty_mMessageIsUsed.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalMessage.drop () ;
  mProperty_mMessageIsUsed.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @lexicalMessageMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMessageIsUsed.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalMessageMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ("lexicalMessageMap-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalMessageMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalMessageMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element GALGAS_lexicalMessageMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap_2D_element result ;
  const GALGAS_lexicalMessageMap_2D_element * p = (const GALGAS_lexicalMessageMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element::GALGAS_lexicalRoutineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexicalRoutineFormalArgumentList (),
mProperty_mErrorMessageList (),
mProperty_mIsExtern () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element::~ GALGAS_lexicalRoutineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element::GALGAS_lexicalRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                          const GALGAS_stringlist & inOperand2,
                                                                          const GALGAS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mLexicalRoutineFormalArgumentList (inOperand1),
mProperty_mErrorMessageList (inOperand2),
mProperty_mIsExtern (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element GALGAS_lexicalRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (HERE),
                                              GALGAS_stringlist::constructor_emptyList (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element GALGAS_lexicalRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                                          const GALGAS_stringlist & inOperand2,
                                                                                          const GALGAS_bool & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexicalRoutineMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRoutineMap_2D_element::objectCompare (const GALGAS_lexicalRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalRoutineFormalArgumentList.objectCompare (inOperand.mProperty_mLexicalRoutineFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessageList.objectCompare (inOperand.mProperty_mErrorMessageList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsExtern.objectCompare (inOperand.mProperty_mIsExtern) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalRoutineFormalArgumentList.isValid () && mProperty_mErrorMessageList.isValid () && mProperty_mIsExtern.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalRoutineFormalArgumentList.drop () ;
  mProperty_mErrorMessageList.drop () ;
  mProperty_mIsExtern.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ("lexicalRoutineMap-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element GALGAS_lexicalRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap_2D_element result ;
  const GALGAS_lexicalRoutineMap_2D_element * p = (const GALGAS_lexicalRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element::GALGAS_lexicalFunctionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexicalTypeList (),
mProperty_mReturnedLexicalType (),
mProperty_mReplacementFunctionName (),
mProperty_mIsExtern () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element::~ GALGAS_lexicalFunctionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element::GALGAS_lexicalFunctionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                            const GALGAS_lexicalTypeEnum & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mLexicalTypeList (inOperand1),
mProperty_mReturnedLexicalType (inOperand2),
mProperty_mReplacementFunctionName (inOperand3),
mProperty_mIsExtern (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element GALGAS_lexicalFunctionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                                            const GALGAS_lexicalTypeEnum & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_bool & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexicalFunctionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionMap_2D_element::objectCompare (const GALGAS_lexicalFunctionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalTypeList.objectCompare (inOperand.mProperty_mLexicalTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedLexicalType.objectCompare (inOperand.mProperty_mReturnedLexicalType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReplacementFunctionName.objectCompare (inOperand.mProperty_mReplacementFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsExtern.objectCompare (inOperand.mProperty_mIsExtern) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalFunctionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalTypeList.isValid () && mProperty_mReturnedLexicalType.isValid () && mProperty_mReplacementFunctionName.isValid () && mProperty_mIsExtern.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalTypeList.drop () ;
  mProperty_mReturnedLexicalType.drop () ;
  mProperty_mReplacementFunctionName.drop () ;
  mProperty_mIsExtern.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedLexicalType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReplacementFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ("lexicalFunctionMap-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element GALGAS_lexicalFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap_2D_element result ;
  const GALGAS_lexicalFunctionMap_2D_element * p = (const GALGAS_lexicalFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element::GALGAS_templateDelimitorList_2D_element (void) :
mProperty_mStartString (),
mProperty_mEndString (),
mProperty_mPreservesStartDelimiter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element::~ GALGAS_templateDelimitorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element::GALGAS_templateDelimitorList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_bool & inOperand2) :
mProperty_mStartString (inOperand0),
mProperty_mEndString (inOperand1),
mProperty_mPreservesStartDelimiter (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element GALGAS_templateDelimitorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateDelimitorList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element GALGAS_templateDelimitorList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_bool & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateDelimitorList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateDelimitorList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateDelimitorList_2D_element::objectCompare (const GALGAS_templateDelimitorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStartString.objectCompare (inOperand.mProperty_mStartString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndString.objectCompare (inOperand.mProperty_mEndString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreservesStartDelimiter.objectCompare (inOperand.mProperty_mPreservesStartDelimiter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateDelimitorList_2D_element::isValid (void) const {
  return mProperty_mStartString.isValid () && mProperty_mEndString.isValid () && mProperty_mPreservesStartDelimiter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList_2D_element::drop (void) {
  mProperty_mStartString.drop () ;
  mProperty_mEndString.drop () ;
  mProperty_mPreservesStartDelimiter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @templateDelimitorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStartString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreservesStartDelimiter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateDelimitorList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ("templateDelimitorList-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateDelimitorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateDelimitorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDelimitorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element GALGAS_templateDelimitorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList_2D_element result ;
  const GALGAS_templateDelimitorList_2D_element * p = (const GALGAS_templateDelimitorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDelimitorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element::GALGAS_styleMap_2D_element (void) :
mProperty_lkey (),
mProperty_mComment (),
mProperty_mStyleIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element::~ GALGAS_styleMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element::GALGAS_styleMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mComment (inOperand1),
mProperty_mStyleIndex (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element GALGAS_styleMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_styleMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element GALGAS_styleMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_uint & inOperand2 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_styleMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_styleMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_styleMap_2D_element::objectCompare (const GALGAS_styleMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mComment.objectCompare (inOperand.mProperty_mComment) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStyleIndex.objectCompare (inOperand.mProperty_mStyleIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_styleMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mComment.isValid () && mProperty_mStyleIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_styleMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mStyleIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_styleMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @styleMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@styleMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_styleMap_2D_element ("styleMap-element",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_styleMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_styleMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_styleMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element GALGAS_styleMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_styleMap_2D_element result ;
  const GALGAS_styleMap_2D_element * p = (const GALGAS_styleMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_styleMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element::GALGAS_lexicalTagMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element::~ GALGAS_lexicalTagMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element::GALGAS_lexicalTagMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element GALGAS_lexicalTagMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalTagMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element GALGAS_lexicalTagMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTagMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalTagMap_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalTagMap_2D_element::objectCompare (const GALGAS_lexicalTagMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTagMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @lexicalTagMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTagMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ("lexicalTagMap-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element GALGAS_lexicalTagMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap_2D_element result ;
  const GALGAS_lexicalTagMap_2D_element * p = (const GALGAS_lexicalTagMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST_2D_element::GALGAS_lexicalFunctionListAST_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mLexicalExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST_2D_element::~ GALGAS_lexicalFunctionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST_2D_element::GALGAS_lexicalFunctionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lexicalFunctionExpressionAST & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mLexicalExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST_2D_element GALGAS_lexicalFunctionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lexicalFunctionExpressionAST & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalFunctionListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionListAST_2D_element::objectCompare (const GALGAS_lexicalFunctionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalExpression.objectCompare (inOperand.mProperty_mLexicalExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalFunctionListAST_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mLexicalExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mLexicalExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionListAST_2D_element ("lexicalFunctionListAST-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST_2D_element GALGAS_lexicalFunctionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionListAST_2D_element result ;
  const GALGAS_lexicalFunctionListAST_2D_element * p = (const GALGAS_lexicalFunctionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST_2D_element::GALGAS_commandLineOptionListAST_2D_element (void) :
mProperty_mOptionTypeName (),
mProperty_mOptionInternalName (),
mProperty_mOptionInvocationLetter (),
mProperty_mOptionInvocationString (),
mProperty_mOptionComment (),
mProperty_mOptionDefaultValue (),
mProperty_mOptionDefaultValueKind () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST_2D_element::~ GALGAS_commandLineOptionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST_2D_element::GALGAS_commandLineOptionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lchar & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_lstring & inOperand4,
                                                                                        const GALGAS_lstring & inOperand5,
                                                                                        const GALGAS_optionDefaultValueEnumAST & inOperand6) :
mProperty_mOptionTypeName (inOperand0),
mProperty_mOptionInternalName (inOperand1),
mProperty_mOptionInvocationLetter (inOperand2),
mProperty_mOptionInvocationString (inOperand3),
mProperty_mOptionComment (inOperand4),
mProperty_mOptionDefaultValue (inOperand5),
mProperty_mOptionDefaultValueKind (inOperand6) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST_2D_element GALGAS_commandLineOptionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_lchar & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_lstring & inOperand4,
                                                                                                        const GALGAS_lstring & inOperand5,
                                                                                                        const GALGAS_optionDefaultValueEnumAST & inOperand6 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_commandLineOptionListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_commandLineOptionListAST_2D_element::objectCompare (const GALGAS_commandLineOptionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionTypeName.objectCompare (inOperand.mProperty_mOptionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionInternalName.objectCompare (inOperand.mProperty_mOptionInternalName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionInvocationLetter.objectCompare (inOperand.mProperty_mOptionInvocationLetter) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionInvocationString.objectCompare (inOperand.mProperty_mOptionInvocationString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionComment.objectCompare (inOperand.mProperty_mOptionComment) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionDefaultValue.objectCompare (inOperand.mProperty_mOptionDefaultValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionDefaultValueKind.objectCompare (inOperand.mProperty_mOptionDefaultValueKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_commandLineOptionListAST_2D_element::isValid (void) const {
  return mProperty_mOptionTypeName.isValid () && mProperty_mOptionInternalName.isValid () && mProperty_mOptionInvocationLetter.isValid () && mProperty_mOptionInvocationString.isValid () && mProperty_mOptionComment.isValid () && mProperty_mOptionDefaultValue.isValid () && mProperty_mOptionDefaultValueKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST_2D_element::drop (void) {
  mProperty_mOptionTypeName.drop () ;
  mProperty_mOptionInternalName.drop () ;
  mProperty_mOptionInvocationLetter.drop () ;
  mProperty_mOptionInvocationString.drop () ;
  mProperty_mOptionComment.drop () ;
  mProperty_mOptionDefaultValue.drop () ;
  mProperty_mOptionDefaultValueKind.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @commandLineOptionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionInternalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionInvocationLetter.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionInvocationString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionDefaultValueKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@commandLineOptionListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionListAST_2D_element ("commandLineOptionListAST-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_commandLineOptionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_commandLineOptionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST_2D_element GALGAS_commandLineOptionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST_2D_element result ;
  const GALGAS_commandLineOptionListAST_2D_element * p = (const GALGAS_commandLineOptionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap_2D_element::GALGAS_commandLineOptionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap_2D_element::~ GALGAS_commandLineOptionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap_2D_element::GALGAS_commandLineOptionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_char & inOperand1,
                                                                                const GALGAS_string & inOperand2,
                                                                                const GALGAS_string & inOperand3,
                                                                                const GALGAS_string & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap_2D_element GALGAS_commandLineOptionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_commandLineOptionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_char::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap_2D_element GALGAS_commandLineOptionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_char & inOperand1,
                                                                                                const GALGAS_string & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_string & inOperand4 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_commandLineOptionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_commandLineOptionMap_2D_element::objectCompare (const GALGAS_commandLineOptionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionChar.objectCompare (inOperand.mProperty_mOptionChar) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionString.objectCompare (inOperand.mProperty_mOptionString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mComment.objectCompare (inOperand.mProperty_mComment) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValue.objectCompare (inOperand.mProperty_mDefaultValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_commandLineOptionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @commandLineOptionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@commandLineOptionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionMap_2D_element ("commandLineOptionMap-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_commandLineOptionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_commandLineOptionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap_2D_element GALGAS_commandLineOptionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap_2D_element result ;
  const GALGAS_commandLineOptionMap_2D_element * p = (const GALGAS_commandLineOptionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST_2D_element::GALGAS_guiSimpleAttributeListAST_2D_element (void) :
mProperty_mKey (),
mProperty_mValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST_2D_element::~ GALGAS_guiSimpleAttributeListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST_2D_element::GALGAS_guiSimpleAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST_2D_element GALGAS_guiSimpleAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiSimpleAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST_2D_element GALGAS_guiSimpleAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_guiSimpleAttributeListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_guiSimpleAttributeListAST_2D_element::objectCompare (const GALGAS_guiSimpleAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mKey.objectCompare (inOperand.mProperty_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_guiSimpleAttributeListAST_2D_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST_2D_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiSimpleAttributeListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @guiSimpleAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@guiSimpleAttributeListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2D_element ("guiSimpleAttributeListAST-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiSimpleAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiSimpleAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiSimpleAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST_2D_element GALGAS_guiSimpleAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST_2D_element result ;
  const GALGAS_guiSimpleAttributeListAST_2D_element * p = (const GALGAS_guiSimpleAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiSimpleAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST_2D_element::GALGAS_guiCompoundAttributeListAST_2D_element (void) :
mProperty_mKey (),
mProperty_mAttributeName (),
mProperty_mValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST_2D_element::~ GALGAS_guiCompoundAttributeListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST_2D_element::GALGAS_guiCompoundAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2) :
mProperty_mKey (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mValue (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST_2D_element GALGAS_guiCompoundAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCompoundAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST_2D_element GALGAS_guiCompoundAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiCompoundAttributeListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_guiCompoundAttributeListAST_2D_element::objectCompare (const GALGAS_guiCompoundAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mKey.objectCompare (inOperand.mProperty_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_guiCompoundAttributeListAST_2D_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mAttributeName.isValid () && mProperty_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST_2D_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCompoundAttributeListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @guiCompoundAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@guiCompoundAttributeListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2D_element ("guiCompoundAttributeListAST-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiCompoundAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiCompoundAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCompoundAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST_2D_element GALGAS_guiCompoundAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST_2D_element result ;
  const GALGAS_guiCompoundAttributeListAST_2D_element * p = (const GALGAS_guiCompoundAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCompoundAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element::GALGAS_terminalLabelListAST_2D_element (void) :
mProperty_mTerminal (),
mProperty_mDisplayFlags () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element::~ GALGAS_terminalLabelListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element::GALGAS_terminalLabelListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1) :
mProperty_mTerminal (inOperand0),
mProperty_mDisplayFlags (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element GALGAS_terminalLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalLabelListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element GALGAS_terminalLabelListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalLabelListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalLabelListAST_2D_element::objectCompare (const GALGAS_terminalLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTerminal.objectCompare (inOperand.mProperty_mTerminal) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDisplayFlags.objectCompare (inOperand.mProperty_mDisplayFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalLabelListAST_2D_element::isValid (void) const {
  return mProperty_mTerminal.isValid () && mProperty_mDisplayFlags.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST_2D_element::drop (void) {
  mProperty_mTerminal.drop () ;
  mProperty_mDisplayFlags.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @terminalLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTerminal.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDisplayFlags.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@terminalLabelListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalLabelListAST_2D_element ("terminalLabelListAST-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element GALGAS_terminalLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST_2D_element result ;
  const GALGAS_terminalLabelListAST_2D_element * p = (const GALGAS_terminalLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element::GALGAS_withLexiqueListAST_2D_element (void) :
mProperty_mLexiqueFileName (),
mProperty_mLabels (),
mProperty_mSimpleAttributes (),
mProperty_mCompoundAttributes () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element::~ GALGAS_withLexiqueListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element::GALGAS_withLexiqueListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_guiLabelListAST & inOperand1,
                                                                            const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                            const GALGAS_guiCompoundAttributeListAST & inOperand3) :
mProperty_mLexiqueFileName (inOperand0),
mProperty_mLabels (inOperand1),
mProperty_mSimpleAttributes (inOperand2),
mProperty_mCompoundAttributes (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element GALGAS_withLexiqueListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_withLexiqueListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_guiLabelListAST::constructor_emptyList (HERE),
                                               GALGAS_guiSimpleAttributeListAST::constructor_emptyList (HERE),
                                               GALGAS_guiCompoundAttributeListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element GALGAS_withLexiqueListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_guiLabelListAST & inOperand1,
                                                                                            const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                            const GALGAS_guiCompoundAttributeListAST & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_withLexiqueListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_withLexiqueListAST_2D_element::objectCompare (const GALGAS_withLexiqueListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueFileName.objectCompare (inOperand.mProperty_mLexiqueFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabels.objectCompare (inOperand.mProperty_mLabels) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSimpleAttributes.objectCompare (inOperand.mProperty_mSimpleAttributes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCompoundAttributes.objectCompare (inOperand.mProperty_mCompoundAttributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_withLexiqueListAST_2D_element::isValid (void) const {
  return mProperty_mLexiqueFileName.isValid () && mProperty_mLabels.isValid () && mProperty_mSimpleAttributes.isValid () && mProperty_mCompoundAttributes.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST_2D_element::drop (void) {
  mProperty_mLexiqueFileName.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mSimpleAttributes.drop () ;
  mProperty_mCompoundAttributes.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @withLexiqueListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexiqueFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSimpleAttributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCompoundAttributes.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@withLexiqueListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_withLexiqueListAST_2D_element ("withLexiqueListAST-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_withLexiqueListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_withLexiqueListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_withLexiqueListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element GALGAS_withLexiqueListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST_2D_element result ;
  const GALGAS_withLexiqueListAST_2D_element * p = (const GALGAS_withLexiqueListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_withLexiqueListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element::GALGAS_extensionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexiqueName (),
mProperty_mIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element::~ GALGAS_extensionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element::GALGAS_extensionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLexiqueName (inOperand1),
mProperty_mIndex (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element GALGAS_extensionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_string::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element GALGAS_extensionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_uint & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_extensionMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMap_2D_element::objectCompare (const GALGAS_extensionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueName.objectCompare (inOperand.mProperty_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexiqueName.drop () ;
  mProperty_mIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @extensionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMap_2D_element ("extensionMap-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element GALGAS_extensionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap_2D_element result ;
  const GALGAS_extensionMap_2D_element * p = (const GALGAS_extensionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GUIComponentListAST_2D_element::GALGAS_galgas_33_GUIComponentListAST_2D_element (void) :
mProperty_mGUIComponentName (),
mProperty_mImportedOptionList (),
mProperty_mGlobalSimpleAttributeList (),
mProperty_mWithLexiqueList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GUIComponentListAST_2D_element::~ GALGAS_galgas_33_GUIComponentListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GUIComponentListAST_2D_element::GALGAS_galgas_33_GUIComponentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1,
                                                                                                  const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                                  const GALGAS_withLexiqueListAST & inOperand3) :
mProperty_mGUIComponentName (inOperand0),
mProperty_mImportedOptionList (inOperand1),
mProperty_mGlobalSimpleAttributeList (inOperand2),
mProperty_mWithLexiqueList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GUIComponentListAST_2D_element GALGAS_galgas_33_GUIComponentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_GUIComponentListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_guiSimpleAttributeListAST::constructor_emptyList (HERE),
                                                          GALGAS_withLexiqueListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GUIComponentListAST_2D_element GALGAS_galgas_33_GUIComponentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstringlist & inOperand1,
                                                                                                                  const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                                                  const GALGAS_withLexiqueListAST & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_galgas_33_GUIComponentListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_galgas_33_GUIComponentListAST_2D_element::objectCompare (const GALGAS_galgas_33_GUIComponentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGUIComponentName.objectCompare (inOperand.mProperty_mGUIComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mImportedOptionList.objectCompare (inOperand.mProperty_mImportedOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSimpleAttributeList.objectCompare (inOperand.mProperty_mGlobalSimpleAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWithLexiqueList.objectCompare (inOperand.mProperty_mWithLexiqueList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_galgas_33_GUIComponentListAST_2D_element::isValid (void) const {
  return mProperty_mGUIComponentName.isValid () && mProperty_mImportedOptionList.isValid () && mProperty_mGlobalSimpleAttributeList.isValid () && mProperty_mWithLexiqueList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GUIComponentListAST_2D_element::drop (void) {
  mProperty_mGUIComponentName.drop () ;
  mProperty_mImportedOptionList.drop () ;
  mProperty_mGlobalSimpleAttributeList.drop () ;
  mProperty_mWithLexiqueList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_GUIComponentListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @galgas3GUIComponentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGUIComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mImportedOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSimpleAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWithLexiqueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3GUIComponentListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST_2D_element ("galgas3GUIComponentListAST-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_GUIComponentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_GUIComponentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GUIComponentListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GUIComponentListAST_2D_element GALGAS_galgas_33_GUIComponentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST_2D_element result ;
  const GALGAS_galgas_33_GUIComponentListAST_2D_element * p = (const GALGAS_galgas_33_GUIComponentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GUIComponentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GUIComponentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element::GALGAS_optionComponentMapForGeneration_2D_element (void) :
mProperty_lkey (),
mProperty_mGuiComponentContext () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element::~ GALGAS_optionComponentMapForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element::GALGAS_optionComponentMapForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_guiAnalysisContext & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mGuiComponentContext (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element GALGAS_optionComponentMapForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionComponentMapForGeneration_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_guiAnalysisContext::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element GALGAS_optionComponentMapForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_guiAnalysisContext & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_optionComponentMapForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionComponentMapForGeneration_2D_element::objectCompare (const GALGAS_optionComponentMapForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuiComponentContext.objectCompare (inOperand.mProperty_mGuiComponentContext) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionComponentMapForGeneration_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGuiComponentContext.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGuiComponentContext.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @optionComponentMapForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuiComponentContext.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentMapForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2D_element ("optionComponentMapForGeneration-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentMapForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentMapForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element GALGAS_optionComponentMapForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration_2D_element result ;
  const GALGAS_optionComponentMapForGeneration_2D_element * p = (const GALGAS_optionComponentMapForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element::GALGAS_enumConstantList_2D_element (void) :
mProperty_mConstantName (),
mProperty_mAssociatedValueDefinitionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element::~ GALGAS_enumConstantList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element::GALGAS_enumConstantList_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS__32_lstringlist & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mAssociatedValueDefinitionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element GALGAS_enumConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS__32_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element GALGAS_enumConstantList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS__32_lstringlist & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumConstantList_2D_element::objectCompare (const GALGAS_enumConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssociatedValueDefinitionList.objectCompare (inOperand.mProperty_mAssociatedValueDefinitionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumConstantList_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mAssociatedValueDefinitionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mAssociatedValueDefinitionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @enumConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssociatedValueDefinitionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumConstantList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantList_2D_element ("enumConstantList-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element GALGAS_enumConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList_2D_element result ;
  const GALGAS_enumConstantList_2D_element * p = (const GALGAS_enumConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element::GALGAS_typeNameFormalParameterNameList_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalParameterTypeName (),
mProperty_mFormalParameterName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element::~ GALGAS_typeNameFormalParameterNameList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element::GALGAS_typeNameFormalParameterNameList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalParameterTypeName (inOperand1),
mProperty_mFormalParameterName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element GALGAS_typeNameFormalParameterNameList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeNameFormalParameterNameList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element GALGAS_typeNameFormalParameterNameList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                                      const GALGAS_lstring & inOperand2 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_typeNameFormalParameterNameList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeNameFormalParameterNameList_2D_element::objectCompare (const GALGAS_typeNameFormalParameterNameList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterTypeName.objectCompare (inOperand.mProperty_mFormalParameterTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterName.objectCompare (inOperand.mProperty_mFormalParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeNameFormalParameterNameList_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalParameterTypeName.isValid () && mProperty_mFormalParameterName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalParameterTypeName.drop () ;
  mProperty_mFormalParameterName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @typeNameFormalParameterNameList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeNameFormalParameterNameList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2D_element ("typeNameFormalParameterNameList-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeNameFormalParameterNameList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeNameFormalParameterNameList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeNameFormalParameterNameList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element GALGAS_typeNameFormalParameterNameList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList_2D_element result ;
  const GALGAS_typeNameFormalParameterNameList_2D_element * p = (const GALGAS_typeNameFormalParameterNameList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeNameFormalParameterNameList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element::GALGAS_externTypeConstructorList_2D_element (void) :
mProperty_mConstructorName (),
mProperty_mResultTypeName (),
mProperty_mParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element::~ GALGAS_externTypeConstructorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element::GALGAS_externTypeConstructorList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_typeNameFormalParameterNameList & inOperand2) :
mProperty_mConstructorName (inOperand0),
mProperty_mResultTypeName (inOperand1),
mProperty_mParameterList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeConstructorList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_typeNameFormalParameterNameList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_typeNameFormalParameterNameList & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeConstructorList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeConstructorList_2D_element::objectCompare (const GALGAS_externTypeConstructorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstructorName.objectCompare (inOperand.mProperty_mConstructorName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultTypeName.objectCompare (inOperand.mProperty_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_externTypeConstructorList_2D_element::isValid (void) const {
  return mProperty_mConstructorName.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList_2D_element::drop (void) {
  mProperty_mConstructorName.drop () ;
  mProperty_mResultTypeName.drop () ;
  mProperty_mParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @externTypeConstructorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstructorName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeConstructorList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ("externTypeConstructorList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeConstructorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList_2D_element result ;
  const GALGAS_externTypeConstructorList_2D_element * p = (const GALGAS_externTypeConstructorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeConstructorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element::GALGAS_externTypeGetterList_2D_element (void) :
mProperty_mGetterName (),
mProperty_mResultTypeName (),
mProperty_mParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element::~ GALGAS_externTypeGetterList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element::GALGAS_externTypeGetterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_typeNameFormalParameterNameList & inOperand2) :
mProperty_mGetterName (inOperand0),
mProperty_mResultTypeName (inOperand1),
mProperty_mParameterList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element GALGAS_externTypeGetterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeGetterList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_typeNameFormalParameterNameList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element GALGAS_externTypeGetterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_typeNameFormalParameterNameList & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeGetterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeGetterList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeGetterList_2D_element::objectCompare (const GALGAS_externTypeGetterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGetterName.objectCompare (inOperand.mProperty_mGetterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultTypeName.objectCompare (inOperand.mProperty_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_externTypeGetterList_2D_element::isValid (void) const {
  return mProperty_mGetterName.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList_2D_element::drop (void) {
  mProperty_mGetterName.drop () ;
  mProperty_mResultTypeName.drop () ;
  mProperty_mParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externTypeGetterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGetterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeGetterList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeGetterList_2D_element ("externTypeGetterList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeGetterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeGetterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeGetterList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element GALGAS_externTypeGetterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList_2D_element result ;
  const GALGAS_externTypeGetterList_2D_element * p = (const GALGAS_externTypeGetterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeGetterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element::GALGAS_externTypeSetterList_2D_element (void) :
mProperty_mSetterName (),
mProperty_mFormalParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element::~ GALGAS_externTypeSetterList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element::GALGAS_externTypeSetterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_formalParameterListAST & inOperand1) :
mProperty_mSetterName (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element GALGAS_externTypeSetterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeSetterList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element GALGAS_externTypeSetterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_formalParameterListAST & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeSetterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externTypeSetterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeSetterList_2D_element::objectCompare (const GALGAS_externTypeSetterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSetterName.objectCompare (inOperand.mProperty_mSetterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_externTypeSetterList_2D_element::isValid (void) const {
  return mProperty_mSetterName.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList_2D_element::drop (void) {
  mProperty_mSetterName.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externTypeSetterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSetterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeSetterList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeSetterList_2D_element ("externTypeSetterList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeSetterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeSetterList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeSetterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeSetterList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element GALGAS_externTypeSetterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeSetterList_2D_element result ;
  const GALGAS_externTypeSetterList_2D_element * p = (const GALGAS_externTypeSetterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeSetterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeSetterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element::GALGAS_externTypeMethodList_2D_element (void) :
mProperty_mMethodName (),
mProperty_mFormalParameterList (),
mProperty_mDeclarationLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element::~ GALGAS_externTypeMethodList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element::GALGAS_externTypeMethodList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_formalParameterListAST & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mProperty_mMethodName (inOperand0),
mProperty_mFormalParameterList (inOperand1),
mProperty_mDeclarationLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element GALGAS_externTypeMethodList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeMethodList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element GALGAS_externTypeMethodList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_formalParameterListAST & inOperand1,
                                                                                                const GALGAS_location & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeMethodList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeMethodList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeMethodList_2D_element::objectCompare (const GALGAS_externTypeMethodList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMethodName.objectCompare (inOperand.mProperty_mMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationLocation.objectCompare (inOperand.mProperty_mDeclarationLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_externTypeMethodList_2D_element::isValid (void) const {
  return mProperty_mMethodName.isValid () && mProperty_mFormalParameterList.isValid () && mProperty_mDeclarationLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList_2D_element::drop (void) {
  mProperty_mMethodName.drop () ;
  mProperty_mFormalParameterList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externTypeMethodList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeMethodList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeMethodList_2D_element ("externTypeMethodList-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeMethodList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeMethodList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeMethodList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element GALGAS_externTypeMethodList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList_2D_element result ;
  const GALGAS_externTypeMethodList_2D_element * p = (const GALGAS_externTypeMethodList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeMethodList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element::GALGAS_graphInsertModifierList_2D_element (void) :
mProperty_mInsertModifierName (),
mProperty_mInsertErrorMessage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element::~ GALGAS_graphInsertModifierList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element::GALGAS_graphInsertModifierList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mInsertModifierName (inOperand0),
mProperty_mInsertErrorMessage (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element GALGAS_graphInsertModifierList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_graphInsertModifierList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element GALGAS_graphInsertModifierList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_graphInsertModifierList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphInsertModifierList_2D_element::objectCompare (const GALGAS_graphInsertModifierList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInsertModifierName.objectCompare (inOperand.mProperty_mInsertModifierName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInsertErrorMessage.objectCompare (inOperand.mProperty_mInsertErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_graphInsertModifierList_2D_element::isValid (void) const {
  return mProperty_mInsertModifierName.isValid () && mProperty_mInsertErrorMessage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList_2D_element::drop (void) {
  mProperty_mInsertModifierName.drop () ;
  mProperty_mInsertErrorMessage.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @graphInsertModifierList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInsertModifierName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInsertErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@graphInsertModifierList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphInsertModifierList_2D_element ("graphInsertModifierList-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphInsertModifierList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphInsertModifierList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphInsertModifierList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element GALGAS_graphInsertModifierList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList_2D_element result ;
  const GALGAS_graphInsertModifierList_2D_element * p = (const GALGAS_graphInsertModifierList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphInsertModifierList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphInsertModifierList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element::GALGAS_insertMethodListAST_2D_element (void) :
mProperty_mInsertMethodName (),
mProperty_mErrorMessage (),
mProperty_mShadowErrorMessage (),
mProperty_mInitialStateName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element::~ GALGAS_insertMethodListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element::GALGAS_insertMethodListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_lstring & inOperand2,
                                                                              const GALGAS_lstring & inOperand3) :
mProperty_mInsertMethodName (inOperand0),
mProperty_mErrorMessage (inOperand1),
mProperty_mShadowErrorMessage (inOperand2),
mProperty_mInitialStateName (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element GALGAS_insertMethodListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element GALGAS_insertMethodListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2,
                                                                                              const GALGAS_lstring & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertMethodListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_insertMethodListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_insertMethodListAST_2D_element::objectCompare (const GALGAS_insertMethodListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInsertMethodName.objectCompare (inOperand.mProperty_mInsertMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessage.objectCompare (inOperand.mProperty_mErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mShadowErrorMessage.objectCompare (inOperand.mProperty_mShadowErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialStateName.objectCompare (inOperand.mProperty_mInitialStateName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_insertMethodListAST_2D_element::isValid (void) const {
  return mProperty_mInsertMethodName.isValid () && mProperty_mErrorMessage.isValid () && mProperty_mShadowErrorMessage.isValid () && mProperty_mInitialStateName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST_2D_element::drop (void) {
  mProperty_mInsertMethodName.drop () ;
  mProperty_mErrorMessage.drop () ;
  mProperty_mShadowErrorMessage.drop () ;
  mProperty_mInitialStateName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @insertMethodListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInsertMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mShadowErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialStateName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@insertMethodListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodListAST_2D_element ("insertMethodListAST-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element GALGAS_insertMethodListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST_2D_element result ;
  const GALGAS_insertMethodListAST_2D_element * p = (const GALGAS_insertMethodListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element::GALGAS_mapSearchMethodListAST_2D_element (void) :
mProperty_mSearchMethodName (),
mProperty_mErrorMessage (),
mProperty_mActionName (),
mProperty_mLocationAttribute () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element::~ GALGAS_mapSearchMethodListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element::GALGAS_mapSearchMethodListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_bool & inOperand3) :
mProperty_mSearchMethodName (inOperand0),
mProperty_mErrorMessage (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mLocationAttribute (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element GALGAS_mapSearchMethodListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapSearchMethodListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element GALGAS_mapSearchMethodListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_bool & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapSearchMethodListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapSearchMethodListAST_2D_element::objectCompare (const GALGAS_mapSearchMethodListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSearchMethodName.objectCompare (inOperand.mProperty_mSearchMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessage.objectCompare (inOperand.mProperty_mErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionName.objectCompare (inOperand.mProperty_mActionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLocationAttribute.objectCompare (inOperand.mProperty_mLocationAttribute) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mapSearchMethodListAST_2D_element::isValid (void) const {
  return mProperty_mSearchMethodName.isValid () && mProperty_mErrorMessage.isValid () && mProperty_mActionName.isValid () && mProperty_mLocationAttribute.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST_2D_element::drop (void) {
  mProperty_mSearchMethodName.drop () ;
  mProperty_mErrorMessage.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mLocationAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @mapSearchMethodListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSearchMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLocationAttribute.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapSearchMethodListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapSearchMethodListAST_2D_element ("mapSearchMethodListAST-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapSearchMethodListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapSearchMethodListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapSearchMethodListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapSearchMethodListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element GALGAS_mapSearchMethodListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST_2D_element result ;
  const GALGAS_mapSearchMethodListAST_2D_element * p = (const GALGAS_mapSearchMethodListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapSearchMethodListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapSearchMethodListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element::GALGAS_mapRemoveMethodListAST_2D_element (void) :
mProperty_mMethodName (),
mProperty_mErrorMessage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element::~ GALGAS_mapRemoveMethodListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element::GALGAS_mapRemoveMethodListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1) :
mProperty_mMethodName (inOperand0),
mProperty_mErrorMessage (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element GALGAS_mapRemoveMethodListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapRemoveMethodListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element GALGAS_mapRemoveMethodListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapRemoveMethodListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapRemoveMethodListAST_2D_element::objectCompare (const GALGAS_mapRemoveMethodListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMethodName.objectCompare (inOperand.mProperty_mMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessage.objectCompare (inOperand.mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mapRemoveMethodListAST_2D_element::isValid (void) const {
  return mProperty_mMethodName.isValid () && mProperty_mErrorMessage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST_2D_element::drop (void) {
  mProperty_mMethodName.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @mapRemoveMethodListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapRemoveMethodListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapRemoveMethodListAST_2D_element ("mapRemoveMethodListAST-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapRemoveMethodListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapRemoveMethodListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapRemoveMethodListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapRemoveMethodListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element GALGAS_mapRemoveMethodListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST_2D_element result ;
  const GALGAS_mapRemoveMethodListAST_2D_element * p = (const GALGAS_mapRemoveMethodListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapRemoveMethodListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapRemoveMethodListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element::GALGAS_insertMethodMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element::~ GALGAS_insertMethodMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element::GALGAS_insertMethodMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element GALGAS_insertMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element GALGAS_insertMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertMethodMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_insertMethodMap_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_insertMethodMap_2D_element::objectCompare (const GALGAS_insertMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_insertMethodMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @insertMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@insertMethodMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodMap_2D_element ("insertMethodMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element GALGAS_insertMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap_2D_element result ;
  const GALGAS_insertMethodMap_2D_element * p = (const GALGAS_insertMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element::GALGAS_searchMethodMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element::~ GALGAS_searchMethodMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element::GALGAS_searchMethodMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element GALGAS_searchMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_searchMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element GALGAS_searchMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_searchMethodMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_searchMethodMap_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_searchMethodMap_2D_element::objectCompare (const GALGAS_searchMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_searchMethodMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @searchMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@searchMethodMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_searchMethodMap_2D_element ("searchMethodMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_searchMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_searchMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_searchMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element GALGAS_searchMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap_2D_element result ;
  const GALGAS_searchMethodMap_2D_element * p = (const GALGAS_searchMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_searchMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element::GALGAS_sortedListSortDescriptorListAST_2D_element (void) :
mProperty_mSortedAttributeName (),
mProperty_mAscending () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element::~ GALGAS_sortedListSortDescriptorListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element::GALGAS_sortedListSortDescriptorListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mSortedAttributeName (inOperand0),
mProperty_mAscending (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element GALGAS_sortedListSortDescriptorListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortedListSortDescriptorListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element GALGAS_sortedListSortDescriptorListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_bool & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedListSortDescriptorListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sortedListSortDescriptorListAST_2D_element::objectCompare (const GALGAS_sortedListSortDescriptorListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSortedAttributeName.objectCompare (inOperand.mProperty_mSortedAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAscending.objectCompare (inOperand.mProperty_mAscending) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_sortedListSortDescriptorListAST_2D_element::isValid (void) const {
  return mProperty_mSortedAttributeName.isValid () && mProperty_mAscending.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST_2D_element::drop (void) {
  mProperty_mSortedAttributeName.drop () ;
  mProperty_mAscending.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @sortedListSortDescriptorListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSortedAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAscending.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListSortDescriptorListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2D_element ("sortedListSortDescriptorListAST-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListSortDescriptorListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListSortDescriptorListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListSortDescriptorListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element GALGAS_sortedListSortDescriptorListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST_2D_element result ;
  const GALGAS_sortedListSortDescriptorListAST_2D_element * p = (const GALGAS_sortedListSortDescriptorListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListSortDescriptorListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (void) :
mProperty_mAttributeTypeIndex (),
mProperty_mAttributeName (),
mProperty_mAscendingOrder () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::~ GALGAS_sortDescriptorListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2) :
mProperty_mAttributeTypeIndex (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mAscendingOrder (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortDescriptorListForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                            GALGAS_string::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sortDescriptorListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sortDescriptorListForGeneration_2D_element::objectCompare (const GALGAS_sortDescriptorListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeTypeIndex.objectCompare (inOperand.mProperty_mAttributeTypeIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAscendingOrder.objectCompare (inOperand.mProperty_mAscendingOrder) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_sortDescriptorListForGeneration_2D_element::isValid (void) const {
  return mProperty_mAttributeTypeIndex.isValid () && mProperty_mAttributeName.isValid () && mProperty_mAscendingOrder.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration_2D_element::drop (void) {
  mProperty_mAttributeTypeIndex.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mAscendingOrder.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @sortDescriptorListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAscendingOrder.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sortDescriptorListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ("sortDescriptorListForGeneration-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortDescriptorListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortDescriptorListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortDescriptorListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  const GALGAS_sortDescriptorListForGeneration_2D_element * p = (const GALGAS_sortDescriptorListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortDescriptorListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element::GALGAS_formalParameterListAST_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element::~ GALGAS_formalParameterListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element::GALGAS_formalParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3,
                                                                                    const GALGAS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsUnused (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element GALGAS_formalParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3,
                                                                                                    const GALGAS_bool & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalParameterListAST_2D_element::objectCompare (const GALGAS_formalParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentTypeName.objectCompare (inOperand.mProperty_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsUnused.objectCompare (inOperand.mProperty_mIsUnused) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalParameterListAST_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @formalParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalParameterListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListAST_2D_element ("formalParameterListAST-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element GALGAS_formalParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST_2D_element result ;
  const GALGAS_formalParameterListAST_2D_element * p = (const GALGAS_formalParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element::GALGAS_formalInputParameterListAST_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused (),
mProperty_mIsConstant () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element::~ GALGAS_formalInputParameterListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element::GALGAS_formalInputParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2,
                                                                                              const GALGAS_bool & inOperand3,
                                                                                              const GALGAS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_mIsUnused (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element GALGAS_formalInputParameterListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element GALGAS_formalInputParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_bool & inOperand3,
                                                                                                              const GALGAS_bool & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalInputParameterListAST_2D_element::objectCompare (const GALGAS_formalInputParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentTypeName.objectCompare (inOperand.mProperty_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsUnused.objectCompare (inOperand.mProperty_mIsUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsConstant.objectCompare (inOperand.mProperty_mIsConstant) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalInputParameterListAST_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () && mProperty_mIsConstant.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
  mProperty_mIsConstant.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @formalInputParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalInputParameterListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListAST_2D_element ("formalInputParameterListAST-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element GALGAS_formalInputParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST_2D_element result ;
  const GALGAS_formalInputParameterListAST_2D_element * p = (const GALGAS_formalInputParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST_2D_element::GALGAS_actualInputParameterListAST_2D_element (void) :
mProperty_mActualSelector (),
mProperty_mInputParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST_2D_element::~ GALGAS_actualInputParameterListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST_2D_element::GALGAS_actualInputParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_abstractInputParameter & inOperand1) :
mProperty_mActualSelector (inOperand0),
mProperty_mInputParameter (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST_2D_element GALGAS_actualInputParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_abstractInputParameter & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actualInputParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualInputParameterListAST_2D_element::objectCompare (const GALGAS_actualInputParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActualSelector.objectCompare (inOperand.mProperty_mActualSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInputParameter.objectCompare (inOperand.mProperty_mInputParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actualInputParameterListAST_2D_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mInputParameter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST_2D_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mInputParameter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @actualInputParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActualSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInputParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualInputParameterListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualInputParameterListAST_2D_element ("actualInputParameterListAST-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualInputParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualInputParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualInputParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST_2D_element GALGAS_actualInputParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST_2D_element result ;
  const GALGAS_actualInputParameterListAST_2D_element * p = (const GALGAS_actualInputParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualInputParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element::GALGAS_propertyInCollectionListAST_2D_element (void) :
mProperty_isConstant (),
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mIsPublic (),
mProperty_mAttributeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element::~ GALGAS_propertyInCollectionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element::GALGAS_propertyInCollectionListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2,
                                                                                              const GALGAS_bool & inOperand3,
                                                                                              const GALGAS_lstringlist & inOperand4) :
mProperty_isConstant (inOperand0),
mProperty_mPropertyTypeName (inOperand1),
mProperty_mPropertyName (inOperand2),
mProperty_mIsPublic (inOperand3),
mProperty_mAttributeList (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element GALGAS_propertyInCollectionListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyInCollectionListAST_2D_element (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element GALGAS_propertyInCollectionListAST_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_bool & inOperand3,
                                                                                                              const GALGAS_lstringlist & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_propertyInCollectionListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyInCollectionListAST_2D_element::objectCompare (const GALGAS_propertyInCollectionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_isConstant.objectCompare (inOperand.mProperty_isConstant) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeName.objectCompare (inOperand.mProperty_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeList.objectCompare (inOperand.mProperty_mAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyInCollectionListAST_2D_element::isValid (void) const {
  return mProperty_isConstant.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyName.isValid () && mProperty_mIsPublic.isValid () && mProperty_mAttributeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST_2D_element::drop (void) {
  mProperty_isConstant.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyName.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mAttributeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyInCollectionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyInCollectionListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyInCollectionListAST_2D_element ("propertyInCollectionListAST-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyInCollectionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyInCollectionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element GALGAS_propertyInCollectionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST_2D_element result ;
  const GALGAS_propertyInCollectionListAST_2D_element * p = (const GALGAS_propertyInCollectionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyInCollectionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element::GALGAS_formalTemplateInputParameterListAST_2D_element (void) :
mProperty_mFormalTemplateSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element::~ GALGAS_formalTemplateInputParameterListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element::GALGAS_formalTemplateInputParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_bool & inOperand3) :
mProperty_mFormalTemplateSelector (inOperand0),
mProperty_mFormalArgumentTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_mIsUnused (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element GALGAS_formalTemplateInputParameterListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalTemplateInputParameterListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element GALGAS_formalTemplateInputParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                                              const GALGAS_bool & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_formalTemplateInputParameterListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalTemplateInputParameterListAST_2D_element::objectCompare (const GALGAS_formalTemplateInputParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalTemplateSelector.objectCompare (inOperand.mProperty_mFormalTemplateSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentTypeName.objectCompare (inOperand.mProperty_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsUnused.objectCompare (inOperand.mProperty_mIsUnused) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalTemplateInputParameterListAST_2D_element::isValid (void) const {
  return mProperty_mFormalTemplateSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST_2D_element::drop (void) {
  mProperty_mFormalTemplateSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @formalTemplateInputParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalTemplateSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalTemplateInputParameterListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2D_element ("formalTemplateInputParameterListAST-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalTemplateInputParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalTemplateInputParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalTemplateInputParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element GALGAS_formalTemplateInputParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST_2D_element result ;
  const GALGAS_formalTemplateInputParameterListAST_2D_element * p = (const GALGAS_formalTemplateInputParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalTemplateInputParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element::GALGAS_filewrapperTemplateListAST_2D_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplatePath (),
mProperty_mFilewrapperTemplateFormalInputParameters () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element::~ GALGAS_filewrapperTemplateListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element::GALGAS_filewrapperTemplateListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_formalTemplateInputParameterListAST & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplatePath (inOperand1),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element GALGAS_filewrapperTemplateListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element GALGAS_filewrapperTemplateListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_formalTemplateInputParameterListAST & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperTemplateListAST_2D_element::objectCompare (const GALGAS_filewrapperTemplateListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplateName.objectCompare (inOperand.mProperty_mFilewrapperTemplateName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplatePath.objectCompare (inOperand.mProperty_mFilewrapperTemplatePath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplateFormalInputParameters.objectCompare (inOperand.mProperty_mFilewrapperTemplateFormalInputParameters) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperTemplateListAST_2D_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplatePath.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST_2D_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplatePath.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2D_element ("filewrapperTemplateListAST-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element GALGAS_filewrapperTemplateListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST_2D_element result ;
  const GALGAS_filewrapperTemplateListAST_2D_element * p = (const GALGAS_filewrapperTemplateListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST_2D_element::GALGAS_nonTerminalLabelListAST_2D_element (void) :
mProperty_mLabelName (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfArgumentLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST_2D_element::~ GALGAS_nonTerminalLabelListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST_2D_element::GALGAS_nonTerminalLabelListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_formalParameterListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2) :
mProperty_mLabelName (inOperand0),
mProperty_mFormalArgumentList (inOperand1),
mProperty_mEndOfArgumentLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST_2D_element GALGAS_nonTerminalLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalLabelListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST_2D_element GALGAS_nonTerminalLabelListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_formalParameterListAST & inOperand1,
                                                                                                      const GALGAS_location & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalLabelListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonTerminalLabelListAST_2D_element::objectCompare (const GALGAS_nonTerminalLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLabelName.objectCompare (inOperand.mProperty_mLabelName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentList.objectCompare (inOperand.mProperty_mFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfArgumentLocation.objectCompare (inOperand.mProperty_mEndOfArgumentLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalLabelListAST_2D_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfArgumentLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST_2D_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonTerminalLabelListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ("nonTerminalLabelListAST-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST_2D_element GALGAS_nonTerminalLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST_2D_element result ;
  const GALGAS_nonTerminalLabelListAST_2D_element * p = (const GALGAS_nonTerminalLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST_2D_element::GALGAS_nonterminalDeclarationListAST_2D_element (void) :
mProperty_mNonterminalName (),
mProperty_mLabels () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST_2D_element::~ GALGAS_nonterminalDeclarationListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST_2D_element::GALGAS_nonterminalDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_nonTerminalLabelListAST & inOperand1) :
mProperty_mNonterminalName (inOperand0),
mProperty_mLabels (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST_2D_element GALGAS_nonterminalDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_nonTerminalLabelListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST_2D_element GALGAS_nonterminalDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_nonTerminalLabelListAST & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalDeclarationListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonterminalDeclarationListAST_2D_element::objectCompare (const GALGAS_nonterminalDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalName.objectCompare (inOperand.mProperty_mNonterminalName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabels.objectCompare (inOperand.mProperty_mLabels) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mLabels.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST_2D_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mLabels.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @nonterminalDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonterminalDeclarationListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ("nonterminalDeclarationListAST-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST_2D_element GALGAS_nonterminalDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST_2D_element result ;
  const GALGAS_nonterminalDeclarationListAST_2D_element * p = (const GALGAS_nonterminalDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST_2D_element::GALGAS_syntaxRuleLabelListAST_2D_element (void) :
mProperty_mLabelName (),
mProperty_mFormalArguments (),
mProperty_mEndOfArgumentLocation (),
mProperty_mSyntaxInstructionList (),
mProperty_mEndOfInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST_2D_element::~ GALGAS_syntaxRuleLabelListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST_2D_element::GALGAS_syntaxRuleLabelListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterListAST & inOperand1,
                                                                                    const GALGAS_location & inOperand2,
                                                                                    const GALGAS_syntaxInstructionList & inOperand3,
                                                                                    const GALGAS_location & inOperand4) :
mProperty_mLabelName (inOperand0),
mProperty_mFormalArguments (inOperand1),
mProperty_mEndOfArgumentLocation (inOperand2),
mProperty_mSyntaxInstructionList (inOperand3),
mProperty_mEndOfInstructionList (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST_2D_element GALGAS_syntaxRuleLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxRuleLabelListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_syntaxInstructionList::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST_2D_element GALGAS_syntaxRuleLabelListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_formalParameterListAST & inOperand1,
                                                                                                    const GALGAS_location & inOperand2,
                                                                                                    const GALGAS_syntaxInstructionList & inOperand3,
                                                                                                    const GALGAS_location & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_syntaxRuleLabelListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxRuleLabelListAST_2D_element::objectCompare (const GALGAS_syntaxRuleLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLabelName.objectCompare (inOperand.mProperty_mLabelName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArguments.objectCompare (inOperand.mProperty_mFormalArguments) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfArgumentLocation.objectCompare (inOperand.mProperty_mEndOfArgumentLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxInstructionList.objectCompare (inOperand.mProperty_mSyntaxInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInstructionList.objectCompare (inOperand.mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxRuleLabelListAST_2D_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mFormalArguments.isValid () && mProperty_mEndOfArgumentLocation.isValid () && mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST_2D_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mFormalArguments.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @syntaxRuleLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArguments.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxRuleLabelListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ("syntaxRuleLabelListAST-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxRuleLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxRuleLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST_2D_element GALGAS_syntaxRuleLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST_2D_element result ;
  const GALGAS_syntaxRuleLabelListAST_2D_element * p = (const GALGAS_syntaxRuleLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxRuleLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element::GALGAS_syntaxRuleListAST_2D_element (void) :
mProperty_mNonterminalName (),
mProperty_mLabelList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element::~ GALGAS_syntaxRuleListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element::GALGAS_syntaxRuleListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_syntaxRuleLabelListAST & inOperand1) :
mProperty_mNonterminalName (inOperand0),
mProperty_mLabelList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element GALGAS_syntaxRuleListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxRuleListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_syntaxRuleLabelListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element GALGAS_syntaxRuleListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_syntaxRuleLabelListAST & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxRuleListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxRuleListAST_2D_element::objectCompare (const GALGAS_syntaxRuleListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalName.objectCompare (inOperand.mProperty_mNonterminalName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabelList.objectCompare (inOperand.mProperty_mLabelList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxRuleListAST_2D_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mLabelList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST_2D_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mLabelList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @syntaxRuleListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabelList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxRuleListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ("syntaxRuleListAST-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxRuleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxRuleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element GALGAS_syntaxRuleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST_2D_element result ;
  const GALGAS_syntaxRuleListAST_2D_element * p = (const GALGAS_syntaxRuleListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxRuleListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element::GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mImportedLexiqueFilePath (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element::~ GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element::GALGAS_galgas_33_SyntaxComponentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                                        const GALGAS_syntaxRuleListAST & inOperand3,
                                                                                                        const GALGAS_bool & inOperand4) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mImportedLexiqueFilePath (inOperand1),
mProperty_mNonterminalDeclarationList (inOperand2),
mProperty_mRuleList (inOperand3),
mProperty_mHasTranslateFeature (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_galgas_33_SyntaxComponentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxComponentListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                                             GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                                             GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_galgas_33_SyntaxComponentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                                                        const GALGAS_syntaxRuleListAST & inOperand3,
                                                                                                                        const GALGAS_bool & inOperand4 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_galgas_33_SyntaxComponentListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_galgas_33_SyntaxComponentListAST_2D_element::objectCompare (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentName.objectCompare (inOperand.mProperty_mSyntaxComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mImportedLexiqueFilePath.objectCompare (inOperand.mProperty_mImportedLexiqueFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalDeclarationList.objectCompare (inOperand.mProperty_mNonterminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRuleList.objectCompare (inOperand.mProperty_mRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasTranslateFeature.objectCompare (inOperand.mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_galgas_33_SyntaxComponentListAST_2D_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mImportedLexiqueFilePath.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST_2D_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mImportedLexiqueFilePath.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @galgas3SyntaxComponentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3SyntaxComponentListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2D_element ("galgas3SyntaxComponentListAST-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_galgas_33_SyntaxComponentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST_2D_element result ;
  const GALGAS_galgas_33_SyntaxComponentListAST_2D_element * p = (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::~ GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                                        const GALGAS_syntaxRuleListAST & inOperand2) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonterminalDeclarationList (inOperand1),
mProperty_mRuleList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                                             GALGAS_syntaxRuleListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                                                        const GALGAS_syntaxRuleListAST & inOperand2 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::objectCompare (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentName.objectCompare (inOperand.mProperty_mSyntaxComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalDeclarationList.objectCompare (inOperand.mProperty_mNonterminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRuleList.objectCompare (inOperand.mProperty_mRuleList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @galgas3SyntaxExtensionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3SyntaxExtensionListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ("galgas3SyntaxExtensionListAST-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST_2D_element result ;
  const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element * p = (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element::GALGAS_programRuleList_2D_element (void) :
mProperty_mSourceFileExtension (),
mProperty_mSourceFileHelp (),
mProperty_mSourceFileVariableName (),
mProperty_mSourceFileVariableNameIsUnused (),
mProperty_mReferenceGrammar (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element::~ GALGAS_programRuleList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element::GALGAS_programRuleList_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_bool & inOperand3,
                                                                      const GALGAS_lstring & inOperand4,
                                                                      const GALGAS_semanticInstructionListAST & inOperand5,
                                                                      const GALGAS_location & inOperand6) :
mProperty_mSourceFileExtension (inOperand0),
mProperty_mSourceFileHelp (inOperand1),
mProperty_mSourceFileVariableName (inOperand2),
mProperty_mSourceFileVariableNameIsUnused (inOperand3),
mProperty_mReferenceGrammar (inOperand4),
mProperty_mInstructionList (inOperand5),
mProperty_mEndOfInstructionList (inOperand6) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element GALGAS_programRuleList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_programRuleList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element GALGAS_programRuleList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_bool & inOperand3,
                                                                                      const GALGAS_lstring & inOperand4,
                                                                                      const GALGAS_semanticInstructionListAST & inOperand5,
                                                                                      const GALGAS_location & inOperand6 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programRuleList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_programRuleList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_programRuleList_2D_element::objectCompare (const GALGAS_programRuleList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSourceFileExtension.objectCompare (inOperand.mProperty_mSourceFileExtension) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceFileHelp.objectCompare (inOperand.mProperty_mSourceFileHelp) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceFileVariableName.objectCompare (inOperand.mProperty_mSourceFileVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceFileVariableNameIsUnused.objectCompare (inOperand.mProperty_mSourceFileVariableNameIsUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReferenceGrammar.objectCompare (inOperand.mProperty_mReferenceGrammar) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInstructionList.objectCompare (inOperand.mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_programRuleList_2D_element::isValid (void) const {
  return mProperty_mSourceFileExtension.isValid () && mProperty_mSourceFileHelp.isValid () && mProperty_mSourceFileVariableName.isValid () && mProperty_mSourceFileVariableNameIsUnused.isValid () && mProperty_mReferenceGrammar.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList_2D_element::drop (void) {
  mProperty_mSourceFileExtension.drop () ;
  mProperty_mSourceFileHelp.drop () ;
  mProperty_mSourceFileVariableName.drop () ;
  mProperty_mSourceFileVariableNameIsUnused.drop () ;
  mProperty_mReferenceGrammar.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programRuleList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @programRuleList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSourceFileExtension.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceFileHelp.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceFileVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReferenceGrammar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@programRuleList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programRuleList_2D_element ("programRuleList-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programRuleList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programRuleList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programRuleList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element GALGAS_programRuleList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_programRuleList_2D_element result ;
  const GALGAS_programRuleList_2D_element * p = (const GALGAS_programRuleList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programRuleList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element::GALGAS_functionSignature_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element::~ GALGAS_functionSignature_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element::GALGAS_functionSignature_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                          const GALGAS_string & inOperand2) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionSignature_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                              GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                          const GALGAS_string & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_functionSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionSignature_2D_element::objectCompare (const GALGAS_functionSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_functionSignature_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionSignature_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @functionSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionSignature-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionSignature_2D_element ("functionSignature-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionSignature_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature_2D_element result ;
  const GALGAS_functionSignature_2D_element * p = (const GALGAS_functionSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::GALGAS_unifiedTypeMapEntryList_2D_element (void) :
mProperty_mType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::~ GALGAS_unifiedTypeMapEntryList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::GALGAS_unifiedTypeMapEntryList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & inOperand0) :
mProperty_mType (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapEntryList_2D_element (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_unifiedTypeMapEntryList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeMapEntryList_2D_element::objectCompare (const GALGAS_unifiedTypeMapEntryList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntryList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeMapEntryList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMapEntryList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ("unifiedTypeMapEntryList-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntryList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntryList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntryList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList_2D_element result ;
  const GALGAS_unifiedTypeMapEntryList_2D_element * p = (const GALGAS_unifiedTypeMapEntryList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapEntryList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mArgumentTypeList (),
mProperty_mHasCompilerArgument (),
mProperty_mReturnedType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_functionSignature & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_unifiedTypeMap_2D_entry & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mArgumentTypeList (inOperand1),
mProperty_mHasCompilerArgument (inOperand2),
mProperty_mReturnedType (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_functionSignature::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_unifiedTypeMap_2D_entry & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentTypeList.objectCompare (inOperand.mProperty_mArgumentTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasCompilerArgument.objectCompare (inOperand.mProperty_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedType.objectCompare (inOperand.mProperty_mReturnedType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentTypeList.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mReturnedType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentTypeList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mReturnedType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constructorMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature_2D_element::GALGAS_optionalMethodSignature_2D_element (void) :
mProperty_mInputArgument (),
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature_2D_element::~ GALGAS_optionalMethodSignature_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature_2D_element::GALGAS_optionalMethodSignature_2D_element (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                      const GALGAS_string & inOperand3) :
mProperty_mInputArgument (inOperand0),
mProperty_mFormalSelector (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature_2D_element GALGAS_optionalMethodSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionalMethodSignature_2D_element (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                    GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature_2D_element GALGAS_optionalMethodSignature_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                                      const GALGAS_string & inOperand3 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_optionalMethodSignature_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionalMethodSignature_2D_element::objectCompare (const GALGAS_optionalMethodSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInputArgument.objectCompare (inOperand.mProperty_mInputArgument) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodSignature_2D_element::isValid (void) const {
  return mProperty_mInputArgument.isValid () && mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature_2D_element::drop (void) {
  mProperty_mInputArgument.drop () ;
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodSignature_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @optionalMethodSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInputArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionalMethodSignature-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionalMethodSignature_2D_element ("optionalMethodSignature-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodSignature_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodSignature_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodSignature_2D_element GALGAS_optionalMethodSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodSignature_2D_element result ;
  const GALGAS_optionalMethodSignature_2D_element * p = (const GALGAS_optionalMethodSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionalMethodSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap_2D_element::GALGAS_optionalMethodMap_2D_element (void) :
mProperty_lkey (),
mProperty_mArgumentTypeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap_2D_element::~ GALGAS_optionalMethodMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap_2D_element::GALGAS_optionalMethodMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_optionalMethodSignature & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mArgumentTypeList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap_2D_element GALGAS_optionalMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionalMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_optionalMethodSignature::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap_2D_element GALGAS_optionalMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_optionalMethodSignature & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_optionalMethodMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionalMethodMap_2D_element::objectCompare (const GALGAS_optionalMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentTypeList.objectCompare (inOperand.mProperty_mArgumentTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentTypeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentTypeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @optionalMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionalMethodMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionalMethodMap_2D_element ("optionalMethodMap-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodMap_2D_element GALGAS_optionalMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodMap_2D_element result ;
  const GALGAS_optionalMethodMap_2D_element * p = (const GALGAS_optionalMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionalMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap_2D_element::GALGAS_getterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mArgumentTypeList (),
mProperty_mDeclarationLocation (),
mProperty_mHasCompilerArgument (),
mProperty_mReturnedType (),
mProperty_mQualifier (),
mProperty_mErrorMessage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap_2D_element::~ GALGAS_getterMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap_2D_element::GALGAS_getterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_methodKind & inOperand1,
                                                          const GALGAS_functionSignature & inOperand2,
                                                          const GALGAS_location & inOperand3,
                                                          const GALGAS_bool & inOperand4,
                                                          const GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                          const GALGAS_methodQualifier & inOperand6,
                                                          const GALGAS_string & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mArgumentTypeList (inOperand2),
mProperty_mDeclarationLocation (inOperand3),
mProperty_mHasCompilerArgument (inOperand4),
mProperty_mReturnedType (inOperand5),
mProperty_mQualifier (inOperand6),
mProperty_mErrorMessage (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap_2D_element GALGAS_getterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_methodKind & inOperand1,
                                                                          const GALGAS_functionSignature & inOperand2,
                                                                          const GALGAS_location & inOperand3,
                                                                          const GALGAS_bool & inOperand4,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                          const GALGAS_methodQualifier & inOperand6,
                                                                          const GALGAS_string & inOperand7 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_getterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_getterMap_2D_element::objectCompare (const GALGAS_getterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentTypeList.objectCompare (inOperand.mProperty_mArgumentTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationLocation.objectCompare (inOperand.mProperty_mDeclarationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasCompilerArgument.objectCompare (inOperand.mProperty_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedType.objectCompare (inOperand.mProperty_mReturnedType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mQualifier.objectCompare (inOperand.mProperty_mQualifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessage.objectCompare (inOperand.mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_getterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mArgumentTypeList.isValid () && mProperty_mDeclarationLocation.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mReturnedType.isValid () && mProperty_mQualifier.isValid () && mProperty_mErrorMessage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mArgumentTypeList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mReturnedType.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getterMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @getterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@getterMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterMap_2D_element ("getterMap-element",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterMap_2D_element GALGAS_getterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_getterMap_2D_element result ;
  const GALGAS_getterMap_2D_element * p = (const GALGAS_getterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature_2D_element::GALGAS_formalParameterSignature_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature_2D_element::~ GALGAS_formalParameterSignature_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature_2D_element::GALGAS_formalParameterSignature_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                        const GALGAS_string & inOperand3) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentPassingMode (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature_2D_element GALGAS_formalParameterSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                                        const GALGAS_string & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_formalParameterSignature_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalParameterSignature_2D_element::objectCompare (const GALGAS_formalParameterSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalParameterSignature_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterSignature_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @formalParameterSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalParameterSignature-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ("formalParameterSignature-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterSignature_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature_2D_element GALGAS_formalParameterSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterSignature_2D_element result ;
  const GALGAS_formalParameterSignature_2D_element * p = (const GALGAS_formalParameterSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap_2D_element::GALGAS_setterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mQualifier (),
mProperty_mErrorMessage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap_2D_element::~ GALGAS_setterMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap_2D_element::GALGAS_setterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_methodKind & inOperand1,
                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                          const GALGAS_bool & inOperand3,
                                                          const GALGAS_methodQualifier & inOperand4,
                                                          const GALGAS_string & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mParameterList (inOperand2),
mProperty_mHasCompilerArgument (inOperand3),
mProperty_mQualifier (inOperand4),
mProperty_mErrorMessage (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap_2D_element GALGAS_setterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_methodKind & inOperand1,
                                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                                          const GALGAS_bool & inOperand3,
                                                                          const GALGAS_methodQualifier & inOperand4,
                                                                          const GALGAS_string & inOperand5 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_setterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_setterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_setterMap_2D_element::objectCompare (const GALGAS_setterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasCompilerArgument.objectCompare (inOperand.mProperty_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mQualifier.objectCompare (inOperand.mProperty_mQualifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessage.objectCompare (inOperand.mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_setterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mParameterList.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mQualifier.isValid () && mProperty_mErrorMessage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setterMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @setterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@setterMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterMap_2D_element ("setterMap-element",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setterMap_2D_element GALGAS_setterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_setterMap_2D_element result ;
  const GALGAS_setterMap_2D_element * p = (const GALGAS_setterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap_2D_element::GALGAS_instanceMethodMap_2D_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mParameterList (),
mProperty_mDeclarationLocation (),
mProperty_mHasCompilerArgument (),
mProperty_mQualifier (),
mProperty_mMutability (),
mProperty_mErrorMessage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap_2D_element::~ GALGAS_instanceMethodMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap_2D_element::GALGAS_instanceMethodMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_methodKind & inOperand1,
                                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                                          const GALGAS_location & inOperand3,
                                                                          const GALGAS_bool & inOperand4,
                                                                          const GALGAS_methodQualifier & inOperand5,
                                                                          const GALGAS_instanceMethodMutability & inOperand6,
                                                                          const GALGAS_string & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mParameterList (inOperand2),
mProperty_mDeclarationLocation (inOperand3),
mProperty_mHasCompilerArgument (inOperand4),
mProperty_mQualifier (inOperand5),
mProperty_mMutability (inOperand6),
mProperty_mErrorMessage (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap_2D_element GALGAS_instanceMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_methodKind & inOperand1,
                                                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                                                          const GALGAS_location & inOperand3,
                                                                                          const GALGAS_bool & inOperand4,
                                                                                          const GALGAS_methodQualifier & inOperand5,
                                                                                          const GALGAS_instanceMethodMutability & inOperand6,
                                                                                          const GALGAS_string & inOperand7 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanceMethodMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_instanceMethodMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_instanceMethodMap_2D_element::objectCompare (const GALGAS_instanceMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationLocation.objectCompare (inOperand.mProperty_mDeclarationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasCompilerArgument.objectCompare (inOperand.mProperty_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mQualifier.objectCompare (inOperand.mProperty_mQualifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMutability.objectCompare (inOperand.mProperty_mMutability) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorMessage.objectCompare (inOperand.mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_instanceMethodMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mParameterList.isValid () && mProperty_mDeclarationLocation.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mQualifier.isValid () && mProperty_mMutability.isValid () && mProperty_mErrorMessage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mMutability.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instanceMethodMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @instanceMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMutability.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@instanceMethodMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ("instanceMethodMap-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanceMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanceMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanceMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instanceMethodMap_2D_element GALGAS_instanceMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap_2D_element result ;
  const GALGAS_instanceMethodMap_2D_element * p = (const GALGAS_instanceMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanceMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap_2D_element::GALGAS_classMethodMap_2D_element (void) :
mProperty_lkey (),
mProperty_mParameterList (),
mProperty_mHasCompilerArgument () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap_2D_element::~ GALGAS_classMethodMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap_2D_element::GALGAS_classMethodMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_formalParameterSignature & inOperand1,
                                                                    const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mParameterList (inOperand1),
mProperty_mHasCompilerArgument (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap_2D_element GALGAS_classMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap_2D_element GALGAS_classMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterSignature & inOperand1,
                                                                                    const GALGAS_bool & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classMethodMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_classMethodMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classMethodMap_2D_element::objectCompare (const GALGAS_classMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasCompilerArgument.objectCompare (inOperand.mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_classMethodMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mParameterList.isValid () && mProperty_mHasCompilerArgument.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_classMethodMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @classMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classMethodMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMethodMap_2D_element ("classMethodMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classMethodMap_2D_element GALGAS_classMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap_2D_element result ;
  const GALGAS_classMethodMap_2D_element * p = (const GALGAS_classMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (void) :
mProperty_mEnumeratedType (),
mProperty_mEnumerationName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::~ GALGAS_enumerationDescriptorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                          const GALGAS_string & inOperand1) :
mProperty_mEnumeratedType (inOperand0),
mProperty_mEnumerationName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationDescriptorList_2D_element (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                      GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                          const GALGAS_string & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationDescriptorList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumerationDescriptorList_2D_element::objectCompare (const GALGAS_enumerationDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumeratedType.objectCompare (inOperand.mProperty_mEnumeratedType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumerationName.objectCompare (inOperand.mProperty_mEnumerationName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumerationDescriptorList_2D_element::isValid (void) const {
  return mProperty_mEnumeratedType.isValid () && mProperty_mEnumerationName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList_2D_element::drop (void) {
  mProperty_mEnumeratedType.drop () ;
  mProperty_mEnumerationName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @enumerationDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumeratedType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationDescriptorList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ("enumerationDescriptorList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  const GALGAS_enumerationDescriptorList_2D_element * p = (const GALGAS_enumerationDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element::GALGAS_typedPropertyList_2D_element (void) :
mProperty_mPropertyTypeEntry (),
mProperty_mPropertyName (),
mProperty_mHasSetter (),
mProperty_mHasSelector () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element::~ GALGAS_typedPropertyList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element::GALGAS_typedPropertyList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2,
                                                                          const GALGAS_bool & inOperand3) :
mProperty_mPropertyTypeEntry (inOperand0),
mProperty_mPropertyName (inOperand1),
mProperty_mHasSetter (inOperand2),
mProperty_mHasSelector (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element GALGAS_typedPropertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typedPropertyList_2D_element (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element GALGAS_typedPropertyList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_bool & inOperand2,
                                                                                          const GALGAS_bool & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_typedPropertyList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typedPropertyList_2D_element::objectCompare (const GALGAS_typedPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeEntry.objectCompare (inOperand.mProperty_mPropertyTypeEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasSetter.objectCompare (inOperand.mProperty_mHasSetter) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasSelector.objectCompare (inOperand.mProperty_mHasSelector) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typedPropertyList_2D_element::isValid (void) const {
  return mProperty_mPropertyTypeEntry.isValid () && mProperty_mPropertyName.isValid () && mProperty_mHasSetter.isValid () && mProperty_mHasSelector.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList_2D_element::drop (void) {
  mProperty_mPropertyTypeEntry.drop () ;
  mProperty_mPropertyName.drop () ;
  mProperty_mHasSetter.drop () ;
  mProperty_mHasSelector.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @typedPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyTypeEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasSetter.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasSelector.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typedPropertyList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedPropertyList_2D_element ("typedPropertyList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typedPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typedPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element GALGAS_typedPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList_2D_element result ;
  const GALGAS_typedPropertyList_2D_element * p = (const GALGAS_typedPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mIsConstant (),
mProperty_mPropertyType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bool & inOperand1,
                                                              const GALGAS_bool & inOperand2,
                                                              const GALGAS_unifiedTypeMap_2D_entry & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mIsConstant (inOperand2),
mProperty_mPropertyType (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_bool::constructor_default (HERE),
                                        GALGAS_bool::constructor_default (HERE),
                                        GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_bool & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsConstant.objectCompare (inOperand.mProperty_mIsConstant) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mIsConstant.isValid () && mProperty_mPropertyType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mIsConstant.drop () ;
  mProperty_mPropertyType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  const GALGAS_propertyMap_2D_element * p = (const GALGAS_propertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element::GALGAS_constantIndexMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mAssociatedTypeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element::~ GALGAS_constantIndexMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element::GALGAS_constantIndexMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_unifiedTypeMapEntryList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mAssociatedTypeList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantIndexMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_unifiedTypeMapEntryList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_unifiedTypeMapEntryList & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantIndexMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constantIndexMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constantIndexMap_2D_element::objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssociatedTypeList.objectCompare (inOperand.mProperty_mAssociatedTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constantIndexMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mAssociatedTypeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedTypeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @constantIndexMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssociatedTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constantIndexMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap_2D_element ("constantIndexMap-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantIndexMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantIndexMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap_2D_element result ;
  const GALGAS_constantIndexMap_2D_element * p = (const GALGAS_constantIndexMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantIndexMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap_2D_element::GALGAS_grammarLabelMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLabelSignature () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap_2D_element::~ GALGAS_grammarLabelMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap_2D_element::GALGAS_grammarLabelMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_formalParameterSignature & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelSignature (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_grammarLabelMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_formalParameterSignature::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_formalParameterSignature & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarLabelMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_grammarLabelMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarLabelMap_2D_element::objectCompare (const GALGAS_grammarLabelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabelSignature.objectCompare (inOperand.mProperty_mLabelSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_grammarLabelMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelSignature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarLabelMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelSignature.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarLabelMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @grammarLabelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabelSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarLabelMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ("grammarLabelMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarLabelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarLabelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarLabelMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap_2D_element result ;
  const GALGAS_grammarLabelMap_2D_element * p = (const GALGAS_grammarLabelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarLabelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap_2D_element::GALGAS_grammarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLabelMap (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap_2D_element::~ GALGAS_grammarMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap_2D_element::GALGAS_grammarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_grammarLabelMap & inOperand1,
                                                            const GALGAS_bool & inOperand2,
                                                            const GALGAS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mLabelMap (inOperand1),
mProperty_mHasIndexing (inOperand2),
mProperty_mHasTranslateFeature (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_grammarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_grammarLabelMap::constructor_emptyMap (HERE),
                                       GALGAS_bool::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_grammarLabelMap & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_grammarMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarMap_2D_element::objectCompare (const GALGAS_grammarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabelMap.objectCompare (inOperand.mProperty_mLabelMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasIndexing.objectCompare (inOperand.mProperty_mHasIndexing) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasTranslateFeature.objectCompare (inOperand.mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_grammarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelMap.isValid () && mProperty_mHasIndexing.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelMap.drop () ;
  mProperty_mHasIndexing.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @grammarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabelMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarMap_2D_element ("grammarMap-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap_2D_element result ;
  const GALGAS_grammarMap_2D_element * p = (const GALGAS_grammarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineSignature (),
mProperty_mIsInternal () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::~ GALGAS_routineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_formalParameterSignature & inOperand1,
                                                            const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRoutineSignature (inOperand1),
mProperty_mIsInternal (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_formalParameterSignature & inOperand1,
                                                                            const GALGAS_bool & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineMap_2D_element::objectCompare (const GALGAS_routineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineSignature.objectCompare (inOperand.mProperty_mRoutineSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsInternal.objectCompare (inOperand.mProperty_mIsInternal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineSignature.isValid () && mProperty_mIsInternal.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineSignature.drop () ;
  mProperty_mIsInternal.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @routineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap_2D_element ("routineMap-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  const GALGAS_routineMap_2D_element * p = (const GALGAS_routineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mFunctionSignature (),
mProperty_mResultType (),
mProperty_mIsInternal () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_functionSignature & inOperand1,
                                                              const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                              const GALGAS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mFunctionSignature (inOperand1),
mProperty_mResultType (inOperand2),
mProperty_mIsInternal (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_functionSignature::constructor_emptyList (HERE),
                                        GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                        GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_functionSignature & inOperand1,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                              const GALGAS_bool & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionMap_2D_element::objectCompare (const GALGAS_functionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionSignature.objectCompare (inOperand.mProperty_mFunctionSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsInternal.objectCompare (inOperand.mProperty_mIsInternal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFunctionSignature.isValid () && mProperty_mResultType.isValid () && mProperty_mIsInternal.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFunctionSignature.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mIsInternal.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @functionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  const GALGAS_functionMap_2D_element * p = (const GALGAS_functionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap_2D_element::GALGAS_wrapperFileMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAbsoluteFilePath (),
mProperty_mIsTextFile (),
mProperty_mWrapperDirectoryIndex (),
mProperty_mWrapperFileIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap_2D_element::~ GALGAS_wrapperFileMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap_2D_element::GALGAS_wrapperFileMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_uint & inOperand3,
                                                                    const GALGAS_uint & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mAbsoluteFilePath (inOperand1),
mProperty_mIsTextFile (inOperand2),
mProperty_mWrapperDirectoryIndex (inOperand3),
mProperty_mWrapperFileIndex (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperFileMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_uint & inOperand3,
                                                                                    const GALGAS_uint & inOperand4 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperFileMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_wrapperFileMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_wrapperFileMap_2D_element::objectCompare (const GALGAS_wrapperFileMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAbsoluteFilePath.objectCompare (inOperand.mProperty_mAbsoluteFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsTextFile.objectCompare (inOperand.mProperty_mIsTextFile) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWrapperDirectoryIndex.objectCompare (inOperand.mProperty_mWrapperDirectoryIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWrapperFileIndex.objectCompare (inOperand.mProperty_mWrapperFileIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperFileMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAbsoluteFilePath.isValid () && mProperty_mIsTextFile.isValid () && mProperty_mWrapperDirectoryIndex.isValid () && mProperty_mWrapperFileIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAbsoluteFilePath.drop () ;
  mProperty_mIsTextFile.drop () ;
  mProperty_mWrapperDirectoryIndex.drop () ;
  mProperty_mWrapperFileIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @wrapperFileMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAbsoluteFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsTextFile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWrapperFileIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperFileMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ("wrapperFileMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperFileMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperFileMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperFileMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap_2D_element result ;
  const GALGAS_wrapperFileMap_2D_element * p = (const GALGAS_wrapperFileMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperFileMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegularFileMap (),
mProperty_mDirectoryMap (),
mProperty_mWrapperDirectoryIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element::~ GALGAS_wrapperDirectoryMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_wrapperFileMap & inOperand1,
                                                                              const GALGAS_wrapperDirectoryMap & inOperand2,
                                                                              const GALGAS_uint & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mRegularFileMap (inOperand1),
mProperty_mDirectoryMap (inOperand2),
mProperty_mWrapperDirectoryIndex (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperDirectoryMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                                GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                                GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_wrapperFileMap & inOperand1,
                                                                                              const GALGAS_wrapperDirectoryMap & inOperand2,
                                                                                              const GALGAS_uint & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_wrapperDirectoryMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_wrapperDirectoryMap_2D_element::objectCompare (const GALGAS_wrapperDirectoryMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularFileMap.objectCompare (inOperand.mProperty_mRegularFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDirectoryMap.objectCompare (inOperand.mProperty_mDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWrapperDirectoryIndex.objectCompare (inOperand.mProperty_mWrapperDirectoryIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperDirectoryMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegularFileMap.isValid () && mProperty_mDirectoryMap.isValid () && mProperty_mWrapperDirectoryIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegularFileMap.drop () ;
  mProperty_mDirectoryMap.drop () ;
  mProperty_mWrapperDirectoryIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperDirectoryMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperDirectoryMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ("wrapperDirectoryMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperDirectoryMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperDirectoryMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperDirectoryMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap_2D_element result ;
  const GALGAS_wrapperDirectoryMap_2D_element * p = (const GALGAS_wrapperDirectoryMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperDirectoryMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTemplateSignature (),
mProperty_mFilewrapperTemplatePath () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element::~ GALGAS_filewrapperTemplateMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mTemplateSignature (inOperand1),
mProperty_mFilewrapperTemplatePath (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_functionSignature::constructor_emptyList (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperTemplateMap_2D_element::objectCompare (const GALGAS_filewrapperTemplateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTemplateSignature.objectCompare (inOperand.mProperty_mTemplateSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplatePath.objectCompare (inOperand.mProperty_mFilewrapperTemplatePath) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperTemplateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTemplateSignature.isValid () && mProperty_mFilewrapperTemplatePath.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTemplateSignature.drop () ;
  mProperty_mFilewrapperTemplatePath.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTemplateSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ("filewrapperTemplateMap-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap_2D_element result ;
  const GALGAS_filewrapperTemplateMap_2D_element * p = (const GALGAS_filewrapperTemplateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (void) :
mProperty_lkey (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperExtensionList (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateMap (),
mProperty_mIsInternal () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element::~ GALGAS_filewrapperMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_lstringlist & inOperand2,
                                                                    const GALGAS_wrapperFileMap & inOperand3,
                                                                    const GALGAS_wrapperDirectoryMap & inOperand4,
                                                                    const GALGAS_filewrapperTemplateMap & inOperand5,
                                                                    const GALGAS_bool & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mFilewrapperPath (inOperand1),
mProperty_mFilewrapperExtensionList (inOperand2),
mProperty_mFilewrapperFileMap (inOperand3),
mProperty_mFilewrapperDirectoryMap (inOperand4),
mProperty_mFilewrapperTemplateMap (inOperand5),
mProperty_mIsInternal (inOperand6) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                           GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                           GALGAS_filewrapperTemplateMap::constructor_emptyMap (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstringlist & inOperand2,
                                                                                    const GALGAS_wrapperFileMap & inOperand3,
                                                                                    const GALGAS_wrapperDirectoryMap & inOperand4,
                                                                                    const GALGAS_filewrapperTemplateMap & inOperand5,
                                                                                    const GALGAS_bool & inOperand6 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_filewrapperMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperMap_2D_element::objectCompare (const GALGAS_filewrapperMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperPath.objectCompare (inOperand.mProperty_mFilewrapperPath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperExtensionList.objectCompare (inOperand.mProperty_mFilewrapperExtensionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperFileMap.objectCompare (inOperand.mProperty_mFilewrapperFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperDirectoryMap.objectCompare (inOperand.mProperty_mFilewrapperDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplateMap.objectCompare (inOperand.mProperty_mFilewrapperTemplateMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsInternal.objectCompare (inOperand.mProperty_mIsInternal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFilewrapperPath.isValid () && mProperty_mFilewrapperExtensionList.isValid () && mProperty_mFilewrapperFileMap.isValid () && mProperty_mFilewrapperDirectoryMap.isValid () && mProperty_mFilewrapperTemplateMap.isValid () && mProperty_mIsInternal.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFilewrapperPath.drop () ;
  mProperty_mFilewrapperExtensionList.drop () ;
  mProperty_mFilewrapperFileMap.drop () ;
  mProperty_mFilewrapperDirectoryMap.drop () ;
  mProperty_mFilewrapperTemplateMap.drop () ;
  mProperty_mIsInternal.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @filewrapperMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperExtensionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperTemplateMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperMap_2D_element ("filewrapperMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap_2D_element result ;
  const GALGAS_filewrapperMap_2D_element * p = (const GALGAS_filewrapperMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPredefined (),
mProperty_mBoolOptionMap (),
mProperty_mUIntOptionMap (),
mProperty_mStringOptionMap (),
mProperty_mStringListOptionMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand3,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand4,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mIsPredefined (inOperand1),
mProperty_mBoolOptionMap (inOperand2),
mProperty_mUIntOptionMap (inOperand3),
mProperty_mStringOptionMap (inOperand4),
mProperty_mStringListOptionMap (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand3,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand4,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand5 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_optionComponentMapForSemanticAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPredefined.objectCompare (inOperand.mProperty_mIsPredefined) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoolOptionMap.objectCompare (inOperand.mProperty_mBoolOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUIntOptionMap.objectCompare (inOperand.mProperty_mUIntOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringOptionMap.objectCompare (inOperand.mProperty_mStringOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringListOptionMap.objectCompare (inOperand.mProperty_mStringListOptionMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPredefined.isValid () && mProperty_mBoolOptionMap.isValid () && mProperty_mUIntOptionMap.isValid () && mProperty_mStringOptionMap.isValid () && mProperty_mStringListOptionMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPredefined.drop () ;
  mProperty_mBoolOptionMap.drop () ;
  mProperty_mUIntOptionMap.drop () ;
  mProperty_mStringOptionMap.drop () ;
  mProperty_mStringListOptionMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @optionComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoolOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUIntOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringListOptionMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentMapForSemanticAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ("optionComponentMapForSemanticAnalysis-element",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis_2D_element result ;
  const GALGAS_optionComponentMapForSemanticAnalysis_2D_element * p = (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForSemanticAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mTerminalMap (),
mProperty_mIndexingListAST (),
mProperty_mIndexingDirectory () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_terminalMap & inOperand1,
                                                                                                                    const GALGAS_indexingListAST & inOperand2,
                                                                                                                    const GALGAS_lstring & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mTerminalMap (inOperand1),
mProperty_mIndexingListAST (inOperand2),
mProperty_mIndexingDirectory (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_terminalMap::constructor_emptyMap (HERE),
                                                                   GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_terminalMap & inOperand1,
                                                                                                                                    const GALGAS_indexingListAST & inOperand2,
                                                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalMap.objectCompare (inOperand.mProperty_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndexingListAST.objectCompare (inOperand.mProperty_mIndexingListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndexingDirectory.objectCompare (inOperand.mProperty_mIndexingDirectory) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mIndexingListAST.isValid () && mProperty_mIndexingDirectory.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mIndexingListAST.drop () ;
  mProperty_mIndexingDirectory.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @lexiqueComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndexingDirectory.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentMapForSemanticAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ("lexiqueComponentMapForSemanticAnalysis-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element result ;
  const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element * p = (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element::GALGAS_syntaxComponentMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element::~ GALGAS_syntaxComponentMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element::GALGAS_syntaxComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                            const GALGAS_syntaxRuleListAST & inOperand3,
                                                                            const GALGAS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mLexiqueName (inOperand1),
mProperty_mNonterminalDeclarationList (inOperand2),
mProperty_mRuleList (inOperand3),
mProperty_mHasTranslateFeature (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element GALGAS_syntaxComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                               GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                               GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element GALGAS_syntaxComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                            const GALGAS_syntaxRuleListAST & inOperand3,
                                                                                            const GALGAS_bool & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_syntaxComponentMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxComponentMap_2D_element::objectCompare (const GALGAS_syntaxComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueName.objectCompare (inOperand.mProperty_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalDeclarationList.objectCompare (inOperand.mProperty_mNonterminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRuleList.objectCompare (inOperand.mProperty_mRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasTranslateFeature.objectCompare (inOperand.mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxComponentMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexiqueName.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @syntaxComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxComponentMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ("syntaxComponentMap-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element GALGAS_syntaxComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap_2D_element result ;
  const GALGAS_syntaxComponentMap_2D_element * p = (const GALGAS_syntaxComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::~ GALGAS_extensionMethodMapForType_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_formalParameterListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionMethodMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodMapForType_2D_element::objectCompare (const GALGAS_extensionMethodMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForType-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ("extensionMethodMapForType-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForType_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  const GALGAS_extensionMethodMapForType_2D_element * p = (const GALGAS_extensionMethodMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionMethodMapForType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::~ GALGAS_extensionMethodMapForBuildingContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionMethodMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionMethodMapForType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionMethodMapForType::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionMethodMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionMethodMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionMethodMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionMethodMapForType.objectCompare (inOperand.mProperty_mExtensionMethodMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionMethodMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionMethodMapForType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtensionMethodMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForBuildingContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ("extensionMethodMapForBuildingContext-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  const GALGAS_extensionMethodMapForBuildingContext_2D_element * p = (const GALGAS_extensionMethodMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::~ GALGAS_extensionSetterMapForType_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_formalParameterListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionSetterMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterMapForType_2D_element::objectCompare (const GALGAS_extensionSetterMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForType-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ("extensionSetterMapForType-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  const GALGAS_extensionSetterMapForType_2D_element * p = (const GALGAS_extensionSetterMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionSetterMapForType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::~ GALGAS_extensionSetterMapForBuildingContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionSetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionSetterMapForType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionSetterMapForType::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionSetterMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionSetterMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionSetterMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionSetterMapForType.objectCompare (inOperand.mProperty_mExtensionSetterMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionSetterMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionSetterMapForType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtensionSetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForBuildingContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ("extensionSetterMapForBuildingContext-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  const GALGAS_extensionSetterMapForBuildingContext_2D_element * p = (const GALGAS_extensionSetterMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mResultTypeName (),
mProperty_mInputFormalParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::~ GALGAS_extensionGetterMapForType_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_formalInputParameterListAST & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultTypeName (inOperand1),
mProperty_mInputFormalParameterList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalInputParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_formalInputParameterListAST & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_extensionGetterMapForType_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterMapForType_2D_element::objectCompare (const GALGAS_extensionGetterMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultTypeName.objectCompare (inOperand.mProperty_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInputFormalParameterList.objectCompare (inOperand.mProperty_mInputFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mInputFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultTypeName.drop () ;
  mProperty_mInputFormalParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInputFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForType-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ("extensionGetterMapForType-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType_2D_element result ;
  const GALGAS_extensionGetterMapForType_2D_element * p = (const GALGAS_extensionGetterMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionGetterMapForType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::~ GALGAS_extensionGetterMapForBuildingContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionGetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionGetterMapForType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionGetterMapForType::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionGetterMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionGetterMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionGetterMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionGetterMapForType.objectCompare (inOperand.mProperty_mExtensionGetterMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionGetterMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionGetterMapForType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtensionGetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForBuildingContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ("extensionGetterMapForBuildingContext-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  const GALGAS_extensionGetterMapForBuildingContext_2D_element * p = (const GALGAS_extensionGetterMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::~ GALGAS_wrapperExtensionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperExtensionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_wrapperExtensionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_wrapperExtensionMap_2D_element::objectCompare (const GALGAS_wrapperExtensionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperExtensionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperExtensionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperExtensionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ("wrapperExtensionMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperExtensionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperExtensionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperExtensionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  const GALGAS_wrapperExtensionMap_2D_element * p = (const GALGAS_wrapperExtensionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperExtensionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName (),
mProperty_mFormalArgumentCppName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::~ GALGAS_formalParameterListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_string & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mFormalArgumentCppName (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentCppName.objectCompare (inOperand.mProperty_mFormalArgumentCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mFormalArgumentCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @formalParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalParameterListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ("formalParameterListForGeneration-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  const GALGAS_formalParameterListForGeneration_2D_element * p = (const GALGAS_formalParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentCppName (),
mProperty_mFormalArgumentName (),
mProperty_mIsConstant () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::~ GALGAS_formalInputParameterListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                  const GALGAS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentCppName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                                  const GALGAS_bool & inOperand4 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalInputParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalInputParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentCppName.objectCompare (inOperand.mProperty_mFormalArgumentCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsConstant.objectCompare (inOperand.mProperty_mIsConstant) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalInputParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentCppName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsConstant.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsConstant.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @formalInputParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalInputParameterListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ("formalInputParameterListForGeneration-element",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  const GALGAS_formalInputParameterListForGeneration_2D_element * p = (const GALGAS_formalInputParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (void) :
mProperty_mActualParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::~ GALGAS_actualParameterListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::constructor_new (const GALGAS_actualParameterForGeneration & inOperand0 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualParameterListForGeneration_2D_element::objectCompare (const GALGAS_actualParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActualParameter.objectCompare (inOperand.mProperty_mActualParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actualParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ("actualParameterListForGeneration-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  const GALGAS_actualParameterListForGeneration_2D_element * p = (const GALGAS_actualParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (void) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (),
mProperty_mGalgasTypeNameForGrammarAnalysis () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::~ GALGAS_signatureForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (inOperand0),
mProperty_mGalgasTypeNameForGrammarAnalysis (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::constructor_new (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_signatureForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_signatureForGrammarAnalysis_2D_element::objectCompare (const GALGAS_signatureForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingModeForGrammarAnalysis.objectCompare (inOperand.mProperty_mFormalArgumentPassingModeForGrammarAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGalgasTypeNameForGrammarAnalysis.objectCompare (inOperand.mProperty_mGalgasTypeNameForGrammarAnalysis) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_signatureForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingModeForGrammarAnalysis.isValid () && mProperty_mGalgasTypeNameForGrammarAnalysis.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingModeForGrammarAnalysis.drop () ;
  mProperty_mGalgasTypeNameForGrammarAnalysis.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @signatureForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@signatureForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ("signatureForGrammarAnalysis-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_signatureForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_signatureForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_signatureForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  const GALGAS_signatureForGrammarAnalysis_2D_element * p = (const GALGAS_signatureForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_signatureForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParametersList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParametersList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                        GALGAS_signatureForGrammarAnalysis::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParametersList.objectCompare (inOperand.mProperty_mFormalParametersList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParametersList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParametersList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @nonterminalSymbolLabelMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParametersList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonterminalSymbolLabelMapForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ("nonterminalSymbolLabelMapForGrammarAnalysis-element",
                                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mNonTerminalIndex (),
mProperty_mNonterminalSymbolParametersMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1),
mProperty_mNonterminalSymbolParametersMap (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE),
                                                                   GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonTerminalIndex.objectCompare (inOperand.mProperty_mNonTerminalIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalSymbolParametersMap.objectCompare (inOperand.mProperty_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () && mProperty_mNonterminalSymbolParametersMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
  mProperty_mNonterminalSymbolParametersMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonTerminalSymbolMapForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ("nonTerminalSymbolMapForGrammarAnalysis-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

