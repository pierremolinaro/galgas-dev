#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inFileName,
                                    class GGS_string & out_outFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileReference,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outBuildRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                    const class GGS_string constin_inTargetName,
                                    const class GGS_string constin_inProductFileName,
                                    const class GGS_stringlist constin_inSourceList,
                                    const class GGS_stringlist constin_inToolFrameworksFileRefList,
                                    const class GGS_stringlist constin_inBuildConfigurationSettingList,
                                    class GGS_string & out_outTargetRef,
                                    class GGS_string & out_outProductFileRef,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inTargetName,
                                   const class GGS_string constin_inProductFileName,
                                   const class GGS_stringlist constin_inSourceList,
                                   const class GGS_stringlist constin_inFrameworksFileRefList,
                                   const class GGS_stringlist constin_inResourceFileBuildRefs,
                                   const class GGS_stringlist constin_inBuildConfigurationSettingList,
                                   const class GGS_stringlist constin_inDependentTargetRefList,
                                   const class GGS__32_stringlist constin_inProductCopyList,
                                   class GGS_string & out_outProductFileRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inGroupName,
                               const class GGS_string constin_inGroupPath,
                               const class GGS_stringlist constin_inChildrenRefs,
                               class GGS_string & out_outGroupRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (class GGS_XcodeProjectDescriptor & ioObject,
                                        const class GGS_string constin_inGroupName,
                                        const class GGS_string constin_inGroupPath,
                                        const class GGS_stringset constin_inFileNames,
                                        class GGS_stringlist & io_ioCFileBuildRefs,
                                        class GGS_stringlist & io_ioCppFileBuildRefs,
                                        class GGS_stringlist & io_ioSwiftFileBuildRefs,
                                        class GGS_stringlist & io_ioFrameWorkFileBuildRefs,
                                        class GGS_stringlist & io_ioResourceFileBuildRefs,
                                        class GGS_string & out_outGroupRef,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (class GGS_XcodeProjectDescriptor & ioObject,
                                      const class GGS_string constin_inFileName,
                                      class GGS_string & out_outFileRef,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (class GGS_XcodeProjectDescriptor & ioObject,
                                            const class GGS_string constin_inGroupRef,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (class GGS_XcodeProjectDescriptor & ioObject,
                                                        const class GGS_stringlist constin_inSettingList,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const class GGS_XcodeProjectDescriptor inObject,
                                     const class GGS_string constin_inPath,
                                     const class GGS_string constin_inCacheFilePath,
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

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (class Compiler * inCompiler,
                                                                            const class GGS_string & in_PROJECT_5F_REF,
                                                                            const class GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const class GGS_XCodeGroupList & in_GROUPS,
                                                                            const class GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const class GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const class GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const class GGS__32_stringlist & in_C_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const class GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const class GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const class GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const class GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const class GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const class GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                            const class GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis.element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const class GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                            const class GGS_string constin_inSyntaxComponentName,
                                            class GGS_string & io_ioGeneratedCode,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_escapeForTex (const class GGS_string & constinArgument0,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

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
// Phase 1: @typePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typePredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_typePredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typePredefinedTypeAST (const class cPtr_typePredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typePredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typePredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_typePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typePredefinedTypeAST (const GGS_bool & in_isPredefined,
                                      const GGS_string & in_mPredefinedTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typePredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typePredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typePredefinedTypeAST_2E_weak (const class GGS_typePredefinedTypeAST & inSource) ;

  public: GGS_typePredefinedTypeAST_2E_weak & operator = (const class GGS_typePredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typePredefinedTypeAST_2E_weak init_nil (void) {
    GGS_typePredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typePredefinedTypeAST bang_typePredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typePredefinedTypeAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typePredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typePredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeNameFormalParameterNameList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_typeNameFormalParameterNameList & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

