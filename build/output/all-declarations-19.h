#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas3ProjectGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (Lexique_galgasScanner_33_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_ (const GGS_lstring inArgument0,
                                                                    GGS_galgas_33_ProjectComponentAST & outArgument1,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  const GGS_lstring inArgument0,
                                                  GGS_galgas_33_ProjectComponentAST & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    const GGS_lstring inArgument0,
                                                    GGS_galgas_33_ProjectComponentAST & outArgument1
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'project_header' non terminal
//--- 'parse' label
 /*  public: virtual void nt_project_5F_header_parse (Lexique_galgasScanner_33_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_project_5F_header_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_header_ (GGS_lbigint & outArgument0,
                                              GGS_lbigint & outArgument1,
                                              GGS_lbigint & outArgument2,
                                              GGS_lstring & outArgument3,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

  public: virtual int32_t select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (class GGS_localVarManager & ioObject,
                                              const class GGS_lstring constin_inVarName,
                                              const class GGS_unifiedTypeMapEntry constin_inType,
                                              const class GGS_string constin_inCppName,
                                              const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (class GGS_localVarManager & ioObject,
                                                  const class GGS_lstring constin_inVarName,
                                                  const class GGS_unifiedTypeMapEntry constin_inType,
                                                  const class GGS_string constin_inCppName,
                                                  const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (class GGS_localVarManager & ioObject,
                                                                const class GGS_lstring constin_inVarName,
                                                                const class GGS_unifiedTypeMapEntry constin_inType,
                                                                const class GGS_string constin_inCppName,
                                                                const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (class GGS_localVarManager & ioObject,
                                                const class GGS_lstring constin_inVarName,
                                                const class GGS_unifiedTypeMapEntry constin_inType,
                                                const class GGS_string constin_inCppName,
                                                const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (class GGS_localVarManager & ioObject,
                                                                        const class GGS_lstring constin_inVarName,
                                                                        const class GGS_unifiedTypeMapEntry constin_inType,
                                                                        const class GGS_string constin_inCppName,
                                                                        const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (class GGS_localVarManager & ioObject,
                                                        const class GGS_lstring constin_inVarName,
                                                        const class GGS_unifiedTypeMapEntry constin_inType,
                                                        const class GGS_string constin_inCppName,
                                                        const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (class GGS_localVarManager & ioObject,
                                                 const class GGS_lstring constin_inVarName,
                                                 const class GGS_unifiedTypeMapEntry constin_inType,
                                                 const class GGS_string constin_inCppName,
                                                 const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (class GGS_localVarManager & ioObject,
                                                                      const class GGS_lstring constin_inVarName,
                                                                      const class GGS_unifiedTypeMapEntry constin_inType,
                                                                      const class GGS_string constin_inCppName,
                                                                      const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (class GGS_localVarManager & ioObject,
                                                      const class GGS_lstring constin_inVarName,
                                                      const class GGS_unifiedTypeMapEntry constin_inType,
                                                      const class GGS_string constin_inCppName,
                                                      const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (class GGS_localVarManager & ioObject,
                                               const class GGS_lstring constin_inVarName,
                                               const class GGS_unifiedTypeMapEntry constin_inType,
                                               const class GGS_string constin_inCppName,
                                               const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (class GGS_localVarManager & ioObject,
                                            const class GGS_lstring constin_inVarName,
                                            const class GGS_unifiedTypeMapEntry constin_inType,
                                            const class GGS_string constin_inCppName,
                                            const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializerSelfProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializerSelfProperty (class GGS_localVarManager & ioObject,
                                                    const class GGS_string constin_inPropertyName,
                                                    const class GGS_location constin_inErrorLocation,
                                                    const class GGS_unifiedTypeMapEntry constin_inType,
                                                    const class GGS_string constin_inCppName,
                                                    const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                    const class GGS_bool constin_inInitialized,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (class GGS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (class GGS_localVarManager & ioObject,
                                    const class GGS_location constin_inEndOfBranchLocation,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GGS_localVarManager & ioObject,
                                  const class GGS_location constin_inEndOfBranchLocation,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const class GGS_localVarManager inObject,
                                                        const class GGS_location constin_inErrorLocation,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS_localVarManager & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GGS_localVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GGS_localVarManager & ioObject,
                                           const class GGS_lstring constin_inVarName,
                                           class GGS_unifiedTypeMapEntry & out_outType,
                                           class GGS_string & out_outCppName,
                                           class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GGS_localVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GGS_localVarManager & ioObject,
                                               const class GGS_lstring constin_inVarName,
                                               class GGS_unifiedTypeMapEntry & out_outType,
                                               class GGS_string & out_outCppName,
                                               class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GGS_localVarManager inObject,
                                           const class GGS_location constin_inErrorLocation,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@genericExtensionMethodListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_genericExtensionMethodListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_lstring constin_inValue,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@descendantClassListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_descendantClassListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XcodeProjectDescriptor struct
//--------------------------------------------------------------------------------------------------

class GGS_XcodeProjectDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mSequenceNumber ;
  public: inline GGS_uint readProperty_mSequenceNumber (void) const {
    return mProperty_mSequenceNumber ;
  }

  public: GGS_string mProperty_mMainGroupReference ;
  public: inline GGS_string readProperty_mMainGroupReference (void) const {
    return mProperty_mMainGroupReference ;
  }

  public: GGS_stringlist mProperty_mMainGroupChildrenRefs ;
  public: inline GGS_stringlist readProperty_mMainGroupChildrenRefs (void) const {
    return mProperty_mMainGroupChildrenRefs ;
  }

  public: GGS_string mProperty_mProjectObjectReference ;
  public: inline GGS_string readProperty_mProjectObjectReference (void) const {
    return mProperty_mProjectObjectReference ;
  }

  public: GGS_XCodeGroupList mProperty_mGroupList ;
  public: inline GGS_XCodeGroupList readProperty_mGroupList (void) const {
    return mProperty_mGroupList ;
  }

  public: GGS_XCodeToolTargetList mProperty_mToolTargetList ;
  public: inline GGS_XCodeToolTargetList readProperty_mToolTargetList (void) const {
    return mProperty_mToolTargetList ;
  }

  public: GGS_XCodeAppTargetList mProperty_mAppTargetList ;
  public: inline GGS_XCodeAppTargetList readProperty_mAppTargetList (void) const {
    return mProperty_mAppTargetList ;
  }

  public: GGS__32_stringlist mProperty_mCFileList ;
  public: inline GGS__32_stringlist readProperty_mCFileList (void) const {
    return mProperty_mCFileList ;
  }

  public: GGS__32_stringlist mProperty_mCppFileList ;
  public: inline GGS__32_stringlist readProperty_mCppFileList (void) const {
    return mProperty_mCppFileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_Swift_5F_FileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_Swift_5F_FileList (void) const {
    return mProperty_m_5F_Swift_5F_FileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_M_5F_FileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_M_5F_FileList (void) const {
    return mProperty_m_5F_M_5F_FileList ;
  }

  public: GGS__32_stringlist mProperty_m_5F_MM_5F_FileList ;
  public: inline GGS__32_stringlist readProperty_m_5F_MM_5F_FileList (void) const {
    return mProperty_m_5F_MM_5F_FileList ;
  }

  public: GGS__32_stringlist mProperty_mFrameworkFileList ;
  public: inline GGS__32_stringlist readProperty_mFrameworkFileList (void) const {
    return mProperty_mFrameworkFileList ;
  }

  public: GGS__32_stringlist mProperty_mHeaderFileList ;
  public: inline GGS__32_stringlist readProperty_mHeaderFileList (void) const {
    return mProperty_mHeaderFileList ;
  }

  public: GGS_BuildFileList mProperty_mBuildFileList ;
  public: inline GGS_BuildFileList readProperty_mBuildFileList (void) const {
    return mProperty_mBuildFileList ;
  }

  public: GGS_string mProperty_mDefaultConfigurationRef ;
  public: inline GGS_string readProperty_mDefaultConfigurationRef (void) const {
    return mProperty_mDefaultConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mDefaultConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mDefaultConfigurationSettingList (void) const {
    return mProperty_mDefaultConfigurationSettingList ;
  }

  public: GGS_string mProperty_mProjectBuildConfigurationRef ;
  public: inline GGS_string readProperty_mProjectBuildConfigurationRef (void) const {
    return mProperty_mProjectBuildConfigurationRef ;
  }

  public: GGS__32_stringlist mProperty_mInfoPlistFileList ;
  public: inline GGS__32_stringlist readProperty_mInfoPlistFileList (void) const {
    return mProperty_mInfoPlistFileList ;
  }

  public: GGS__32_stringlist mProperty_mXIB_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mXIB_5F_fileList (void) const {
    return mProperty_mXIB_5F_fileList ;
  }

  public: GGS__32_stringlist mProperty_mTIFF_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mTIFF_5F_fileList (void) const {
    return mProperty_mTIFF_5F_fileList ;
  }

  public: GGS__32_stringlist mProperty_mICNS_5F_fileList ;
  public: inline GGS__32_stringlist readProperty_mICNS_5F_fileList (void) const {
    return mProperty_mICNS_5F_fileList ;
  }

  public: GGS_string mProperty_mApplicationBundleName ;
  public: inline GGS_string readProperty_mApplicationBundleName (void) const {
    return mProperty_mApplicationBundleName ;
  }

  public: GGS_string mProperty_mProjectName ;
  public: inline GGS_string readProperty_mProjectName (void) const {
    return mProperty_mProjectName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XcodeProjectDescriptor (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSequenceNumber (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSequenceNumber = inValue ;
  }

  public: inline void setter_setMMainGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupReference = inValue ;
  }

  public: inline void setter_setMMainGroupChildrenRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupChildrenRefs = inValue ;
  }

  public: inline void setter_setMProjectObjectReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectObjectReference = inValue ;
  }

  public: inline void setter_setMGroupList (const GGS_XCodeGroupList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupList = inValue ;
  }

  public: inline void setter_setMToolTargetList (const GGS_XCodeToolTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToolTargetList = inValue ;
  }

  public: inline void setter_setMAppTargetList (const GGS_XCodeAppTargetList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAppTargetList = inValue ;
  }

  public: inline void setter_setMCFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCFileList = inValue ;
  }

  public: inline void setter_setMCppFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppFileList = inValue ;
  }

  public: inline void setter_setM_5F_Swift_5F_FileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_Swift_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_M_5F_FileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_M_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_MM_5F_FileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_MM_5F_FileList = inValue ;
  }

  public: inline void setter_setMFrameworkFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkFileList = inValue ;
  }

  public: inline void setter_setMHeaderFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileList = inValue ;
  }

  public: inline void setter_setMBuildFileList (const GGS_BuildFileList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildFileList = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationRef = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMProjectBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMInfoPlistFileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPlistFileList = inValue ;
  }

  public: inline void setter_setMXIB_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXIB_5F_fileList = inValue ;
  }

  public: inline void setter_setMTIFF_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTIFF_5F_fileList = inValue ;
  }

  public: inline void setter_setMICNS_5F_fileList (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mICNS_5F_fileList = inValue ;
  }

  public: inline void setter_setMApplicationBundleName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mApplicationBundleName = inValue ;
  }

  public: inline void setter_setMProjectName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XcodeProjectDescriptor (const GGS_uint & in_mSequenceNumber,
                                      const GGS_string & in_mMainGroupReference,
                                      const GGS_stringlist & in_mMainGroupChildrenRefs,
                                      const GGS_string & in_mProjectObjectReference,
                                      const GGS_XCodeGroupList & in_mGroupList,
                                      const GGS_XCodeToolTargetList & in_mToolTargetList,
                                      const GGS_XCodeAppTargetList & in_mAppTargetList,
                                      const GGS__32_stringlist & in_mCFileList,
                                      const GGS__32_stringlist & in_mCppFileList,
                                      const GGS__32_stringlist & in_m_5F_Swift_5F_FileList,
                                      const GGS__32_stringlist & in_m_5F_M_5F_FileList,
                                      const GGS__32_stringlist & in_m_5F_MM_5F_FileList,
                                      const GGS__32_stringlist & in_mFrameworkFileList,
                                      const GGS__32_stringlist & in_mHeaderFileList,
                                      const GGS_BuildFileList & in_mBuildFileList,
                                      const GGS_string & in_mDefaultConfigurationRef,
                                      const GGS_stringlist & in_mDefaultConfigurationSettingList,
                                      const GGS_string & in_mProjectBuildConfigurationRef,
                                      const GGS__32_stringlist & in_mInfoPlistFileList,
                                      const GGS__32_stringlist & in_mXIB_5F_fileList,
                                      const GGS__32_stringlist & in_mTIFF_5F_fileList,
                                      const GGS__32_stringlist & in_mICNS_5F_fileList,
                                      const GGS_string & in_mApplicationBundleName,
                                      const GGS_string & in_mProjectName) ;

//--------------------------------- Copy constructor
  public: GGS_XcodeProjectDescriptor (const GGS_XcodeProjectDescriptor & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XcodeProjectDescriptor & operator = (const GGS_XcodeProjectDescriptor & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XcodeProjectDescriptor init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XcodeProjectDescriptor extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

