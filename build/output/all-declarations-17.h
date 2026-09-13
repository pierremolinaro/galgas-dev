#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (class GGS_XcodeProjectDescriptor & ioObject,
                                       const class GGS_string constin_inFileName,
                                       class GGS_string & out_outFileRef,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (class GGS_XcodeProjectDescriptor & ioObject,
                                   const class GGS_string constin_inFileName,
                                   class GGS_string & out_outFileRef,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inFileName,
                               class GGS_string & out_outFileRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (class GGS_XcodeProjectDescriptor & ioObject,
                                const class GGS_string constin_inFileName,
                                class GGS_string & out_outFileRef,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (class GGS_XcodeProjectDescriptor & ioObject,
                                 const class GGS_string constin_inFileName,
                                 class GGS_string & out_outFileRef,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@XcodeProjectDescriptor addCFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (class GGS_XcodeProjectDescriptor & ioObject,
                               const class GGS_string constin_inFileName,
                               class GGS_string & out_outFileRef,
                               class Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

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
// Phase 1: @terminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_terminalInstructionForGrammarAnalysis (const class cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GGS_uint readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_uint & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak (const class GGS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_terminalInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_terminalInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_terminalInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_terminalInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@selfMutability propertiesAreMutable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_propertiesAreMutable (const class GGS_selfMutability & inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_optionComponentForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionComponentForGeneration (const class cPtr_optionComponentForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsPredefined (void) const ;

  public: class GGS_string readProperty_mOptionComponentName (void) const ;

  public: class GGS_commandLineOptionSortedList readProperty_mBoolOptionSortedList (void) const ;

  public: class GGS_commandLineOptionSortedList readProperty_mUIntOptionSortedList (void) const ;

  public: class GGS_commandLineOptionSortedList readProperty_mStringOptionSortedList (void) const ;

  public: class GGS_commandLineOptionSortedList readProperty_mStringListSortedList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                               const class GGS_string & inOperand1,
                                                                                                                               const class GGS_bool & inOperand2,
                                                                                                                               const class GGS_string & inOperand3,
                                                                                                                               const class GGS_commandLineOptionSortedList & inOperand4,
                                                                                                                               const class GGS_commandLineOptionSortedList & inOperand5,
                                                                                                                               const class GGS_commandLineOptionSortedList & inOperand6,
                                                                                                                               const class GGS_commandLineOptionSortedList & inOperand7,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionComponentForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionComponentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionComponentForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_optionComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                         const class GGS_bool & inOperand2,
                                                                                                                         const class GGS_string & inOperand3,
                                                                                                                         const class GGS_commandLineOptionSortedList & inOperand4,
                                                                                                                         const class GGS_commandLineOptionSortedList & inOperand5,
                                                                                                                         const class GGS_commandLineOptionSortedList & inOperand6,
                                                                                                                         const class GGS_commandLineOptionSortedList & inOperand7,
                                                                                                                         Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GGS_string arg_inProductDirectory,
           class GGS_stringset & arg_ioAllProductFileSet,
           class GGS_stringlist & arg_ioSwiftAppProductFileList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsPredefined ;
  public: GGS_string mProperty_mOptionComponentName ;
  public: GGS_commandLineOptionSortedList mProperty_mBoolOptionSortedList ;
  public: GGS_commandLineOptionSortedList mProperty_mUIntOptionSortedList ;
  public: GGS_commandLineOptionSortedList mProperty_mStringOptionSortedList ;
  public: GGS_commandLineOptionSortedList mProperty_mStringListSortedList ;


//--- Default constructor
  public: cPtr_optionComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionComponentForGeneration (const GGS_bool & in_generateHeader,
                                             const GGS_string & in_implementationCppFileName,
                                             const GGS_bool & in_mIsPredefined,
                                             const GGS_string & in_mOptionComponentName,
                                             const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                             const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                             const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                             const GGS_commandLineOptionSortedList & in_mStringListSortedList,
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
// Phase 1: @optionComponentForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionComponentForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionComponentForGeneration_2E_weak (const class GGS_optionComponentForGeneration & inSource) ;

  public: GGS_optionComponentForGeneration_2E_weak & operator = (const class GGS_optionComponentForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionComponentForGeneration_2E_weak init_nil (void) {
    GGS_optionComponentForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionComponentForGeneration bang_optionComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionComponentForGeneration unwrappedValue (void) const ;

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
  public: static GGS_optionComponentForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionComponentForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2E_weak ;

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
//Extension setter '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_routineMap & ioObject,
                                const class GGS_lstring constin_inRoutineName,
                                const class GGS_formalParameterSignature constin_inRoutineSignature,
                                const class GGS_bool constin_inIsFilePrivate,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_routineArgumentFromFormalParameters (const class GGS_formalParameterSignature & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const class GGS_routineMap inObject,
                                const class GGS_lstring constin_inRoutineName,
                                const class GGS_actualParameterListAST constin_inActualParameterList,
                                class GGS_formalParameterSignature & out_outRoutineSignature,
                                class GGS_bool & out_outIsFilePrivate,
                                class GGS_lstring & out_outRoutineMangledName,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_routineMangledName (const class GGS_lstring & constinArgument0,
                                               const class GGS_formalParameterSignature & constinArgument1,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineMap locationForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_location extensionGetter_locationForKey (const class GGS_routineMap & inObject,
                                                   const class GGS_string & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist extensionGetter_unsolvedEntryList (const class GGS_unifiedTypeMap & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeOptionalTypeLName (const class GGS_lstring & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (class cPtr_templateInstructionForGeneration * inObject,
                                                 class GGS_string & io_ioGeneratedCode,
                                                 class GGS_stringset & io_ioInclusionSet,
                                                 class GGS_uint & io_ioTemporaryVariableIndex,
                                                 class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                 class GGS_bool & io_ioUseColumnMarker,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForeachAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionForeachAST_2E_weak (const class GGS_templateInstructionForeachAST & inSource) ;

  public: GGS_templateInstructionForeachAST_2E_weak & operator = (const class GGS_templateInstructionForeachAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionForeachAST_2E_weak init_nil (void) {
    GGS_templateInstructionForeachAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionForeachAST bang_templateInstructionForeachAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionForeachAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionForeachAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForeachAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForeachForGeneration (const class cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAscending (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GGS_string readProperty_mEnumeratorCppName (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GGS_string readProperty_mIndexCppName (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForeachForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand3,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand4,
                                                                                                   const class GGS_string & inOperand5,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand6,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand7,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForeachForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionForeachForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand3,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand4,
                                                                                             const class GGS_string & inOperand5,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand6,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand7,
                                                                                             Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAscending ;
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_string mProperty_mEnumeratorCppName ;
  public: GGS_templateInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GGS_templateInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GGS_string mProperty_mIndexCppName ;
  public: GGS_templateInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GGS_templateInstructionListForGeneration mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionForeachForGeneration (const GGS_bool & in_mIsAscending,
                                                        const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS_string & in_mEnumeratorCppName,
                                                        const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                        const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                        const GGS_string & in_mIndexCppName,
                                                        const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                        const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
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
// Phase 1: @templateInstructionForeachForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionForeachForGeneration_2E_weak (const class GGS_templateInstructionForeachForGeneration & inSource) ;

  public: GGS_templateInstructionForeachForGeneration_2E_weak & operator = (const class GGS_templateInstructionForeachForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionForeachForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionForeachForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionForeachForGeneration bang_templateInstructionForeachForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionForeachForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionForeachForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForeachForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateGetterCallInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateGetterCallInExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateGetterCallInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateGetterCallInExpressionAST_2E_weak (const class GGS_templateGetterCallInExpressionAST & inSource) ;

  public: GGS_templateGetterCallInExpressionAST_2E_weak & operator = (const class GGS_templateGetterCallInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateGetterCallInExpressionAST_2E_weak init_nil (void) {
    GGS_templateGetterCallInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateGetterCallInExpressionAST bang_templateGetterCallInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateGetterCallInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateGetterCallInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateGetterCallInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateGetterCallInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
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
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS_lstringlist & ioArgument0,
                                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_lstringlist & outArgument0,
                                                                       GGS_location & outArgument1,
                                                                       GGS_templateExpressionAST & outArgument2,
                                                                       Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (GGS_templateExpressionListAST & outArgument0,
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
                                           GGS_switchExtractedValuesListAST & outArgument1,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_instruction_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GGS_templateInstructionListAST & ioArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GGS_templateInstructionListAST & outArgument0,
                                                                  Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_templateInstructionListAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_templateInstructionListAST & outArgument0
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

  public: virtual int32_t select_templateSyntax_33 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_34 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_35 (Lexique_galgasTemplateScanner *) ;
} ;

//--------------------------------------------------------------------------------------------------
