#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentForGeneration reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_bool & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        const class GGS_commandLineOptionSortedList & inOperand4,
                                                                        const class GGS_commandLineOptionSortedList & inOperand5,
                                                                        const class GGS_commandLineOptionSortedList & inOperand6,
                                                                        const class GGS_commandLineOptionSortedList & inOperand7,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionComponentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_optionComponentForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionComponentForGeneration class
//
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
           class GGS_stringlist & arg_ioCocoaProductFileList,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentForGeneration_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionComponentForGeneration bang_optionComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_optionComponentForGeneration unwrappedValue (void) const {
    GGS_optionComponentForGeneration result ;
    if (isValid ()) {
      const cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_optionComponentForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_optionComponentForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_arrayTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_arrayTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayTypeForGeneration (const class cPtr_arrayTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_elementType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayTypeForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayTypeForGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayTypeForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_arrayTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_arrayTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayTypeForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_elementType ;


//--- Default constructor
  public: cPtr_arrayTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GGS_unifiedTypeMapEntry & in_elementType,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayTypeForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_arrayTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_arrayTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_arrayTypeForGeneration_2E_weak (const class GGS_arrayTypeForGeneration & inSource) ;

  public: GGS_arrayTypeForGeneration_2E_weak & operator = (const class GGS_arrayTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_arrayTypeForGeneration_2E_weak init_nil (void) {
    GGS_arrayTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_arrayTypeForGeneration bang_arrayTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_arrayTypeForGeneration unwrappedValue (void) const {
    GGS_arrayTypeForGeneration result ;
    if (isValid ()) {
      const cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_arrayTypeForGeneration (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_arrayTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_arrayTypeForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (class GGS_localVarManager & ioObject,
                                                  const class GGS_lstring constin_inVarName,
                                                  const class GGS_unifiedTypeMapEntry constin_inType,
                                                  const class GGS_string constin_inCppName,
                                                  const class GGS_string constin_inNameForCheckingFormalParameterUsing,
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
//Extension method '@productionRuleListForGrammarAnalysis.element displayRule'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const class GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                  const class GGS_string constin_inSyntaxComponentName,
                                  class GGS_string & io_ioGeneratedCode,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (class Compiler * inCompiler,
                                                                            const class GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (class Compiler * inCompiler,
                                                                              const class GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (class Compiler * inCompiler,
                                                                                const class GGS_string & in_PROJECT_5F_NAME
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (class Compiler * inCompiler,
                                                                             const class GGS_string & in_PROJECT_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const class GGS_string constinArgument0,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const class GGS_string constinArgument0,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const class GGS_bool constinArgument0,
                                                                       const class GGS_string constinArgument1,
                                                                       const class GGS_location constinArgument2,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument3,
                                                                       class GGS_semanticExpressionForGeneration & ioArgument4,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_optionNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_functionNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const class GGS_lstring constinArgument0,
                                                                      class GGS_usefulEntitiesGraph & ioArgument1,
                                                                      const class GGS_templateAnalysisContext constinArgument2,
                                                                      class GGS_unifiedTypeMap & ioArgument3,
                                                                      const class GGS_templateInstructionListAST constinArgument4,
                                                                      class GGS_templateInstructionListForGeneration & ioArgument5,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const class GGS_templateInstructionListForGeneration constinArgument0,
                                                                               class GGS_string & ioArgument1,
                                                                               class GGS_stringset & ioArgument2,
                                                                               class GGS_uint & ioArgument3,
                                                                               class GGS_stringset & ioArgument4,
                                                                               class GGS_bool & ioArgument5,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const class GGS_lexicalTypeMap constinArgument0,
                                                   const class GGS_lexicalAttributeListAST constinArgument1,
                                                   class GGS_lexicalAttributeMap & ioArgument2,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (class Compiler * inCompiler,
                                                                          const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                          const class GGS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                          const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                          const class GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                          const class GGS_indexingListAST & in_INDEXING_5F_LIST
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (class Compiler * inCompiler,
                                                                                            const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                            const class GGS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                            const class GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                            const class GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                            const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                            const class GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                            const class GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                            const class GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                            const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                            const class GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                            const class GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                            const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                            const class GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (class Compiler * inCompiler,
                                                                               const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                               const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (class Compiler * inCompiler,
                                                                                       const class GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                       const class GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                       const class GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                       const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                       const class GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                       const class GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                       const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                       const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                       const class GGS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                       const class GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                       const class GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftCocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (class Compiler * inCompiler,
                                                                                            const class GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                            const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                            const class GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                            const class GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                            const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                            const class GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                            const class GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                            const class GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                            const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                            const class GGS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                            const class GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                            const class GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_lexiqueNameForUsefulEntitiesGraph (const class GGS_lstring & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (class GGS_lexicalFunctionMap & outArgument0,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (class GGS_lexicalRoutineMap & outArgument0,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (class GGS_stringset & outArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'templateLexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_templateLexiqueGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppHeader'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (class Compiler * inCompiler,
                                                                             const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const class GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (class Compiler * inCompiler,
                                                                                     const class GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                     const class GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                     const class GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                     const class GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                     const class GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                     const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                     const class GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                     const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaHeaderZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (class Compiler * inCompiler,
                                                                                       const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                       const class GGS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                       const class GGS_string & in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (class Compiler * inCompiler,
                                                                                               const class GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                               const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                               const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                               const class GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                               const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (class Compiler * inCompiler,
                                                                                                const class GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                const class GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                const class GGS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                const class GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                const class GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                const class GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

