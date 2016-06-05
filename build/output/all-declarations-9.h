#ifndef all_2D_declarations_2D__39__ENTITIES_DEFINED
#define all_2D_declarations_2D__39__ENTITIES_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"


//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_gmp ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Filewrapper 'projectCreationFileWrapper'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_project'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_options'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_program'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Routine 'performProjectCreation'                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_performProjectCreation (const class GALGAS_string constinArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              Routine 'projectCreation'                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_projectCreation (const class GALGAS_string constinArgument0,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @templateInstructionStringAST class                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionStringAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionStringAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionStringAST * ptr (void) const { return (const cPtr_templateInstructionStringAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionStringAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionStringAST constructor_new (const class GALGAS_string & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Pointer class for @templateInstructionStringAST class                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_string mAttribute_mTemplateString ;

//--- Constructor
  public : cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Routine 'templateInstructionListAnalysis'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis (const class GALGAS_templateAnalysisContext constinArgument0,
                                              const class GALGAS_templateInstructionListAST constinArgument1,
                                              class GALGAS_templateInstructionListForGeneration & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Abstract extension method '@templateInstructionAST templateInstructionAnalysis'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis) (const class cPtr_templateInstructionAST * inObject,
                                                                                             const class GALGAS_templateAnalysisContext constinArgument0,
                                                                                             class GALGAS_templateInstructionListForGeneration & ioArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateInstructionAnalysis (const int32_t inClassIndex,
                                                       extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (const class cPtr_templateInstructionAST * inObject,
                                                      const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                      GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @predefinedTypes struct                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypes : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLocationType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mBoolType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mCharType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mStringType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mUIntType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSIntType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mUInt_36__34_Type ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSInt_36__34_Type ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mDoubleType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLBoolType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLCharType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLStringType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLUIntType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLSIntType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLUInt_36__34_Type ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLSInt_36__34_Type ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLDoubleType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mStringListType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLBigIntType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mBigIntType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_predefinedTypes constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_predefinedTypes (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_predefinedTypes (void) ;

//--------------------------------- Native constructor
  public : GALGAS_predefinedTypes (const GALGAS_unifiedTypeMap_2D_proxy & in_mLocationType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mBoolType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mCharType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mStringType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mUIntType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mSIntType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mUInt_36__34_Type,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mSInt_36__34_Type,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mDoubleType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLBoolType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLCharType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLStringType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLUIntType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLSIntType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLUInt_36__34_Type,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLSInt_36__34_Type,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLDoubleType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mStringListType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLBigIntType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mBigIntType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_predefinedTypes extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_predefinedTypes constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand6,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand7,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand8,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand9,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand10,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand11,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand12,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand13,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand14,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand15,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand16,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand17,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand18,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand19
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_predefinedTypes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mBigIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mBoolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mCharType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mDoubleType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLBigIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLBoolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLCharType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLDoubleType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLSInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLSIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLStringType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLUInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLUIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLocationType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mSInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mSIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mStringListType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mStringType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mUInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mUIntType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypes class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypes ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap mAttribute_mTypeMap ;
  public : GALGAS_routineMap mAttribute_mRoutineMap ;
  public : GALGAS_functionMap mAttribute_mFunctionMap ;
  public : GALGAS_filewrapperMap mAttribute_mFilewrapperMap ;
  public : GALGAS_grammarMap mAttribute_mGrammarMap ;
  public : GALGAS_optionComponentMapForSemanticAnalysis mAttribute_mOptionComponentMapForSemanticAnalysis ;
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis mAttribute_mLexiqueComponentMapForSemanticAnalysis ;
  public : GALGAS_syntaxComponentMap mAttribute_mSyntaxComponentMapForSemanticAnalysis ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_unifiedTypeMap & in_mTypeMap,
                                   const GALGAS_routineMap & in_mRoutineMap,
                                   const GALGAS_functionMap & in_mFunctionMap,
                                   const GALGAS_filewrapperMap & in_mFilewrapperMap,
                                   const GALGAS_grammarMap & in_mGrammarMap,
                                   const GALGAS_optionComponentMapForSemanticAnalysis & in_mOptionComponentMapForSemanticAnalysis,
                                   const GALGAS_lexiqueComponentMapForSemanticAnalysis & in_mLexiqueComponentMapForSemanticAnalysis,
                                   const GALGAS_syntaxComponentMap & in_mSyntaxComponentMapForSemanticAnalysis) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticContext constructor_new (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                const class GALGAS_routineMap & inOperand1,
                                                                const class GALGAS_functionMap & inOperand2,
                                                                const class GALGAS_filewrapperMap & inOperand3,
                                                                const class GALGAS_grammarMap & inOperand4,
                                                                const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                                const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                                const class GALGAS_syntaxComponentMap & inOperand7
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap getter_mFilewrapperMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap getter_mFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarMap getter_mGrammarMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis getter_mLexiqueComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis getter_mOptionComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMap getter_mRoutineMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentMap getter_mSyntaxComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap getter_mTypeMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @templateAnalysisContext struct                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticContext mAttribute_mSemanticContext ;
  public : GALGAS_predefinedTypes mAttribute_mPredefinedTypes ;
  public : GALGAS_templateVariableMap mAttribute_mTemplateVariableMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateAnalysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_templateAnalysisContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_templateAnalysisContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateAnalysisContext (const GALGAS_semanticContext & in_mSemanticContext,
                                           const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                           const GALGAS_templateVariableMap & in_mTemplateVariableMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateAnalysisContext extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateAnalysisContext constructor_new (const class GALGAS_semanticContext & inOperand0,
                                                                        const class GALGAS_predefinedTypes & inOperand1,
                                                                        const class GALGAS_templateVariableMap & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypes getter_mPredefinedTypes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticContext getter_mSemanticContext (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateVariableMap getter_mTemplateVariableMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateAnalysisContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 Routine 'templateCodeGenerationForListInstruction'                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction (const class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                       class GALGAS_string & ioArgument1,
                                                       class GALGAS_stringset & ioArgument2,
                                                       class GALGAS_uint & ioArgument3,
                                                       class GALGAS_stringset & ioArgument4,
                                                       class GALGAS_bool & ioArgument5,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration) (const class cPtr_templateInstructionForGeneration * inObject,
                                                                                                  class GALGAS_string & ioArgument0,
                                                                                                  class GALGAS_stringset & ioArgument1,
                                                                                                  class GALGAS_uint & ioArgument2,
                                                                                                  class GALGAS_stringset & ioArgument3,
                                                                                                  class GALGAS_bool & ioArgument4,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                  extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (const class cPtr_templateInstructionForGeneration * inObject,
                                                 GALGAS_string & io_ioGeneratedCode,
                                                 GALGAS_stringset & io_ioInclusionSet,
                                                 GALGAS_uint & io_ioTemporaryVariableIndex,
                                                 GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GALGAS_bool & io_ioUseColumnMarker,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           Function 'buildLexicalTypeMap'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         Routine 'buildLexicalAttributeMap'                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap (const class GALGAS_lexicalTypeMap constinArgument0,
                                       const class GALGAS_lexicalAttributeListAST constinArgument1,
                                       class GALGAS_lexicalAttributeMap & ioArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Routine 'buildTerminalMap'                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_buildTerminalMap (const class GALGAS_galgas_33_LexiqueComponentListAST_2D_element constinArgument0,
                               class GALGAS_terminalMap & outArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Routine 'buildLexicalRoutineMap'                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap (class GALGAS_lexicalRoutineMap & outArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Routine 'buildLexicalFunctionMap'                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap (class GALGAS_lexicalFunctionMap & outArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Routine 'printPredefinedLexicalActions'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Extension getter '@lexicalArgumentModeAST lexicalFormalModeName' (as function)                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_lexicalFormalModeName (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Extension getter '@lexicalTypeEnum lexicalTypeBaseName' (as function)                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_lexicalTypeBaseName (const class GALGAS_lexicalTypeEnum & inObject,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Filewrapper 'lexiqueGenerationTemplates'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const class GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                                const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const class GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                                  const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                                  const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                                  const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const class GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                                  const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                                  const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                                  const class GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                                  const class GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const class GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                                  const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                                  const class GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                          const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                          const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                          const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const class GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const class GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                          const class GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const class GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const class GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Abstract extension getter '@abstractLexicalRuleAST generateCocoaCode'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                              class GALGAS_string inArgument0,
                                                                                              class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaCode (const int32_t inClassIndex,
                                             enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                           GALGAS_string in_inScannerClassName,
                                                           GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Abstract extension getter '@abstractLexicalRuleAST generateCode'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRuleAST_generateCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                         class GALGAS_string inArgument0,
                                                                                         class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCode (const int32_t inClassIndex,
                                        enterExtensionGetter_abstractLexicalRuleAST_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                      GALGAS_string in_inScannerClassName,
                                                      GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Extension getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument' (as function)                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaPointerInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Extension getter '@lexicalArgumentModeAST cppConstInFormalArgument' (as function)                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppConstInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Extension getter '@lexicalArgumentModeAST cppReferenceInFormalArgument' (as function)                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppReferenceInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Extension getter '@lexicalTypeEnum appendArgumentOfMethod' (as function)                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_appendArgumentOfMethod (const class GALGAS_lexicalTypeEnum & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Extension getter '@lexicalTypeEnum appendMethodName' (as function)                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_appendMethodName (const class GALGAS_lexicalTypeEnum & inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Extension getter '@lexicalTypeEnum cocoaInitializationCode' (as function)                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaInitializationCode (const class GALGAS_lexicalTypeEnum & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Extension getter '@lexicalTypeEnum cocoaReset' (as function)                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaReset (const class GALGAS_lexicalTypeEnum & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Extension getter '@lexicalTypeEnum cocoaResetPrefix' (as function)                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaResetPrefix (const class GALGAS_lexicalTypeEnum & inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Extension getter '@lexicalTypeEnum cocoaTypeName' (as function)                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Extension getter '@lexicalTypeEnum cppTypeName' (as function)                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Extension getter '@lexicalTypeEnum initialization' (as function)                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_initialization (const class GALGAS_lexicalTypeEnum & inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @lexiqueAnalysisContext struct                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mLexiqueName ;
  public : GALGAS_lexicalRoutineMap mAttribute_mLexicalRoutineMessageMap ;
  public : GALGAS_lexicalFunctionMap mAttribute_mLexicalFunctionMap ;
  public : GALGAS_lexicalMessageMap mAttribute_mLexicalMessageMap ;
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_terminalList mAttribute_mTerminalList ;
  public : GALGAS_lexicalAttributeMap mAttribute_mLexicalAttributeMap ;
  public : GALGAS_lexicalExplicitTokenListMapMap mAttribute_mLexicalTokenListMap ;
  public : GALGAS_stringset mAttribute_mUnicodeStringToGenerate ;
  public : GALGAS_templateDelimitorList mAttribute_mTemplateDelimitorList ;
  public : GALGAS_styleMap mAttribute_mStyleMap ;
  public : GALGAS_stringset mAttribute_mExternUnicodeTestFunctions ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueAnalysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexiqueAnalysisContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexiqueAnalysisContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexiqueAnalysisContext (const GALGAS_string & in_mLexiqueName,
                                          const GALGAS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                          const GALGAS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                          const GALGAS_lexicalMessageMap & in_mLexicalMessageMap,
                                          const GALGAS_terminalMap & in_mTerminalMap,
                                          const GALGAS_terminalList & in_mTerminalList,
                                          const GALGAS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                          const GALGAS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                          const GALGAS_stringset & in_mUnicodeStringToGenerate,
                                          const GALGAS_templateDelimitorList & in_mTemplateDelimitorList,
                                          const GALGAS_styleMap & in_mStyleMap,
                                          const GALGAS_stringset & in_mExternUnicodeTestFunctions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueAnalysisContext extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexiqueAnalysisContext constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_lexicalRoutineMap & inOperand1,
                                                                       const class GALGAS_lexicalFunctionMap & inOperand2,
                                                                       const class GALGAS_lexicalMessageMap & inOperand3,
                                                                       const class GALGAS_terminalMap & inOperand4,
                                                                       const class GALGAS_terminalList & inOperand5,
                                                                       const class GALGAS_lexicalAttributeMap & inOperand6,
                                                                       const class GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                       const class GALGAS_stringset & inOperand8,
                                                                       const class GALGAS_templateDelimitorList & inOperand9,
                                                                       const class GALGAS_styleMap & inOperand10,
                                                                       const class GALGAS_stringset & inOperand11
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mExternUnicodeTestFunctions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap getter_mLexicalAttributeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap getter_mLexicalFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap getter_mLexicalMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap getter_mLexicalRoutineMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap getter_mLexicalTokenListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_styleMap getter_mStyleMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_mTemplateDelimitorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_mTerminalList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_mTerminalMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mUnicodeStringToGenerate (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueAnalysisContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Filewrapper 'optionGenerationTemplates'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone2'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone3'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        Filewrapper 'guiGenerationTemplates'                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'guiGenerationTemplates gui_implementation'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (class C_Compiler * inCompiler,
                                                                                const class GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                const class GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Routine 'compileAllGuiComponentFromASTGalgas3'                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33_ (const class GALGAS_galgas_33_GUIComponentListAST constinArgument0,
                                                      const class GALGAS_semanticContext constinArgument1,
                                                      class GALGAS_optionComponentMapForGeneration & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        Routine 'compileGuiComponentGalgas3'                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_compileGuiComponentGalgas_33_ (const class GALGAS_galgas_33_GUIComponentListAST_2D_element constinArgument0,
                                            const class GALGAS_semanticContext constinArgument1,
                                            class GALGAS_optionComponentMapForGeneration & ioArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Routine 'generateAllGuiComponentsGalgas3'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33_ (const class GALGAS_optionComponentMapForGeneration constinArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 const class GALGAS_bool constinArgument2,
                                                 class GALGAS_stringlist & ioArgument3,
                                                 class GALGAS_stringset & ioArgument4,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader1'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader2'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        Filewrapper 'listGenerationTemplate'                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Filewrapper template 'listGenerationTemplate listTypeHeader1'                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           Function 'forbiddenKeysForMap'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_forbiddenKeysForMap (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Filewrapper 'mapProxyGenerationTemplate'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_mapProxyGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeHeader1'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                     const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeSpecificImplementation'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                 const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const class GALGAS_string & in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                 const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Filewrapper 'sharedMapGenerationTemplate'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_sharedMapGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader1'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                       const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader2'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeSpecificImplementation'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                   const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                   const class GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                                   const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                                   const class GALGAS_mapAutomatonStateMap & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP,
                                                                                                   const class GALGAS_mapAutomatonActionMap & in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP,
                                                                                                   const class GALGAS_mapStateSortedList & in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST,
                                                                                                   const class GALGAS_mapOverrideList & in_MAP_5F_OVERRIDE_5F_LIST,
                                                                                                   const class GALGAS_keySortedList & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST,
                                                                                                   const class GALGAS_mapAutomatonMessageKind & in_SHADOW_5F_BEHAVIOUR,
                                                                                                   const class GALGAS_string & in_SHADOW_5F_MESSAGE
                                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Filewrapper 'sortedListGenerationTemplate'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_sortedListGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Filewrapper template 'sortedListGenerationTemplate sortedlistTypeHeader1'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                                     const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                     const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                     const class GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Function 'forbiddenKeysForStruct'                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset function_forbiddenKeysForStruct (class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Filewrapper 'structGenerationTemplate'                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Filewrapper template 'structGenerationTemplate structTypeHeader1'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                 const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                 const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Filewrapper template 'structGenerationTemplate structTypeSpecificImplementation'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                             const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Function 'generateGalgas3InstructionTerminator'                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_generateGalgas_33_InstructionTerminator (class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Function 'generateFewHeaderFiles'                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixAddOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixAddOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixSubOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixSubOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixMulOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixMulOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixDivOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixDivOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixModOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixModOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            Function 'infixShiftOperator'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixShiftOperator (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            Function 'prefixPlusOperator'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_prefixPlusOperator (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           Function 'prefixMinusOperator'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_prefixMinusOperator (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           Function 'prefixTildeOperator'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_prefixTildeOperator (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              Function 'incDecOperator'                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_incDecOperator (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixAndOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixAndOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixOrOperator'                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixOrOperator (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             Function 'infixXorOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixXorOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            Function 'prefixNotOperator'                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_prefixNotOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               Function 'isComparable'                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_isComparable (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Function 'plusEqualOperatorWithExpression'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_plusEqualOperatorWithExpression (class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Function 'minusEqualOperatorWithExpression'                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_minusEqualOperatorWithExpression (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Function 'mulEqualOperatorWithExpression'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_mulEqualOperatorWithExpression (class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Function 'divEqualOperatorWithExpression'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_divEqualOperatorWithExpression (class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Function 'infixAddOperatorNoOVF'                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixAddOperatorNoOVF (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Function 'infixSubOperatorNoOVF'                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixSubOperatorNoOVF (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Function 'infixMulOperatorNoOVF'                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixMulOperatorNoOVF (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          Function 'infixDivOperatorNoOVF'                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_infixDivOperatorNoOVF (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         Function 'prefixMinusOperatorNoOVF'                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_prefixMinusOperatorNoOVF (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           Function 'incDecOperatorNoOVF'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_incDecOperatorNoOVF (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           Function 'supportWithAccessor'                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_supportWithAccessor (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Function 'plusEqualOperatorWithFieldListNeedsCompilerArg'                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_plusEqualOperatorWithFieldListNeedsCompilerArg (class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Function 'generateEnumerationHelperMethods'                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_generateEnumerationHelperMethods (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Function 'doNotGenererateObjectCompare'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_doNotGenererateObjectCompare (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Function 'generateDescriptionGetterUtilityMethod'                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_generateDescriptionGetterUtilityMethod (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Function 'generateCopyConstructorAndAssignmentOperator'                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint function_generateCopyConstructorAndAssignmentOperator (class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Routine 'enterConstructorWithoutArgument'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWithoutArgument (class GALGAS_constructorMap & ioArgument0,
                                              class GALGAS_unifiedTypeMap & ioArgument1,
                                              const class GALGAS_string constinArgument2,
                                              const class GALGAS_string constinArgument3,
                                              const class GALGAS_bool constinArgument4,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Routine 'enterConstructorWithArgument'                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWithArgument (class GALGAS_constructorMap & ioArgument0,
                                           class GALGAS_unifiedTypeMap & ioArgument1,
                                           const class GALGAS_string constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_string constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_bool constinArgument6,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Routine 'enterConstructorWith2Arguments'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_32_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_bool constinArgument8,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Routine 'enterConstructorWith3Arguments'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_33_Arguments (class GALGAS_constructorMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_string constinArgument5,
                                                const class GALGAS_string constinArgument6,
                                                const class GALGAS_string constinArgument7,
                                                const class GALGAS_string constinArgument8,
                                                const class GALGAS_string constinArgument9,
                                                const class GALGAS_bool constinArgument10,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWithoutArgument'                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_bool constinArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWithoutArgument'                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_bool constinArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Routine 'enterInheritedGetterWithArgument'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWith2Arguments'                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_bool constinArgument8,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Routine 'enterBaseGetterWithoutArgument'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                             class GALGAS_unifiedTypeMap & ioArgument1,
                                             const class GALGAS_string constinArgument2,
                                             const class GALGAS_string constinArgument3,
                                             const class GALGAS_bool constinArgument4,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        Routine 'enterBaseGetterWithArgument'                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                          class GALGAS_unifiedTypeMap & ioArgument1,
                                          const class GALGAS_string constinArgument2,
                                          const class GALGAS_string constinArgument3,
                                          const class GALGAS_string constinArgument4,
                                          const class GALGAS_string constinArgument5,
                                          const class GALGAS_bool constinArgument6,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Routine 'enterBaseFinalGetterWithArgument'                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Routine 'enterBaseGetterWith2Arguments'                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_string constinArgument6,
                                               const class GALGAS_string constinArgument7,
                                               const class GALGAS_bool constinArgument8,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWith2Arguments'                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_bool constinArgument8,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWith3Arguments'                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_string constinArgument8,
                                                    const class GALGAS_string constinArgument9,
                                                    const class GALGAS_bool constinArgument10,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

#endif
