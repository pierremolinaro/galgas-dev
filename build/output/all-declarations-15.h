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

  protected: virtual void nt_grammar_5F_template_5F_replacement_ (class GGS__5B_templateReplacementAST_5D_ & ioArgument0,
                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_template_5F_replacement_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

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

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_template_5F_replacement_i1_ (GGS__5B_templateReplacementAST_5D_ & ioArgument0,
                                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_template_5F_replacement_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                 const GGS_lstring constinArgument1,
                                                                                                 GGS__5B_nonTerminalLabelAST_5D_ & ioArgument2,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                           GGS_lstring & outArgument1,
                                                                                           GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;


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

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ProgramDeclarations_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_1 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4TypeDefinitionSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_TypeDefinitionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_TypeDefinitionSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_TypeDefinitionSyntax_type_5F_definition_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                              GGS_lstring & outArgument1,
                                                                              Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_TypeDefinitionSyntax_type_5F_definition_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_TypeDefinitionSyntax_simple_5F_type_5F_definition_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_TypeDefinitionSyntax_simple_5F_type_5F_definition_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_TypeDefinitionSyntax_simple_5F_type_5F_definition_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_TypeDefinitionSyntax_simple_5F_type_5F_definition_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_TypeDefinitionSyntax_simple_5F_type_5F_definition_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_TypeDefinitionSyntax_simple_5F_type_5F_definition_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_TypeDefinitionSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_TypeDefinitionSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_TypeDefinitionSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_TypeDefinitionSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_TypeDefinitionSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeDictionaryTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeDictionaryTypeLName (const class GGS_lstring & constinArgument0,
                                                    const class GGS_lstring & constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (class GGS_galgasDeclarationAST & ioObject,
                                          class GGS_lstring & out_outOptionalTypeName,
                                          const class GGS_lstring constin_inTypeName,
                                          const class GGS_bool constin_inPredefined,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

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
// Phase 1: @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarForGeneration (const class cPtr_grammarForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLexiqueName (void) const ;

  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis readProperty_mNonTerminalMapForGrammarAnalysis (void) const ;

  public: class GGS__5B_nonTerminalToAdd_5D_ readProperty_mNonTerminalToAddList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mSyntaxComponents (void) const ;

  public: class GGS_string readProperty_mStartSymbolName (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

  public: class GGS_string readProperty_mCppFileContents (void) const ;

  public: class GGS_stringset readProperty_mTemplateUnicodeStringToGenerate (void) const ;

  public: class GGS__5B_templateReplacementAST_5D_ readProperty_mTemplateReplacementList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarForGeneration init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                                                      const class GGS_string & inOperand3,
                                                                                                                                                      const class GGS_string & inOperand4,
                                                                                                                                                      const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand5,
                                                                                                                                                      const class GGS__5B_nonTerminalToAdd_5D_ & inOperand6,
                                                                                                                                                      const class GGS__5B_lstring_5D_ & inOperand7,
                                                                                                                                                      const class GGS_string & inOperand8,
                                                                                                                                                      const class GGS_bool & inOperand9,
                                                                                                                                                      const class GGS_string & inOperand10,
                                                                                                                                                      const class GGS_stringset & inOperand11,
                                                                                                                                                      const class GGS__5B_templateReplacementAST_5D_ & inOperand12,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                                                const class GGS_string & inOperand2,
                                                                                                                                                const class GGS_string & inOperand3,
                                                                                                                                                const class GGS_string & inOperand4,
                                                                                                                                                const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand5,
                                                                                                                                                const class GGS__5B_nonTerminalToAdd_5D_ & inOperand6,
                                                                                                                                                const class GGS__5B_lstring_5D_ & inOperand7,
                                                                                                                                                const class GGS_string & inOperand8,
                                                                                                                                                const class GGS_bool & inOperand9,
                                                                                                                                                const class GGS_string & inOperand10,
                                                                                                                                                const class GGS_stringset & inOperand11,
                                                                                                                                                const class GGS__5B_templateReplacementAST_5D_ & inOperand12,
                                                                                                                                                Compiler * inCompiler) ;


//--- Extension func getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLexiqueName ;
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis mProperty_mNonTerminalMapForGrammarAnalysis ;
  public: GGS__5B_nonTerminalToAdd_5D_ mProperty_mNonTerminalToAddList ;
  public: GGS__5B_lstring_5D_ mProperty_mSyntaxComponents ;
  public: GGS_string mProperty_mStartSymbolName ;
  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: GGS_string mProperty_mCppFileContents ;
  public: GGS_stringset mProperty_mTemplateUnicodeStringToGenerate ;
  public: GGS__5B_templateReplacementAST_5D_ mProperty_mTemplateReplacementList ;


//--- Default constructor
  public: cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarForGeneration (const GGS_string & in_infoMessage,
                                     const GGS_bool & in_generateHeader,
                                     const GGS_string & in_implementationCppFileName,
                                     const GGS_string & in_mGrammarName,
                                     const GGS_string & in_mLexiqueName,
                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                     const GGS__5B_nonTerminalToAdd_5D_ & in_mNonTerminalToAddList,
                                     const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                     const GGS_string & in_mStartSymbolName,
                                     const GGS_bool & in_mHasTranslateFeature,
                                     const GGS_string & in_mCppFileContents,
                                     const GGS_stringset & in_mTemplateUnicodeStringToGenerate,
                                     const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementList,
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
//  GRAMMAR templateGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression_template' non terminal
//--- indexing
  public: virtual void nt_expression_5F_template_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_template_ (GGS_templateExpressionAST & outArgument0,
                                                   Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor_tpl' non terminal
//--- indexing
  public: virtual void nt_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS__5B_lstring_5D_ & ioArgument0,
                                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS__5B_lstring_5D_ & outArgument0,
                                                                       GGS_location & outArgument1,
                                                                       GGS_templateExpressionAST & outArgument2,
                                                                       Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list_tpl' non terminal
//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (GGS__5B_templateExpressionElementAST_5D_ & outArgument0,
                                                                Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary_tpl' non terminal
//--- indexing
  public: virtual void nt_primary_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor_tpl' non terminal
//--- indexing
  public: virtual void nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                      Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term_tpl' non terminal
//--- indexing
  public: virtual void nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression_tpl' non terminal
//--- indexing
  public: virtual void nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                        Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GGS__5B_lstring_5D_ & outArgument0,
                                           GGS__5B_switchExtractedValuesAST_5D_ & outArgument1,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- indexing
  public: virtual void nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GGS__5B_templateInstructionAST_5D_ & ioArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
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
//  GRAMMAR newTemplateGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_newTemplateGrammar : public cParser_galgas_34_ExpressionSyntax,
                                    public cParser_galgas_34_TypeDefinitionSyntax {
//------------------------------------- 'actual_parameter_list_with_parenthesis' non terminal
//--- indexing
  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS__5B_actualParameterAST_5D_ & outArgument1,
                                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- indexing
  public: virtual void nt_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                       GGS_semanticExpressionAST & outArgument1,
                                       Lexique_galgasScanner_34_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_galgasDeclarationAST & ioArgument0,
                                                  GGS_semanticExpressionAST & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_galgasDeclarationAST & ioArgument0,
                                                    GGS_semanticExpressionAST & outArgument1
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

//------------------------------------- 'expression_and' non terminal
//--- indexing
  public: virtual void nt_expression_5F_and_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_and_ (GGS_galgasDeclarationAST & ioArgument0,
                                              GGS_semanticExpressionAST & outArgument1,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression_or' non terminal
//--- indexing
  public: virtual void nt_expression_5F_or_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_or_ (GGS_galgasDeclarationAST & ioArgument0,
                                             GGS_semanticExpressionAST & outArgument1,
                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- indexing
  public: virtual void nt_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GGS_galgasDeclarationAST & ioArgument0,
                                   GGS_semanticExpressionAST & outArgument1,
                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list' non terminal
//--- indexing
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- indexing
  public: virtual void nt_primary_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_ (GGS_galgasDeclarationAST & ioArgument0,
                                    GGS_semanticExpressionAST & outArgument1,
                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_dot' non terminal
//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_ (GGS_galgasDeclarationAST & ioArgument0,
                                                              GGS_semanticExpressionAST & outArgument1,
                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_type' non terminal
//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_ (const GGS_lstring inArgument0,
                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                               GGS_semanticExpressionAST & outArgument2,
                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_type_dot_name' non terminal
//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (const GGS_lstring inArgument0,
                                                                              const GGS_lstring inArgument1,
                                                                              GGS_galgasDeclarationAST & ioArgument2,
                                                                              GGS_semanticExpressionAST & outArgument3,
                                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- indexing
  public: virtual void nt_relation_5F_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_ (GGS_galgasDeclarationAST & ioArgument0,
                                               GGS_semanticExpressionAST & outArgument1,
                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- indexing
  public: virtual void nt_simple_5F_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS_semanticExpressionAST & outArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_type_definition' non terminal
//--- indexing
  public: virtual void nt_simple_5F_type_5F_definition_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_type_5F_definition_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS_lstring & outArgument1,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_type_followed_by_dot_type' non terminal
//--- indexing
  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (const GGS_lstring inArgument0,
                                                                            GGS_galgasDeclarationAST & ioArgument1,
                                                                            GGS_semanticExpressionAST & outArgument2,
                                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- indexing
  public: virtual void nt_term_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_ (GGS_galgasDeclarationAST & ioArgument0,
                                 GGS_semanticExpressionAST & outArgument1,
                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
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

  public: virtual int32_t select_galgas_34_TypeDefinitionSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_TypeDefinitionSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_TypeDefinitionSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_TypeDefinitionSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_TypeDefinitionSyntax_4 (Lexique_galgasScanner_34_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
