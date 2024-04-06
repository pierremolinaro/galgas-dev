#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @XcodeProjectDescriptor struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_XcodeProjectDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mSequenceNumber ;
  public: inline GALGAS_uint readProperty_mSequenceNumber (void) const {
    return mProperty_mSequenceNumber ;
  }

  public: GALGAS_string mProperty_mMainGroupReference ;
  public: inline GALGAS_string readProperty_mMainGroupReference (void) const {
    return mProperty_mMainGroupReference ;
  }

  public: GALGAS_stringlist mProperty_mMainGroupChildrenRefs ;
  public: inline GALGAS_stringlist readProperty_mMainGroupChildrenRefs (void) const {
    return mProperty_mMainGroupChildrenRefs ;
  }

  public: GALGAS_string mProperty_mProjectObjectReference ;
  public: inline GALGAS_string readProperty_mProjectObjectReference (void) const {
    return mProperty_mProjectObjectReference ;
  }

  public: GALGAS_XCodeGroupList mProperty_mGroupList ;
  public: inline GALGAS_XCodeGroupList readProperty_mGroupList (void) const {
    return mProperty_mGroupList ;
  }

  public: GALGAS_XCodeToolTargetList mProperty_mToolTargetList ;
  public: inline GALGAS_XCodeToolTargetList readProperty_mToolTargetList (void) const {
    return mProperty_mToolTargetList ;
  }

  public: GALGAS_XCodeAppTargetList mProperty_mAppTargetList ;
  public: inline GALGAS_XCodeAppTargetList readProperty_mAppTargetList (void) const {
    return mProperty_mAppTargetList ;
  }

  public: GALGAS__32_stringlist mProperty_mCFileList ;
  public: inline GALGAS__32_stringlist readProperty_mCFileList (void) const {
    return mProperty_mCFileList ;
  }

  public: GALGAS__32_stringlist mProperty_mCppFileList ;
  public: inline GALGAS__32_stringlist readProperty_mCppFileList (void) const {
    return mProperty_mCppFileList ;
  }

  public: GALGAS__32_stringlist mProperty_m_5F_M_5F_FileList ;
  public: inline GALGAS__32_stringlist readProperty_m_5F_M_5F_FileList (void) const {
    return mProperty_m_5F_M_5F_FileList ;
  }

  public: GALGAS__32_stringlist mProperty_m_5F_MM_5F_FileList ;
  public: inline GALGAS__32_stringlist readProperty_m_5F_MM_5F_FileList (void) const {
    return mProperty_m_5F_MM_5F_FileList ;
  }

  public: GALGAS__32_stringlist mProperty_mFrameworkFileList ;
  public: inline GALGAS__32_stringlist readProperty_mFrameworkFileList (void) const {
    return mProperty_mFrameworkFileList ;
  }

  public: GALGAS__32_stringlist mProperty_mHeaderFileList ;
  public: inline GALGAS__32_stringlist readProperty_mHeaderFileList (void) const {
    return mProperty_mHeaderFileList ;
  }

  public: GALGAS_BuildFileList mProperty_mBuildFileList ;
  public: inline GALGAS_BuildFileList readProperty_mBuildFileList (void) const {
    return mProperty_mBuildFileList ;
  }

  public: GALGAS_string mProperty_mDefaultConfigurationRef ;
  public: inline GALGAS_string readProperty_mDefaultConfigurationRef (void) const {
    return mProperty_mDefaultConfigurationRef ;
  }

  public: GALGAS_stringlist mProperty_mDefaultConfigurationSettingList ;
  public: inline GALGAS_stringlist readProperty_mDefaultConfigurationSettingList (void) const {
    return mProperty_mDefaultConfigurationSettingList ;
  }

  public: GALGAS_string mProperty_mProjectBuildConfigurationRef ;
  public: inline GALGAS_string readProperty_mProjectBuildConfigurationRef (void) const {
    return mProperty_mProjectBuildConfigurationRef ;
  }

  public: GALGAS__32_stringlist mProperty_mInfoPlistFileList ;
  public: inline GALGAS__32_stringlist readProperty_mInfoPlistFileList (void) const {
    return mProperty_mInfoPlistFileList ;
  }

  public: GALGAS__32_stringlist mProperty_mXIB_5F_fileList ;
  public: inline GALGAS__32_stringlist readProperty_mXIB_5F_fileList (void) const {
    return mProperty_mXIB_5F_fileList ;
  }

  public: GALGAS__32_stringlist mProperty_mTIFF_5F_fileList ;
  public: inline GALGAS__32_stringlist readProperty_mTIFF_5F_fileList (void) const {
    return mProperty_mTIFF_5F_fileList ;
  }

  public: GALGAS__32_stringlist mProperty_mICNS_5F_fileList ;
  public: inline GALGAS__32_stringlist readProperty_mICNS_5F_fileList (void) const {
    return mProperty_mICNS_5F_fileList ;
  }

  public: GALGAS_string mProperty_mApplicationBundleName ;
  public: inline GALGAS_string readProperty_mApplicationBundleName (void) const {
    return mProperty_mApplicationBundleName ;
  }

  public: GALGAS_string mProperty_mProjectName ;
  public: inline GALGAS_string readProperty_mProjectName (void) const {
    return mProperty_mProjectName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSequenceNumber (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSequenceNumber = inValue ;
  }

  public: inline void setter_setMMainGroupReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupReference = inValue ;
  }

  public: inline void setter_setMMainGroupChildrenRefs (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupChildrenRefs = inValue ;
  }

  public: inline void setter_setMProjectObjectReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectObjectReference = inValue ;
  }

  public: inline void setter_setMGroupList (const GALGAS_XCodeGroupList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupList = inValue ;
  }

  public: inline void setter_setMToolTargetList (const GALGAS_XCodeToolTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToolTargetList = inValue ;
  }

  public: inline void setter_setMAppTargetList (const GALGAS_XCodeAppTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAppTargetList = inValue ;
  }

  public: inline void setter_setMCFileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCFileList = inValue ;
  }

  public: inline void setter_setMCppFileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppFileList = inValue ;
  }

  public: inline void setter_setM_5F_M_5F_FileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_M_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_MM_5F_FileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_MM_5F_FileList = inValue ;
  }

  public: inline void setter_setMFrameworkFileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkFileList = inValue ;
  }

  public: inline void setter_setMHeaderFileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileList = inValue ;
  }

  public: inline void setter_setMBuildFileList (const GALGAS_BuildFileList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildFileList = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationRef = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationSettingList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMProjectBuildConfigurationRef (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMInfoPlistFileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPlistFileList = inValue ;
  }

  public: inline void setter_setMXIB_5F_fileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXIB_5F_fileList = inValue ;
  }

  public: inline void setter_setMTIFF_5F_fileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTIFF_5F_fileList = inValue ;
  }

  public: inline void setter_setMICNS_5F_fileList (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mICNS_5F_fileList = inValue ;
  }

  public: inline void setter_setMApplicationBundleName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mApplicationBundleName = inValue ;
  }

  public: inline void setter_setMProjectName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_XcodeProjectDescriptor (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_XcodeProjectDescriptor (const GALGAS_uint & in_mSequenceNumber,
                                         const GALGAS_string & in_mMainGroupReference,
                                         const GALGAS_stringlist & in_mMainGroupChildrenRefs,
                                         const GALGAS_string & in_mProjectObjectReference,
                                         const GALGAS_XCodeGroupList & in_mGroupList,
                                         const GALGAS_XCodeToolTargetList & in_mToolTargetList,
                                         const GALGAS_XCodeAppTargetList & in_mAppTargetList,
                                         const GALGAS__32_stringlist & in_mCFileList,
                                         const GALGAS__32_stringlist & in_mCppFileList,
                                         const GALGAS__32_stringlist & in_m_5F_M_5F_FileList,
                                         const GALGAS__32_stringlist & in_m_5F_MM_5F_FileList,
                                         const GALGAS__32_stringlist & in_mFrameworkFileList,
                                         const GALGAS__32_stringlist & in_mHeaderFileList,
                                         const GALGAS_BuildFileList & in_mBuildFileList,
                                         const GALGAS_string & in_mDefaultConfigurationRef,
                                         const GALGAS_stringlist & in_mDefaultConfigurationSettingList,
                                         const GALGAS_string & in_mProjectBuildConfigurationRef,
                                         const GALGAS__32_stringlist & in_mInfoPlistFileList,
                                         const GALGAS__32_stringlist & in_mXIB_5F_fileList,
                                         const GALGAS__32_stringlist & in_mTIFF_5F_fileList,
                                         const GALGAS__32_stringlist & in_mICNS_5F_fileList,
                                         const GALGAS_string & in_mApplicationBundleName,
                                         const GALGAS_string & in_mProjectName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_XcodeProjectDescriptor init_28__29_ (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_XcodeProjectDescriptor extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_XcodeProjectDescriptor class_func_new (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_XcodeProjectDescriptor class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      const class GALGAS_string constin_inFileName,
                                      class GALGAS_string & out_outFileRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      class GALGAS_string & out_outRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                       const class GALGAS_string constin_inFileName,
                                       class GALGAS_string & out_outFileRef,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                               const class GALGAS_string constin_inFileName,
                               class GALGAS_string & out_outFileRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                const class GALGAS_string constin_inFileName,
                                class GALGAS_string & out_outFileRef,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                 const class GALGAS_string constin_inFileName,
                                 class GALGAS_string & out_outFileRef,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addCFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                               const class GALGAS_string constin_inFileName,
                               class GALGAS_string & out_outFileRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inFileName,
                                    class GALGAS_string & out_outFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (class GALGAS_XcodeProjectDescriptor & ioObject,
                                   const class GALGAS_string constin_inFileReference,
                                   const class GALGAS_string constin_inFileName,
                                   class GALGAS_string & out_outBuildRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                    const class GALGAS_string constin_inTargetName,
                                    const class GALGAS_string constin_inProductFileName,
                                    const class GALGAS_stringlist constin_inSourceList,
                                    const class GALGAS_stringlist constin_inToolFrameworksFileRefList,
                                    const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                    class GALGAS_string & out_outTargetRef,
                                    class GALGAS_string & out_outProductFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (class GALGAS_XcodeProjectDescriptor & ioObject,
                                   const class GALGAS_string constin_inTargetName,
                                   const class GALGAS_string constin_inProductFileName,
                                   const class GALGAS_stringlist constin_inSourceList,
                                   const class GALGAS_stringlist constin_inFrameworksFileRefList,
                                   const class GALGAS_stringlist constin_inResourceFileBuildRefs,
                                   const class GALGAS_stringlist constin_inBuildConfigurationSettingList,
                                   const class GALGAS_stringlist constin_inDependentTargetRefList,
                                   const class GALGAS__32_stringlist constin_inProductCopyList,
                                   class GALGAS_string & out_outProductFileRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                               const class GALGAS_string constin_inGroupName,
                               const class GALGAS_string constin_inGroupPath,
                               const class GALGAS_stringlist constin_inChildrenRefs,
                               class GALGAS_string & out_outGroupRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (class GALGAS_XcodeProjectDescriptor & ioObject,
                                        const class GALGAS_string constin_inGroupName,
                                        const class GALGAS_string constin_inGroupPath,
                                        const class GALGAS_stringset constin_inFileNames,
                                        class GALGAS_stringlist & io_ioCFileBuildRefs,
                                        class GALGAS_stringlist & io_ioCppFileBuildRefs,
                                        class GALGAS_stringlist & io_ioMFileBuildRefs,
                                        class GALGAS_stringlist & io_ioMMFileBuildRefs,
                                        class GALGAS_stringlist & io_ioFrameWorkFileBuildRefs,
                                        class GALGAS_stringlist & io_ioResourceFileBuildRefs,
                                        class GALGAS_string & out_outGroupRef,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (class GALGAS_XcodeProjectDescriptor & ioObject,
                                      const class GALGAS_string constin_inFileName,
                                      class GALGAS_string & out_outFileRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (class GALGAS_XcodeProjectDescriptor & ioObject,
                                            const class GALGAS_string constin_inGroupRef,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (class GALGAS_XcodeProjectDescriptor & ioObject,
                                                        const class GALGAS_stringlist constin_inSettingList,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const class GALGAS_XcodeProjectDescriptor inObject,
                                     const class GALGAS_string constin_inPath,
                                     const class GALGAS_string constin_inCacheFilePath,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper ;
extern const cDirectoryWrapper gWrapperDirectory_1_xcodeProjectGenerationFilewrapper ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (class Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_REF,
                                                                               const class GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const class GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const class GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const class GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const class GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_C_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const class GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const class GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const class GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const class GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const class GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const class GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                               const class GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_LOCATION_ARGS) ;

