#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GrammarComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GrammarComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                   const class GGS_lstring constinArgument1,
                                                                   class GGS__5B_nonTerminalLabelAST_5D_ & ioArgument2,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                 const GGS_lstring constinArgument1,
                                                                                                 GGS__5B_nonTerminalLabelAST_5D_ & ioArgument2,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ProgramDeclarations' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ProgramDeclarations (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS__5B_semanticInstructionAST_5D_ & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ProgramDeclarations_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_1 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XcodeProjectDescriptor struct
//--------------------------------------------------------------------------------------------------

class GGS_XcodeProjectDescriptor final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_u_33__32_ mProperty_mSequenceNumber ;
  public: inline GGS_u_33__32_ readProperty_mSequenceNumber (void) const {
    return mProperty_mSequenceNumber ;
  }

  public: GGS_string mProperty_mMainGroupReference ;
  public: inline GGS_string readProperty_mMainGroupReference (void) const {
    return mProperty_mMainGroupReference ;
  }

  public: GGS__5B_string_5D_ mProperty_mMainGroupChildrenRefs ;
  public: inline GGS__5B_string_5D_ readProperty_mMainGroupChildrenRefs (void) const {
    return mProperty_mMainGroupChildrenRefs ;
  }

  public: GGS_string mProperty_mProjectObjectReference ;
  public: inline GGS_string readProperty_mProjectObjectReference (void) const {
    return mProperty_mProjectObjectReference ;
  }

  public: GGS__5B_XCodeGroup_5D_ mProperty_mGroupList ;
  public: inline GGS__5B_XCodeGroup_5D_ readProperty_mGroupList (void) const {
    return mProperty_mGroupList ;
  }

  public: GGS__5B_XCodeToolTarget_5D_ mProperty_mToolTargetList ;
  public: inline GGS__5B_XCodeToolTarget_5D_ readProperty_mToolTargetList (void) const {
    return mProperty_mToolTargetList ;
  }

  public: GGS__5B_XCodeAppTarget_5D_ mProperty_mAppTargetList ;
  public: inline GGS__5B_XCodeAppTarget_5D_ readProperty_mAppTargetList (void) const {
    return mProperty_mAppTargetList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mCFileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mCFileList (void) const {
    return mProperty_mCFileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mCppFileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mCppFileList (void) const {
    return mProperty_mCppFileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_m_5F_Swift_5F_FileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_m_5F_Swift_5F_FileList (void) const {
    return mProperty_m_5F_Swift_5F_FileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_m_5F_M_5F_FileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_m_5F_M_5F_FileList (void) const {
    return mProperty_m_5F_M_5F_FileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_m_5F_MM_5F_FileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_m_5F_MM_5F_FileList (void) const {
    return mProperty_m_5F_MM_5F_FileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mFrameworkFileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mFrameworkFileList (void) const {
    return mProperty_mFrameworkFileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mHeaderFileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mHeaderFileList (void) const {
    return mProperty_mHeaderFileList ;
  }

  public: GGS__5B_BuildFile_5D_ mProperty_mBuildFileList ;
  public: inline GGS__5B_BuildFile_5D_ readProperty_mBuildFileList (void) const {
    return mProperty_mBuildFileList ;
  }

  public: GGS_string mProperty_mDefaultConfigurationRef ;
  public: inline GGS_string readProperty_mDefaultConfigurationRef (void) const {
    return mProperty_mDefaultConfigurationRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mDefaultConfigurationSettingList ;
  public: inline GGS__5B_string_5D_ readProperty_mDefaultConfigurationSettingList (void) const {
    return mProperty_mDefaultConfigurationSettingList ;
  }

  public: GGS_string mProperty_mProjectBuildConfigurationRef ;
  public: inline GGS_string readProperty_mProjectBuildConfigurationRef (void) const {
    return mProperty_mProjectBuildConfigurationRef ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mInfoPlistFileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mInfoPlistFileList (void) const {
    return mProperty_mInfoPlistFileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mXIB_5F_fileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mXIB_5F_fileList (void) const {
    return mProperty_mXIB_5F_fileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mTIFF_5F_fileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mTIFF_5F_fileList (void) const {
    return mProperty_mTIFF_5F_fileList ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mICNS_5F_fileList ;
  public: inline GGS__5B__32_string_5D_ readProperty_mICNS_5F_fileList (void) const {
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
  public: inline void setter_setMSequenceNumber (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSequenceNumber = inValue ;
  }

  public: inline void setter_setMMainGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupReference = inValue ;
  }

  public: inline void setter_setMMainGroupChildrenRefs (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMainGroupChildrenRefs = inValue ;
  }

  public: inline void setter_setMProjectObjectReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectObjectReference = inValue ;
  }

  public: inline void setter_setMGroupList (const GGS__5B_XCodeGroup_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupList = inValue ;
  }

  public: inline void setter_setMToolTargetList (const GGS__5B_XCodeToolTarget_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToolTargetList = inValue ;
  }

  public: inline void setter_setMAppTargetList (const GGS__5B_XCodeAppTarget_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAppTargetList = inValue ;
  }

  public: inline void setter_setMCFileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCFileList = inValue ;
  }

  public: inline void setter_setMCppFileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppFileList = inValue ;
  }

  public: inline void setter_setM_5F_Swift_5F_FileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_Swift_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_M_5F_FileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_M_5F_FileList = inValue ;
  }

  public: inline void setter_setM_5F_MM_5F_FileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_MM_5F_FileList = inValue ;
  }

  public: inline void setter_setMFrameworkFileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkFileList = inValue ;
  }

  public: inline void setter_setMHeaderFileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileList = inValue ;
  }

  public: inline void setter_setMBuildFileList (const GGS__5B_BuildFile_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildFileList = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationRef = inValue ;
  }

  public: inline void setter_setMDefaultConfigurationSettingList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMProjectBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMInfoPlistFileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfoPlistFileList = inValue ;
  }

  public: inline void setter_setMXIB_5F_fileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXIB_5F_fileList = inValue ;
  }

  public: inline void setter_setMTIFF_5F_fileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTIFF_5F_fileList = inValue ;
  }

  public: inline void setter_setMICNS_5F_fileList (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
  public: GGS_XcodeProjectDescriptor (const GGS_u_33__32_ & in_mSequenceNumber,
                                      const GGS_string & in_mMainGroupReference,
                                      const GGS__5B_string_5D_ & in_mMainGroupChildrenRefs,
                                      const GGS_string & in_mProjectObjectReference,
                                      const GGS__5B_XCodeGroup_5D_ & in_mGroupList,
                                      const GGS__5B_XCodeToolTarget_5D_ & in_mToolTargetList,
                                      const GGS__5B_XCodeAppTarget_5D_ & in_mAppTargetList,
                                      const GGS__5B__32_string_5D_ & in_mCFileList,
                                      const GGS__5B__32_string_5D_ & in_mCppFileList,
                                      const GGS__5B__32_string_5D_ & in_m_5F_Swift_5F_FileList,
                                      const GGS__5B__32_string_5D_ & in_m_5F_M_5F_FileList,
                                      const GGS__5B__32_string_5D_ & in_m_5F_MM_5F_FileList,
                                      const GGS__5B__32_string_5D_ & in_mFrameworkFileList,
                                      const GGS__5B__32_string_5D_ & in_mHeaderFileList,
                                      const GGS__5B_BuildFile_5D_ & in_mBuildFileList,
                                      const GGS_string & in_mDefaultConfigurationRef,
                                      const GGS__5B_string_5D_ & in_mDefaultConfigurationSettingList,
                                      const GGS_string & in_mProjectBuildConfigurationRef,
                                      const GGS__5B__32_string_5D_ & in_mInfoPlistFileList,
                                      const GGS__5B__32_string_5D_ & in_mXIB_5F_fileList,
                                      const GGS__5B__32_string_5D_ & in_mTIFF_5F_fileList,
                                      const GGS__5B__32_string_5D_ & in_mICNS_5F_fileList,
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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (class GGS_XcodeProjectDescriptor & ioObject,
                                      const class GGS_string constin_inFileName,
                                      class GGS_string & out_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (class GGS_XcodeProjectDescriptor & ioObject,
                                      class GGS_string & out_outRef,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (class GGS_XcodeProjectDescriptor & ioObject,
                                       const class GGS_string constin_inFileName,
                                       class GGS_string & out_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (class GGS_XcodeProjectDescriptor & ioObject,
                                 const class GGS_string constin_inFileName,
                                 class GGS_string & out_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (class GGS_XcodeProjectDescriptor & ioObject,
                                       const class GGS_string constin_inFileName,
                                       class GGS_string & out_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inFileName,
                               class GGS_string & out_outFileRef,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (class GGS_XcodeProjectDescriptor & ioObject,
                                const class GGS_string constin_inFileName,
                                class GGS_string & out_outFileRef,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (class GGS_XcodeProjectDescriptor & ioObject,
                                 const class GGS_string constin_inFileName,
                                 class GGS_string & out_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addCFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inFileName,
                               class GGS_string & out_outFileRef,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inFileName,
                                    class GGS_string & out_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileReference,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outBuildRef,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inTargetName,
                                    const class GGS_string constin_inProductFileName,
                                    const class GGS__5B_string_5D_ constin_inSourceList,
                                    const class GGS__5B_string_5D_ constin_inToolFrameworksFileRefList,
                                    const class GGS__5B_string_5D_ constin_inBuildConfigurationSettingList,
                                    class GGS_string & out_outTargetRef,
                                    class GGS_string & out_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inTargetName,
                                   const class GGS_string constin_inProductFileName,
                                   const class GGS__5B_string_5D_ constin_inSourceList,
                                   const class GGS__5B_string_5D_ constin_inFrameworksFileRefList,
                                   const class GGS__5B_string_5D_ constin_inResourceFileBuildRefs,
                                   const class GGS__5B_string_5D_ constin_inBuildConfigurationSettingList,
                                   const class GGS__5B_string_5D_ constin_inDependentTargetRefList,
                                   const class GGS__5B__32_string_5D_ constin_inProductCopyList,
                                   class GGS_string & out_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inGroupName,
                               const class GGS_string constin_inGroupPath,
                               const class GGS__5B_string_5D_ constin_inChildrenRefs,
                               class GGS_string & out_outGroupRef,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (class GGS_XcodeProjectDescriptor & ioObject,
                                        const class GGS_string constin_inGroupName,
                                        const class GGS_string constin_inGroupPath,
                                        const class GGS_stringset constin_inFileNames,
                                        class GGS__5B_string_5D_ & io_ioCFileBuildRefs,
                                        class GGS__5B_string_5D_ & io_ioCppFileBuildRefs,
                                        class GGS__5B_string_5D_ & io_ioSwiftFileBuildRefs,
                                        class GGS__5B_string_5D_ & io_ioFrameWorkFileBuildRefs,
                                        class GGS__5B_string_5D_ & io_ioResourceFileBuildRefs,
                                        class GGS_string & out_outGroupRef,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (class GGS_XcodeProjectDescriptor & ioObject,
                                      const class GGS_string constin_inFileName,
                                      class GGS_string & out_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (class GGS_XcodeProjectDescriptor & ioObject,
                                            const class GGS_string constin_inGroupRef,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (class GGS_XcodeProjectDescriptor & ioObject,
                                                        const class GGS__5B_string_5D_ constin_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const class GGS_XcodeProjectDescriptor inObject,
                                     const class GGS_string constin_inPath,
                                     const class GGS_string constin_inCacheFilePath,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @u_38_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_u_38_PredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_u_38_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_u_38_PredefinedTypeAST (const class cPtr_u_38_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_u_38_PredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_u_38_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_38_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @u8PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_u_38_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void u_38_PredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_u_38_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_u_38_PredefinedTypeAST (const GGS_bool & in_isPredefined,
                                       const GGS_string & in_mPredefinedTypeName,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                            const class GGS_lexiqueAnalysisContext constin__5F_inLexiqueAnalysisContext,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@selfMutability propertiesAreMutable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_propertiesAreMutable (const class GGS_selfMutability & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@currentVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const class GGS_currentVarManager inObject,
                                                        const class GGS_location constin_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS_currentVarManager & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GGS_currentVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GGS_currentVarManager & ioObject,
                                           const class GGS_lstring constin_inVarName,
                                           class GGS_unifiedTypeMapEntry & out_outType,
                                           class GGS_string & out_outCppName,
                                           class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GGS_currentVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GGS_currentVarManager & ioObject,
                                               const class GGS_lstring constin_inVarName,
                                               class GGS_unifiedTypeMapEntry & out_outType,
                                               class GGS_string & out_outCppName,
                                               class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (class GGS_currentVarManager & ioObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (class GGS_currentVarManager & ioObject,
                                 const class GGS_location constin_inErrorLocation,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_currentVarManager & ioObject,
                                const class GGS_lstring constin_inVarName,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                const class GGS_string constin_inCppName,
                                const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                const class GGS_localVariableAttributes constin_inAttributes,
                                const class GGS_localVarValuation constin_inState,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GGS_currentVarManager inObject,
                                           const class GGS_location constin_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (class GGS_currentVarManager & ioObject,
                                         const class GGS_currentVarManager constin_inOtherManager,
                                         const class GGS_location constin_inErrorLocation,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_routineMap & ioObject,
                                const class GGS_lstring constin_inRoutineName,
                                const class GGS__5B_formalParameterSignatureElement_5D_ constin_inRoutineSignature,
                                const class GGS_bool constin_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_routineArgumentFromFormalParameters (const class GGS__5B_formalParameterSignatureElement_5D_ & constinArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const class GGS_routineMap inObject,
                                const class GGS_lstring constin_inRoutineName,
                                const class GGS__5B_actualParameterAST_5D_ constin_inActualParameterList,
                                class GGS__5B_formalParameterSignatureElement_5D_ & out_outRoutineSignature,
                                class GGS_bool & out_outIsFilePrivate,
                                class GGS_lstring & out_outRoutineMangledName,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_routineMangledName (const class GGS_lstring & constinArgument0,
                                               const class GGS__5B_formalParameterSignatureElement_5D_ & constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@routineMap locationForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_location extensionGetter_locationForKey (const class GGS_routineMap & inObject,
                                                   const class GGS_string & constinArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (class cPtr_abstractInputParameter * inObject,
                                                const class GGS_analysisContext constin_inAnalysisContext,
                                                class GGS_unifiedTypeMap & io_ioTypeMap,
                                                const class GGS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const class GGS_string constin_inLexicalAttributeName,
                                                class GGS__5B_terminalCheckAssignement_5D_ & io_ioTerminalCheckAssignementList,
                                                class GGS_localVarManager & io_ioVariableMap,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (class cPtr_semanticInstructionAST * inObject,
                                                     const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GGS_analysisContext constin_inAnalysisContext,
                                                     class GGS_unifiedTypeMap & io_ioTypeMap,
                                                     class GGS__5B_semanticInstructionForGeneration_5D_ & io_ioInstructionListForGeneration,
                                                     class GGS_localVarManager & io_ioVariableMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeOptionalTypeLName (const class GGS_lstring & constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression_template' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_template_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_template_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_template_ (GGS_templateExpressionAST & outArgument0,
                                                   Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS__5B_lstring_5D_ & ioArgument0,
                                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS__5B_lstring_5D_ & outArgument0,
                                                                       GGS_location & outArgument1,
                                                                       GGS_templateExpressionAST & outArgument2,
                                                                       Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (GGS__5B_templateExpressionElementAST_5D_ & outArgument0,
                                                                Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                      Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                        Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
 /*  public: virtual void nt_switch_5F_case_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GGS__5B_lstring_5D_ & outArgument0,
                                           GGS__5B_switchExtractedValuesAST_5D_ & outArgument1,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_instruction_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GGS__5B_templateInstructionAST_5D_ & ioArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GGS__5B_templateInstructionAST_5D_ & outArgument0,
                                                                  Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS__5B_templateInstructionAST_5D_ & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS__5B_templateInstructionAST_5D_ & outArgument0
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

//------------------------------------- 'term_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                        Lexique_galgasTemplateScanner * inCompiler) ;

  public: virtual int32_t select_templateSyntax_0 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_1 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_2 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_3 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_4 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_5 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_6 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_7 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_8 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_9 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_10 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_11 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_12 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_13 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_14 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_15 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_16 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_17 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_18 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_19 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_20 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_21 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_22 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_23 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_24 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_25 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_26 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_27 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_28 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_29 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_30 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_31 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_32 (Lexique_galgasTemplateScanner *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedNonTerminalSymbolForGrammarAnalysis struct
//--------------------------------------------------------------------------------------------------

class GGS_sortedNonTerminalSymbolForGrammarAnalysis final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mNonTerminalSymbol ;
  public: inline GGS_lstring readProperty_mNonTerminalSymbol (void) const {
    return mProperty_mNonTerminalSymbol ;
  }

  public: GGS_u_33__32_ mProperty_mNonTerminalIndex ;
  public: inline GGS_u_33__32_ readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GGS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortedNonTerminalSymbolForGrammarAnalysis (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonTerminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalSymbol = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortedNonTerminalSymbolForGrammarAnalysis (const GGS_lstring & in_mNonTerminalSymbol,
                                                         const GGS_u_33__32_ & in_mNonTerminalIndex,
                                                         const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//--------------------------------- Copy constructor
  public: GGS_sortedNonTerminalSymbolForGrammarAnalysis (const GGS_sortedNonTerminalSymbolForGrammarAnalysis & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sortedNonTerminalSymbolForGrammarAnalysis & operator = (const GGS_sortedNonTerminalSymbolForGrammarAnalysis & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedNonTerminalSymbolForGrammarAnalysis init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_u_33__32_ & inOperand1,
                                                                                 const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedNonTerminalSymbolForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonTerminalSymbolSortedArrayForGrammarAnalysis array
//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis final {
//--- Constructor
  public: DownEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis & inOperand) ;

//--- No copy
  private: DownEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis (const DownEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis & operator = (const DownEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sortedNonTerminalSymbolForGrammarAnalysis current (LOCATION_ARGS) const ;
  public: class GGS_sortedNonTerminalSymbolForGrammarAnalysis current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_sortedNonTerminalSymbolForGrammarAnalysis> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis final {
//--- Constructor
  public: UpEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis & inOperand) ;

//--- No copy
  private: UpEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis (const UpEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis & operator = (const UpEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sortedNonTerminalSymbolForGrammarAnalysis current (LOCATION_ARGS) const ;
  public: class GGS_sortedNonTerminalSymbolForGrammarAnalysis current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_sortedNonTerminalSymbolForGrammarAnalysis> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_sortedNonTerminalSymbolForGrammarAnalysis> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis (const GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis & inSource) ;
  public: GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis & operator = (const GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--------------------------------- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis init (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_sortedNonTerminalSymbolForGrammarAnalysis & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis add_operation (const GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_sortedNonTerminalSymbolForGrammarAnalysis constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_sortedNonTerminalSymbolForGrammarAnalysis & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_sortedNonTerminalSymbolForGrammarAnalysis & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_sortedNonTerminalSymbolForGrammarAnalysis & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_sortedNonTerminalSymbolForGrammarAnalysis getter_first (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_sortedNonTerminalSymbolForGrammarAnalysis getter_last (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                                   const class GGS_u_33__32_ & constinOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_sortedNonTerminalSymbolForGrammarAnalysis readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis ;
  friend class DownEnumerator_nonTerminalSymbolSortedArrayForGrammarAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedArrayForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@genericExtensionMethodListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_genericExtensionMethodListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_lstring constin_inValue,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@descendantClassListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_descendantClassListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@actualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (class cPtr_actualParameterForGeneration * inObject,
                                                  class GGS_stringset & io_ioInclusionSet,
                                                  class GGS_u_33__32_ & io_ioTemporaryVariableIndex,
                                                  class GGS_string & io_ioImplementation,
                                                  class GGS__5B_string_5D_ & io_ioJokerParametersToReleaseList,
                                                  class GGS__5B_string_5D_ & io_ioOutputVariableList,
                                                  class GGS_stringset & io__5F_ioUnusedVariableCppNameSet,
                                                  class GGS_string & out_outCppName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@actualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generatePoisonedVariables (class cPtr_actualParameterForGeneration * inObject,
                                                    class GGS_string & io_ioImplementation,
                                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputActualParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_outputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputActualParameterForGeneration (const class cPtr_outputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mOutputActualParameterExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputActualParameterForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_outputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputActualParameterForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension proc generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS__5B_string_5D_ & arg_ioJokerParametersToReleaseList,
           class GGS__5B_string_5D_ & arg_ioOutputVariableList,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mOutputActualParameterExpression ;


//--- Default constructor
  public: cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                   const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outputInputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputInputActualParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_outputInputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputActualParameterForGeneration (const class cPtr_outputInputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOutputInputVariableCppName (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mStructAttributeList (void) const ;

  public: class GGS__5B_unifiedTypeMapEntry_5D_ readProperty_mTypeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputActualParameterForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS__5B_lstring_5D_ & inOperand2,
                                                                                   const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputInputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputActualParameterForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS__5B_lstring_5D_ & inOperand2,
                                                                             const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand3,
                                                                             Compiler * inCompiler) ;


//--- Extension proc generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS__5B_string_5D_ & arg_ioJokerParametersToReleaseList,
           class GGS__5B_string_5D_ & arg_ioOutputVariableList,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mOutputInputVariableCppName ;
  public: GGS__5B_lstring_5D_ mProperty_mStructAttributeList ;
  public: GGS__5B_unifiedTypeMapEntry_5D_ mProperty_mTypeList ;


//--- Default constructor
  public: cPtr_outputInputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                        const GGS_string & in_mOutputInputVariableCppName,
                                                        const GGS__5B_lstring_5D_ & in_mStructAttributeList,
                                                        const GGS__5B_unifiedTypeMapEntry_5D_ & in_mTypeList,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_inputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualParameterForGeneration (const class cPtr_inputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mInputActualCppName (void) const ;

  public: class GGS__5B__32_string_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualParameterForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS__5B__32_string_5D_ & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualParameterForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS__5B__32_string_5D_ & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension proc generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS__5B_string_5D_ & arg_ioJokerParametersToReleaseList,
           class GGS__5B_string_5D_ & arg_ioOutputVariableList,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mInputActualCppName ;
  public: GGS__5B__32_string_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                  const GGS_string & in_mInputActualCppName,
                                                  const GGS__5B__32_string_5D_ & in_mPoisonedVarNameList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputJokerParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputJokerParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_inputJokerParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputJokerParameterForGeneration (const class cPtr_inputJokerParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mInputActualCppName (void) const ;

  public: class GGS__5B__32_string_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputJokerParameterForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS__5B__32_string_5D_ & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputJokerParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_inputJokerParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputJokerParameterForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  const class GGS__5B__32_string_5D_ & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension proc generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS__5B_string_5D_ & arg_ioJokerParametersToReleaseList,
           class GGS__5B_string_5D_ & arg_ioOutputVariableList,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mInputActualCppName ;
  public: GGS__5B__32_string_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputJokerParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputJokerParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GGS_string & in_mInputActualCppName,
                                                 const GGS__5B__32_string_5D_ & in_mPoisonedVarNameList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas4Grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_34_Grammar : public cParser_galgas_34_ExpressionSyntax,
                                   public cParser_galgas_34_ParameterArgumentSyntax,
                                   public cParser_galgas_34_InstructionsSyntax,
                                   public cParser_galgas_34_DeclarationsSyntax,
                                   public cParser_galgas_34_LexiqueComponentSyntax,
                                   public cParser_galgas_34_GuiComponentSyntax,
                                   public cParser_galgas_34_SyntaxComponentSyntax,
                                   public cParser_galgas_34_GrammarComponentSyntax,
                                   public cParser_galgas_34_ProgramDeclarations {
//------------------------------------- 'acces_control' non terminal
//--- 'parse' label
 /*  public: virtual void nt_acces_5F_control_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_acces_5F_control_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_acces_5F_control_ (GGS_AccessControlAST & outArgument0,
                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                 GGS__5B_actualInputParameterAST_5D_ & outArgument1,
                                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'actual_parameter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_actual_5F_parameter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_actual_5F_parameter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_parameter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                GGS__5B_actualParameterAST_5D_ & ioArgument1,
                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'actual_parameter_list_with_parenthesis' non terminal
//--- 'parse' label
 /*  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS__5B_actualParameterAST_5D_ & outArgument1,
                                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'comma_separated_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_comma_5F_separated_5F_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_comma_5F_separated_5F_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_comma_5F_separated_5F_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                                             GGS__5B_CommaSeparatedExpressionElement_5D_ & outArgument1,
                                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                       GGS_semanticExpressionAST & outArgument1,
                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression_and' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_and_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_and_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_and_ (GGS_galgasDeclarationAST & ioArgument0,
                                              GGS_semanticExpressionAST & outArgument1,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression_or' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_or_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_or_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_or_ (GGS_galgasDeclarationAST & ioArgument0,
                                             GGS_semanticExpressionAST & outArgument1,
                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_constructor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_constructor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_constructor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_constructor_ (GGS_galgasDeclarationAST & ioArgument0,
                                                      GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & ioArgument1,
                                                      Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_classdeclaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (GGS_string & outArgument0,
                                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_predeclaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (GGS_string & outArgument0,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_getter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_getter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_getter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_getter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS__5B_externTypeGetter_5D_ & ioArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_method' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_method_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_method_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_method_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS__5B_externTypeMethod_5D_ & ioArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_setter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_setter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_setter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_setter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS__5B_externTypeSetter_5D_ & ioArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_factor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GGS_galgasDeclarationAST & ioArgument0,
                                   GGS_semanticExpressionAST & outArgument1,
                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'filewrapper_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_filewrapper_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_filewrapper_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_declaration_ (const GGS_bool inArgument0,
                                                       GGS_galgasDeclarationAST & ioArgument1,
                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument1,
                                                          Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                       GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                 GGS__5B_formalInputParameterAST_5D_ & outArgument1,
                                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_formal_5F_parameter_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_formal_5F_parameter_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_parameter_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                        GGS__5B_formalParameterAST_5D_ & outArgument1,
                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'grammar_instruction_core' non terminal
//--- 'parse' label
 /*  public: virtual void nt_grammar_5F_instruction_5F_core_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_grammar_5F_instruction_5F_core_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_instruction_5F_core_ (GGS_galgasDeclarationAST & ioArgument0,
                                                           const GGS_location inArgument1,
                                                           const GGS__5B_actualParameterAST_5D_ inArgument2,
                                                           const GGS_lstring inArgument3,
                                                           const GGS_lstring inArgument4,
                                                           GGS_semanticInstructionAST & outArgument5,
                                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'grammar_start_symbol_label' non terminal
//--- 'parse' label
 /*  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                const GGS_lstring inArgument1,
                                                                GGS__5B_nonTerminalLabelAST_5D_ & ioArgument2,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'gui_attributes' non terminal
//--- 'parse' label
 /*  public: virtual void nt_gui_5F_attributes_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_gui_5F_attributes_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_attributes_ (GGS__5B_guiSimpleAttributeAST_5D_ & ioArgument0,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'gui_with_lexique_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (GGS__5B_withLexiqueAST_5D_ & ioArgument0,
                                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'if_instruction_core' non terminal
//--- 'parse' label
 /*  public: virtual void nt_if_5F_instruction_5F_core_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_if_5F_instruction_5F_core_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_if_5F_instruction_5F_core_ (GGS_galgasDeclarationAST & ioArgument0,
                                                      GGS_semanticInstructionAST & outArgument1,
                                                      Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'insert_or_replace_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (GGS__5B_location_5D_ & ioArgument0,
                                                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'issue_fixit' non terminal
//--- 'parse' label
 /*  public: virtual void nt_issue_5F_fixit_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_issue_5F_fixit_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_issue_5F_fixit_ (GGS_galgasDeclarationAST & ioArgument0,
                                           GGS__5B_fixitElementAST_5D_ & outArgument1,
                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'label_formal_parameter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_label_5F_formal_5F_parameter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_label_5F_formal_5F_parameter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_label_5F_formal_5F_parameter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS_lstring & outArgument1,
                                                         GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_attribute_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_attribute_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_attribute_5F_declaration_ (GGS__5B_lexicalAttributeAST_5D_ & ioArgument0,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_explicit_5F_rule_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_explicit_5F_rule_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_explicit_5F_rule_ (GGS__5B_abstractLexicalRuleAST_5D_ & ioArgument0,
                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_expression_ (GGS_lexicalExpressionAST & outArgument0,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_factor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_factor_ (GGS_lexicalExpressionAST & outArgument0,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_implicit_5F_rule_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_implicit_5F_rule_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_implicit_5F_rule_ (GGS__5B_abstractLexicalRuleAST_5D_ & ioArgument0,
                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_indexing_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_indexing_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_indexing_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_indexing_5F_declaration_ (GGS__5B_indexingAST_5D_ & ioArgument0,
                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_instruction_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument0,
                                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_list_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_declaration_ (GGS__5B_lexicalListDeclarationAST_5D_ & ioArgument0,
                                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_list_5F_entry_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_entry_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_entry_ (GGS__5B_lexicalListEntryAST_5D_ & ioArgument0,
                                                     Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_message_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_message_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_message_5F_declaration_ (GGS__5B_lexicalMessageDeclarationAST_5D_ & ioArgument0,
                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_send_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_send_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_send_5F_instruction_ (GGS_lexicalInstructionAST & outArgument0,
                                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_term_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_term_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_term_ (GGS_lexicalExpressionAST & outArgument0,
                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'map_insert_setter_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (GGS__5B_insertSetterAST_5D_ & ioArgument0,
                                                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'method_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_method_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_method_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_method_5F_declaration_ (const GGS_lstring inArgument0,
                                                  GGS_galgasDeclarationAST & ioArgument1,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'nonterminal_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_nonterminal_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_nonterminal_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_nonterminal_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                       GGS__5B_nonterminalDeclarationAST_5D_ & ioArgument1,
                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_output_5F_expression_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'poisoned_var_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_poisoned_5F_var_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_poisoned_5F_var_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_poisoned_5F_var_5F_list_ (GGS__5B_lstring_5D_ & outArgument0,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_ (GGS_galgasDeclarationAST & ioArgument0,
                                    GGS_semanticExpressionAST & outArgument1,
                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_dot' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_ (GGS_galgasDeclarationAST & ioArgument0,
                                                              GGS_semanticExpressionAST & outArgument1,
                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_type' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_ (const GGS_lstring inArgument0,
                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                               GGS_semanticExpressionAST & outArgument2,
                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_type_dot_name' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (const GGS_lstring inArgument0,
                                                                              const GGS_lstring inArgument1,
                                                                              GGS_galgasDeclarationAST & ioArgument2,
                                                                              GGS_semanticExpressionAST & outArgument3,
                                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'property_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_property_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_property_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_property_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                    GGS__5B_propertyInCollectionAST_5D_ & ioArgument1,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_factor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_ (GGS_galgasDeclarationAST & ioArgument0,
                                               GGS_semanticExpressionAST & outArgument1,
                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'remove_setter_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_remove_5F_setter_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_remove_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_remove_5F_setter_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
 /*  public: virtual void nt_repeat_5F_while_5F_branch_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_repeat_5F_while_5F_branch_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_repeat_5F_while_5F_branch_ (GGS__5B_lexicalWhileBranchAST_5D_ & ioArgument0,
                                                      Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'replace_setter_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_replace_5F_setter_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_replace_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_replace_5F_setter_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'search_method_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_search_5F_method_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_search_5F_method_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_search_5F_method_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'search_subcript_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_search_5F_subcript_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_search_5F_subcript_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_search_5F_subcript_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_semantic_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_semantic_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_ (GGS_galgasDeclarationAST & ioArgument0,
                                                    GGS_semanticInstructionAST & outArgument1,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_beginning_with_identifier' non terminal
//--- 'parse' label
 /*  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       const GGS_bool inArgument1,
                                                                                       GGS_semanticInstructionAST & outArgument2,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_semantic_5F_instruction_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                            GGS__5B_semanticInstructionAST_5D_ & outArgument1,
                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS_semanticExpressionAST & outArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_type_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_type_5F_definition_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_type_5F_definition_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_type_5F_definition_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS_lstring & outArgument1,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_type_followed_by_dot_type' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (const GGS_lstring inArgument0,
                                                                            GGS_galgasDeclarationAST & ioArgument1,
                                                                            GGS_semanticExpressionAST & outArgument2,
                                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'sorted_array_sort_descriptor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_sorted_5F_array_5F_sort_5F_descriptor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_sorted_5F_array_5F_sort_5F_descriptor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_sorted_5F_array_5F_sort_5F_descriptor_ (GGS__5B_sortedArraySortDescriptorAST_5D_ & ioArgument0,
                                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_start_5F_symbol_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_galgasDeclarationAST & ioArgument0,
                                            Lexique_galgasScanner_34_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_galgasDeclarationAST & ioArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_galgasDeclarationAST & ioArgument0
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

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
 /*  public: virtual void nt_switch_5F_case_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GGS_galgasDeclarationAST & ioArgument0,
                                           GGS__5B_lstring_5D_ & outArgument1,
                                           GGS__5B_switchExtractedValuesAST_5D_ & outArgument2,
                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_ (GGS_galgasDeclarationAST & ioArgument0,
                                                  GGS_syntaxInstructionAST & outArgument1,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_instruction_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_instruction_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS__5B_syntaxInstructionAST_5D_ & outArgument1,
                                                          Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_rule_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_rule_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS__5B_syntaxRuleAST_5D_ & ioArgument1,
                                                          Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_rule_label' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_rule_5F_label_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_label_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_label_ (GGS_galgasDeclarationAST & ioArgument0,
                                                    const GGS_lstring inArgument1,
                                                    GGS__5B_syntaxRuleLabelAST_5D_ & ioArgument2,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_delimitor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_delimitor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_delimitor_ (GGS__5B_templateDelimitor_32_AST_5D_ & ioArgument0,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_replacement_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_replacement_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_replacement_ (GGS__5B_templateReplacementAST_5D_ & ioArgument0,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_term_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_term_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_ (GGS_galgasDeclarationAST & ioArgument0,
                                 GGS_semanticExpressionAST & outArgument1,
                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_terminal_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_terminal_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_declaration_ (GGS__5B_terminalDeclarationAST_5D_ & ioArgument0,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'terminal_instruction_indexing' non terminal
//--- 'parse' label
 /*  public: virtual void nt_terminal_5F_instruction_5F_indexing_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_instruction_5F_indexing_ (GGS__5B__32_lstring_5D_ & outArgument0,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_type_5F_definition_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_type_5F_definition_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_5F_definition_ (GGS_galgasDeclarationAST & ioArgument0,
                                               GGS_lstring & outArgument1,
                                               Lexique_galgasScanner_34_ * inCompiler) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_24 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_25 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_26 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_27 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_28 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_29 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_30 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_31 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_32 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_33 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_34 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_35 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_36 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_37 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_38 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_39 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_40 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_41 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_42 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_43 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_44 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_45 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_46 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_47 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_48 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_49 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_50 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_51 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_52 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_53 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_54 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_55 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_56 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_57 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_58 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_59 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_60 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_61 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_62 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_24 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_25 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_26 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_27 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_28 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_29 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_30 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_31 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_32 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_33 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_34 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_35 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_36 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_37 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_38 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_39 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_40 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_41 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_42 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_43 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_44 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_45 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_46 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_47 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_48 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_49 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_50 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_51 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_52 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_53 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_54 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_55 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_24 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_25 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_26 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ProgramDeclarations_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ProgramDeclarations_1 (Lexique_galgasScanner_34_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
