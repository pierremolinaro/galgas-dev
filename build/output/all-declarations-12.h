#ifndef all_2D_declarations_2D__31__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-11.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_convertToGalgas_33_ ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_generatePredefinedTypes ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'projectCreationFileWrapper'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_project'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_options'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_program'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performProjectCreation'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performProjectCreation (const class GALGAS_string constinArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'projectCreation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_projectCreation (const class GALGAS_string constinArgument0,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateInstructionStringAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : static GALGAS_templateInstructionStringAST constructor_new (const class GALGAS_string & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTemplateString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @templateInstructionStringAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionStringAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_string mAttribute_mTemplateString ;

//--- Constructor
  public : cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTemplateString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'templateInstructionListAnalysis'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateInstructionListAnalysis (const class GALGAS_templateAnalysisContext constinArgument0,
                                              const class GALGAS_templateInstructionListAST constinArgument1,
                                              class GALGAS_templateInstructionListForGeneration & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@templateInstructionAST templateInstructionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_templateInstructionAST_templateInstructionAnalysis) (const class cPtr_templateInstructionAST * inObject,
                                                                                            const class GALGAS_templateAnalysisContext constinArgument0,
                                                                                            class GALGAS_templateInstructionListForGeneration & ioArgument1,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateInstructionAnalysis (const int32_t inClassIndex,
                                                      categoryMethodSignature_templateInstructionAST_templateInstructionAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateInstructionAnalysis (const class cPtr_templateInstructionAST * inObject,
                                                     const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                     GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @predefinedTypes struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : static GALGAS_predefinedTypes constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
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

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_predefinedTypes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mBigIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mBoolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mCharType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mDoubleType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLBigIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLBoolType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLCharType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLDoubleType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLSInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLSIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLStringType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLUInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLUIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mLocationType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSIntType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mStringListType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mStringType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mUInt_36__34_Type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mUIntType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypes class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypes ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : static GALGAS_semanticContext constructor_new (const class GALGAS_unifiedTypeMap & inOperand0,
                                                          const class GALGAS_routineMap & inOperand1,
                                                          const class GALGAS_functionMap & inOperand2,
                                                          const class GALGAS_filewrapperMap & inOperand3,
                                                          const class GALGAS_grammarMap & inOperand4,
                                                          const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                          const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                          const class GALGAS_syntaxComponentMap & inOperand7
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap reader_mFilewrapperMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap reader_mFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarMap reader_mGrammarMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis reader_mLexiqueComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis reader_mOptionComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMap reader_mRoutineMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentMap reader_mSyntaxComponentMapForSemanticAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap reader_mTypeMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateAnalysisContext struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : static GALGAS_templateAnalysisContext constructor_new (const class GALGAS_semanticContext & inOperand0,
                                                                  const class GALGAS_predefinedTypes & inOperand1,
                                                                  const class GALGAS_templateVariableMap & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypes reader_mPredefinedTypes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticContext reader_mSemanticContext (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateVariableMap reader_mTemplateVariableMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateAnalysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'templateCodeGenerationForListInstruction'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateCodeGenerationForListInstruction (const class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                       class GALGAS_string & ioArgument1,
                                                       class GALGAS_stringset & ioArgument2,
                                                       class GALGAS_uint & ioArgument3,
                                                       class GALGAS_stringset & ioArgument4,
                                                       class GALGAS_bool & ioArgument5,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@templateInstructionForGeneration templateCodeGeneration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_templateInstructionForGeneration_templateCodeGeneration) (const class cPtr_templateInstructionForGeneration * inObject,
                                                                                                 class GALGAS_string & ioArgument0,
                                                                                                 class GALGAS_stringset & ioArgument1,
                                                                                                 class GALGAS_uint & ioArgument2,
                                                                                                 class GALGAS_stringset & ioArgument3,
                                                                                                 class GALGAS_bool & ioArgument4,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                 categoryMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_templateCodeGeneration (const class cPtr_templateInstructionForGeneration * inObject,
                                                GALGAS_string & io_ioGeneratedCode,
                                                GALGAS_stringset & io_ioInclusionSet,
                                                GALGAS_uint & io_ioTemporaryVariableIndex,
                                                GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                GALGAS_bool & io_ioUseColumnMarker,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'buildLexicalTypeMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'buildLexicalAttributeMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalAttributeMap (const class GALGAS_lexicalTypeMap constinArgument0,
                                       const class GALGAS_lexicalAttributeListAST constinArgument1,
                                       class GALGAS_lexicalAttributeMap & ioArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'buildTerminalMap'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTerminalMap (const class GALGAS_galgas_33_LexiqueComponentListAST_2D_element constinArgument0,
                               class GALGAS_terminalMap & outArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalRoutineMap'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalRoutineMap (class GALGAS_lexicalRoutineMap & outArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalFunctionMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalFunctionMap (class GALGAS_lexicalFunctionMap & outArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'printPredefinedLexicalActions'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_printPredefinedLexicalActions (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category Getter '@lexicalArgumentModeAST lexicalFormalModeName' (as function)                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_lexicalFormalModeName (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@lexicalTypeEnum lexicalTypeBaseName' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_lexicalTypeBaseName (const class GALGAS_lexicalTypeEnum & inObject,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'lexiqueGenerationTemplates'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const class GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const class GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                                const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const class GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_ (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const class GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                        const class GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                        const class GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                        const class GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const class GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const class GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                        const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                        const class GALGAS_galgas_33_LexiqueComponentListAST_2D_element & in_LEXIQUE_5F_COMPONENT_5F_ROOT
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const class GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category reader '@abstractLexicalRuleAST generateCocoaCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractLexicalRuleAST_generateCocoaCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                                 class GALGAS_string inArgument0,
                                                                                                 class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCocoaCode (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractLexicalRuleAST_generateCocoaCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                          GALGAS_string in_inScannerClassName,
                                                          GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category reader '@abstractLexicalRuleAST generateCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractLexicalRuleAST_generateCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                            class GALGAS_string inArgument0,
                                                                                            class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateCode (const int32_t inClassIndex,
                                       categoryReaderSignature_abstractLexicalRuleAST_generateCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                     GALGAS_string in_inScannerClassName,
                                                     GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cocoaPointerInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category Getter '@lexicalArgumentModeAST cppConstInFormalArgument' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cppConstInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Getter '@lexicalArgumentModeAST cppReferenceInFormalArgument' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cppReferenceInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Getter '@lexicalTypeEnum appendArgumentOfMethod' (as function)                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_appendArgumentOfMethod (const class GALGAS_lexicalTypeEnum & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Getter '@lexicalTypeEnum appendMethodName' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_appendMethodName (const class GALGAS_lexicalTypeEnum & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category Getter '@lexicalTypeEnum cocoaInitializationCode' (as function)                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cocoaInitializationCode (const class GALGAS_lexicalTypeEnum & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Getter '@lexicalTypeEnum cocoaReset' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cocoaReset (const class GALGAS_lexicalTypeEnum & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Getter '@lexicalTypeEnum cocoaResetPrefix' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cocoaResetPrefix (const class GALGAS_lexicalTypeEnum & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Getter '@lexicalTypeEnum cocoaTypeName' (as function)                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cocoaTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@lexicalTypeEnum cppTypeName' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_cppTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Getter '@lexicalTypeEnum initialization' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_initialization (const class GALGAS_lexicalTypeEnum & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexiqueAnalysisContext struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : static GALGAS_lexiqueAnalysisContext constructor_new (const class GALGAS_string & inOperand0,
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

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mExternUnicodeTestFunctions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap reader_mLexicalAttributeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap reader_mLexicalFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap reader_mLexicalMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap reader_mLexicalRoutineMessageMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap reader_mLexicalTokenListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_styleMap reader_mStyleMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList reader_mTemplateDelimitorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList reader_mTerminalList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap reader_mTerminalMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mUnicodeStringToGenerate (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueAnalysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'parseLexiqueComponent'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseLexiqueComponent (const class GALGAS_lstring constinArgument0,
                                    class GALGAS_parsedComponentStruct & ioArgument1,
                                    class GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument2,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @parsedComponentStruct struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_parsedComponentStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_parsedSemanticsComponentMap mAttribute_mParsedSemanticsComponentMap ;
  public : GALGAS_parsedLexiqueComponentMap mAttribute_mParsedLexiqueComponentMap ;
  public : GALGAS_parsedSyntaxComponentMap mAttribute_mParsedSyntaxComponentMap ;
  public : GALGAS_parsedOptionComponentMap mAttribute_mParsedOptionComponentMap ;
  public : GALGAS_parsedGrammarComponentMap mAttribute_mParsedGrammarComponentMap ;
  public : GALGAS_parsedProgramComponentMap mAttribute_mParsedProgramComponentMap ;
  public : GALGAS_parsedGuiComponentMap mAttribute_mParsedGuiComponentMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_parsedComponentStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_parsedComponentStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_parsedComponentStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_parsedComponentStruct (const GALGAS_parsedSemanticsComponentMap & in_mParsedSemanticsComponentMap,
                                         const GALGAS_parsedLexiqueComponentMap & in_mParsedLexiqueComponentMap,
                                         const GALGAS_parsedSyntaxComponentMap & in_mParsedSyntaxComponentMap,
                                         const GALGAS_parsedOptionComponentMap & in_mParsedOptionComponentMap,
                                         const GALGAS_parsedGrammarComponentMap & in_mParsedGrammarComponentMap,
                                         const GALGAS_parsedProgramComponentMap & in_mParsedProgramComponentMap,
                                         const GALGAS_parsedGuiComponentMap & in_mParsedGuiComponentMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_parsedComponentStruct extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_parsedComponentStruct constructor_new (const class GALGAS_parsedSemanticsComponentMap & inOperand0,
                                                                const class GALGAS_parsedLexiqueComponentMap & inOperand1,
                                                                const class GALGAS_parsedSyntaxComponentMap & inOperand2,
                                                                const class GALGAS_parsedOptionComponentMap & inOperand3,
                                                                const class GALGAS_parsedGrammarComponentMap & inOperand4,
                                                                const class GALGAS_parsedProgramComponentMap & inOperand5,
                                                                const class GALGAS_parsedGuiComponentMap & inOperand6
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parsedComponentStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGrammarComponentMap reader_mParsedGrammarComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGuiComponentMap reader_mParsedGuiComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedLexiqueComponentMap reader_mParsedLexiqueComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedOptionComponentMap reader_mParsedOptionComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedProgramComponentMap reader_mParsedProgramComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSemanticsComponentMap reader_mParsedSemanticsComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSyntaxComponentMap reader_mParsedSyntaxComponentMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parsedComponentStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parsedComponentStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'compileLexiqueComponentFromAST'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileLexiqueComponentFromAST (const class GALGAS_string constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_galgas_33_LexiqueComponentListAST_2D_element constinArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@abstractLexicalRuleAST checkLexicalRule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                 class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkLexicalRule (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkLexicalRule (const class cPtr_abstractLexicalRuleAST * inObject,
                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'compileLexiqueComponentFromSource'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileLexiqueComponentFromSource (const class GALGAS_lstring constinArgument0,
                                                const class GALGAS_string constinArgument1,
                                                class GALGAS_parsedComponentStruct & ioArgument2,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'optionGenerationTemplates'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone2'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_32_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone3'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'optionGenerationTemplates optionImplementation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementation (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const class GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const class GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const class GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfOptionComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfOptionComponent (const class GALGAS_optionComponentAST constinArgument0,
                                                class GALGAS_commandLineOptionMap & outArgument1,
                                                class GALGAS_commandLineOptionMap & outArgument2,
                                                class GALGAS_commandLineOptionMap & outArgument3,
                                                class GALGAS_commandLineOptionMap & outArgument4,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'parseOptionComponent'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseOptionComponent (const class GALGAS_lstring constinArgument0,
                                   class GALGAS_parsedComponentStruct & ioArgument1,
                                   class GALGAS_lstring & outArgument2,
                                   class GALGAS_commandLineOptionMap & outArgument3,
                                   class GALGAS_commandLineOptionMap & outArgument4,
                                   class GALGAS_commandLineOptionMap & outArgument5,
                                   class GALGAS_commandLineOptionMap & outArgument6,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'compileOptionComponentAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileOptionComponentAST (const class GALGAS_string constinArgument0,
                                        const class GALGAS_lstring constinArgument1,
                                        const class GALGAS_commandLineOptionMap constinArgument2,
                                        const class GALGAS_commandLineOptionMap constinArgument3,
                                        const class GALGAS_commandLineOptionMap constinArgument4,
                                        const class GALGAS_commandLineOptionMap constinArgument5,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'compileOptionComponentFromSourceFile'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileOptionComponentFromSourceFile (const class GALGAS_lstring constinArgument0,
                                                   const class GALGAS_string constinArgument1,
                                                   class GALGAS_parsedComponentStruct & ioArgument2,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'guiGenerationTemplates'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'guiGenerationTemplates gui_implementation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (class C_Compiler * inCompiler,
                                                                                const class GALGAS_bool & in_GENERATE_5F_FOR_5F_GALGAS_33_,
                                                                                const class GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileGuiComponentFromAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileGuiComponentFromAST (const class GALGAS_lstring constinArgument0,
                                         const class GALGAS_string constinArgument1,
                                         const class GALGAS_guiComponentAST constinArgument2,
                                         class GALGAS_parsedComponentStruct & ioArgument3,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'compileGuiComponentFromSourceFile'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileGuiComponentFromSourceFile (const class GALGAS_lstring constinArgument0,
                                                const class GALGAS_string constinArgument1,
                                                class GALGAS_parsedComponentStruct & ioArgument2,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'compileAllGuiComponentFromASTGalgas3'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileAllGuiComponentFromASTGalgas_33_ (const class GALGAS_galgas_33_GUIComponentListAST constinArgument0,
                                                      const class GALGAS_semanticContext constinArgument1,
                                                      class GALGAS_optionComponentMapForGeneration & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileGuiComponentGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileGuiComponentGalgas_33_ (const class GALGAS_galgas_33_GUIComponentListAST_2D_element constinArgument0,
                                            const class GALGAS_semanticContext constinArgument1,
                                            class GALGAS_optionComponentMapForGeneration & ioArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateAllGuiComponentsGalgas3'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateAllGuiComponentsGalgas_33_ (const class GALGAS_optionComponentMapForGeneration constinArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 class GALGAS_stringlist & ioArgument2,
                                                 class GALGAS_stringset & ioArgument3,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'generateFewHeaderFiles'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'binaryAddOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryAddOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'binarySubOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binarySubOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'binaryMulOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryMulOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'binaryDivOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryDivOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'binaryModOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryModOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'binaryShiftOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryShiftOperator (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'unaryPlusOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_unaryPlusOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'unaryMinusOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_unaryMinusOperator (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'unaryTildeOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_unaryTildeOperator (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'incDecOperator'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_incDecOperator (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'binaryAndOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryAndOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'binaryOrOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryOrOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'binaryXorOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryXorOperator (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'unaryNotOperator'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_unaryNotOperator (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'binaryConcatOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryConcatOperator (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'plusEqualOperatorWithExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_plusEqualOperatorWithExpression (class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'isComparable'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_isComparable (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'binaryAddOperatorNoOVF'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryAddOperatorNoOVF (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'binarySubOperatorNoOVF'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binarySubOperatorNoOVF (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'binaryMulOperatorNoOVF'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryMulOperatorNoOVF (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'binaryDivOperatorNoOVF'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_binaryDivOperatorNoOVF (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'unaryMinusOperatorNoOVF'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_unaryMinusOperatorNoOVF (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'supportWithAccessor'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_supportWithAccessor (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Function 'plusEqualOperatorWithFieldListNeedsCompilerArg'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_plusEqualOperatorWithFieldListNeedsCompilerArg (class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'generateEnumerationHelperMethods'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_generateEnumerationHelperMethods (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'doNotGenererateObjectCompare'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_doNotGenererateObjectCompare (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Function 'generateDescriptionReaderUtilityMethod'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_generateDescriptionReaderUtilityMethod (class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Function 'generateCopyConstructorAndAssignmentOperator'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_generateCopyConstructorAndAssignmentOperator (class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWithoutArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWithoutArgument (class GALGAS_constructorMap & ioArgument0,
                                              class GALGAS_unifiedTypeMap & ioArgument1,
                                              const class GALGAS_string constinArgument2,
                                              const class GALGAS_string constinArgument3,
                                              const class GALGAS_bool constinArgument4,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterConstructorWithArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWithArgument (class GALGAS_constructorMap & ioArgument0,
                                           class GALGAS_unifiedTypeMap & ioArgument1,
                                           const class GALGAS_string constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_string constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_bool constinArgument6,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWith2Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWith3Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_bool constinArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_bool constinArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterInheritedGetterWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedReaderWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedReaderWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterBaseReaderWithoutArgument'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                             class GALGAS_unifiedTypeMap & ioArgument1,
                                             const class GALGAS_string constinArgument2,
                                             const class GALGAS_string constinArgument3,
                                             const class GALGAS_bool constinArgument4,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'enterBaseReaderWithArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWithArgument (class GALGAS_getterMap & ioArgument0,
                                          class GALGAS_unifiedTypeMap & ioArgument1,
                                          const class GALGAS_string constinArgument2,
                                          const class GALGAS_string constinArgument3,
                                          const class GALGAS_string constinArgument4,
                                          const class GALGAS_string constinArgument5,
                                          const class GALGAS_bool constinArgument6,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterBaseFinalReaderWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalReaderWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterBaseReaderWith2Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalReaderWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalReaderWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterBaseReaderWith3Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseReaderWith_33_Arguments (class GALGAS_getterMap & ioArgument0,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalReaderWith3Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalReaderWith_33_Arguments (class GALGAS_getterMap & ioArgument0,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'commonReaderMapForAllTypes'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_commonReaderMapForAllTypes (class GALGAS_unifiedTypeMap & ioArgument0,
                                         class GALGAS_getterMap & outArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterModifierWithInputArgument'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWithInputArgument (class GALGAS_setterMap & ioArgument0,
                                             class GALGAS_unifiedTypeMap & ioArgument1,
                                             const class GALGAS_string constinArgument2,
                                             const class GALGAS_string constinArgument3,
                                             const class GALGAS_string constinArgument4,
                                             const class GALGAS_bool constinArgument5,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterModifierWith2InputArguments'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWith_32_InputArguments (class GALGAS_setterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_string constinArgument4,
                                                  const class GALGAS_string constinArgument5,
                                                  const class GALGAS_string constinArgument6,
                                                  const class GALGAS_bool constinArgument7,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterModifierWith3InputArguments'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWith_33_InputArguments (class GALGAS_setterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_string constinArgument4,
                                                  const class GALGAS_string constinArgument5,
                                                  const class GALGAS_string constinArgument6,
                                                  const class GALGAS_string constinArgument7,
                                                  const class GALGAS_string constinArgument8,
                                                  const class GALGAS_bool constinArgument9,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterModifierWithoutArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWithoutArgument (class GALGAS_setterMap & ioArgument0,
                                           const class GALGAS_string constinArgument1,
                                           const class GALGAS_bool constinArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInstanceMethodWithoutArgument'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithoutArgument (class GALGAS_instanceMethodMap & ioArgument0,
                                                 const class GALGAS_lstring constinArgument1,
                                                 const class GALGAS_bool constinArgument2,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'enterInstanceMethodWithInputArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithInputArgument (class GALGAS_instanceMethodMap & ioArgument0,
                                                   class GALGAS_unifiedTypeMap & ioArgument1,
                                                   const class GALGAS_string constinArgument2,
                                                   const class GALGAS_string constinArgument3,
                                                   const class GALGAS_lstring constinArgument4,
                                                   const class GALGAS_bool constinArgument5,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'enterInstanceMethodWithOutputArgument'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithOutputArgument (class GALGAS_instanceMethodMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_lstring constinArgument4,
                                                    const class GALGAS_bool constinArgument5,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterClassMethodWithInputArgument'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterClassMethodWithInputArgument (class GALGAS_classMethodMap & ioArgument0,
                                                class GALGAS_unifiedTypeMap & ioArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                const class GALGAS_bool constinArgument5,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'enterClassMethodWithStringInputArgument'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterClassMethodWithStringInputArgument (class GALGAS_classMethodMap & ioArgument0,
                                                      class GALGAS_unifiedTypeMap & ioArgument1,
                                                      const class GALGAS_string constinArgument2,
                                                      const class GALGAS_string constinArgument3,
                                                      const class GALGAS_bool constinArgument4,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'compilerCppName'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_compilerCppName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Function 'syntaxDirectedTranslationResultVarName'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_syntaxDirectedTranslationResultVarName (class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'addCategories'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addCategories (const class GALGAS_categoryMethodMapForBuildingContext constinArgument0,
                            const class GALGAS_categoryReaderMapForBuildingContext constinArgument1,
                            const class GALGAS_categoryModifierMapForBuildingContext constinArgument2,
                            class GALGAS_semanticContext & ioArgument3,
                            const class GALGAS_lstring constinArgument4,
                            class GALGAS_getterMap & ioArgument5,
                            class GALGAS_setterMap & ioArgument6,
                            class GALGAS_instanceMethodMap & ioArgument7,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'elementTypeNameSuffix'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_elementTypeNameSuffix (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivelyEnumerateDirectories'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivelyEnumerateDirectories (const class GALGAS_string constinArgument0,
                                              const class GALGAS_string constinArgument1,
                                              const class GALGAS_wrapperExtensionMap constinArgument2,
                                              const class GALGAS_wrapperExtensionMap constinArgument3,
                                              class GALGAS_wrapperFileMap & outArgument4,
                                              class GALGAS_wrapperDirectoryMap & outArgument5,
                                              class GALGAS_uint & ioArgument6,
                                              class GALGAS_uint & ioArgument7,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const class GALGAS_semanticDeclarationListAST constinArgument0,
                                   class GALGAS_semanticContext & outArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category reader '@semanticDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_semanticDeclarationAST_keyRepresentation) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_keyRepresentation (const int32_t inClassIndex,
                                            categoryReaderSignature_semanticDeclarationAST_keyRepresentation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_keyRepresentation (const class cPtr_semanticDeclarationAST * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@semanticDeclarationAST addAssociatedElement'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_addAssociatedElement) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                     class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addAssociatedElement (const int32_t inClassIndex,
                                               categoryMethodSignature_semanticDeclarationAST_addAssociatedElement inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addAssociatedElement (const class cPtr_semanticDeclarationAST * inObject,
                                              GALGAS_semanticDeclarationListAST & io_ioSemanticDeclarationList,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category method '@semanticDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_enterDeclarationInGraph) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                        class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                        class GALGAS_categoryMethodMapForBuildingContext & ioArgument1,
                                                                                        class GALGAS_categoryReaderMapForBuildingContext & ioArgument2,
                                                                                        class GALGAS_categoryModifierMapForBuildingContext & ioArgument3,
                                                                                        class GALGAS_semanticDeclarationListAST & ioArgument4,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterDeclarationInGraph (const int32_t inClassIndex,
                                                  categoryMethodSignature_semanticDeclarationAST_enterDeclarationInGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterDeclarationInGraph (const class cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                 GALGAS_categoryMethodMapForBuildingContext & io_ioCategoryMethodMapForBuildingContext,
                                                 GALGAS_categoryReaderMapForBuildingContext & io_ioCategoryReaderMapForBuildingContext,
                                                 GALGAS_categoryModifierMapForBuildingContext & io_ioCategoryModifierMapForBuildingContext,
                                                 GALGAS_semanticDeclarationListAST & io_ioCategoryOverrideDefinitionList,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@semanticDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_enterInSemanticContext) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                       const class GALGAS_categoryMethodMapForBuildingContext constinArgument0,
                                                                                       const class GALGAS_categoryReaderMapForBuildingContext constinArgument1,
                                                                                       const class GALGAS_categoryModifierMapForBuildingContext constinArgument2,
                                                                                       class GALGAS_semanticContext & ioArgument3,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_semanticDeclarationAST_enterInSemanticContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInSemanticContext (const class cPtr_semanticDeclarationAST * inObject,
                                                const GALGAS_categoryMethodMapForBuildingContext constin_inCategoryMethodMapForBuildingContext,
                                                const GALGAS_categoryReaderMapForBuildingContext constin_inCategoryReaderMapForBuildingContext,
                                                const GALGAS_categoryModifierMapForBuildingContext constin_inCategoryModifierMapForBuildingContext,
                                                GALGAS_semanticContext & io_ioSemanticContext,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateInstructionList'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInstructionList (class GALGAS_stringset & ioArgument0,
                                      const class GALGAS_semanticInstructionListForGeneration constinArgument1,
                                      class GALGAS_uint & ioArgument2,
                                      class GALGAS_stringset & ioArgument3,
                                      const class GALGAS_bool constinArgument4,
                                      class GALGAS_string & ioArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@semanticInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticInstructionForGeneration_generateInstruction) (const class cPtr_semanticInstructionForGeneration * inObject,
                                                                                              class GALGAS_stringset & ioArgument0,
                                                                                              class GALGAS_uint & ioArgument1,
                                                                                              class GALGAS_stringset & ioArgument2,
                                                                                              const class GALGAS_bool constinArgument3,
                                                                                              class GALGAS_string & ioArgument4,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateInstruction (const int32_t inClassIndex,
                                              categoryMethodSignature_semanticInstructionForGeneration_generateInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateInstruction (const class cPtr_semanticInstructionForGeneration * inObject,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                             GALGAS_string & io_ioGeneratedCode,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkAssignmentTypes'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentTypes (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                   const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                   const class GALGAS_location constinArgument2,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeConstructorInvocation'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeConstructorInvocation (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                           const class GALGAS_analysisContext constinArgument1,
                                           class GALGAS_variableMap & ioArgument2,
                                           const class GALGAS_lstring constinArgument3,
                                           const class GALGAS_lstring constinArgument4,
                                           const class GALGAS_actualOutputExpressionList constinArgument5,
                                           class GALGAS_unifiedTypeMap_2D_proxy & outArgument6,
                                           class GALGAS_unifiedTypeMap_2D_proxy & outArgument7,
                                           class GALGAS_semanticExpressionListForGeneration & outArgument8,
                                           class GALGAS_bool & outArgument9,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category method '@semanticExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticExpressionAST_analyzeSemanticExpression) (const class cPtr_semanticExpressionAST * inObject,
                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                         const class GALGAS_analysisContext constinArgument1,
                                                                                         class GALGAS_variableMap & ioArgument2,
                                                                                         class GALGAS_semanticExpressionForGeneration & outArgument3,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSemanticExpression (const int32_t inClassIndex,
                                                    categoryMethodSignature_semanticExpressionAST_analyzeSemanticExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSemanticExpression (const class cPtr_semanticExpressionAST * inObject,
                                                   const GALGAS_unifiedTypeMap_2D_proxy constin_inType,
                                                   const GALGAS_analysisContext constin_inAnalysisContext,
                                                   GALGAS_variableMap & io_ioVariableMap,
                                                   GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @analysisContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_analysisContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticContext mAttribute_mSemanticContext ;
  public : GALGAS_predefinedTypes mAttribute_mPredefinedTypes ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSelfCopyTypeProxy ;
  public : GALGAS_string mAttribute_mSelfObjectCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSelfTypeProxy ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_analysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_analysisContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_analysisContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_analysisContext (const GALGAS_semanticContext & in_mSemanticContext,
                                   const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfCopyTypeProxy,
                                   const GALGAS_string & in_mSelfObjectCppName,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfTypeProxy) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_analysisContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_analysisContext constructor_new (const class GALGAS_semanticContext & inOperand0,
                                                          const class GALGAS_predefinedTypes & inOperand1,
                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                          const class GALGAS_string & inOperand3,
                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_analysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypes reader_mPredefinedTypes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSelfCopyTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSelfObjectCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSelfTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticContext reader_mSemanticContext (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_analysisContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analysisContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checkReaderImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_checkReaderImplementationInSuperClasses (const class GALGAS_lstring & constinArgument0,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'checkDiadicOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkDiadicOperator (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                  const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                  const class GALGAS_bool constinArgument2,
                                  const class GALGAS_string constinArgument3,
                                  const class GALGAS_location constinArgument4,
                                  class GALGAS_semanticExpressionForGeneration & ioArgument5,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @readerCallExpressionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_readerCallExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_readerCallExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_readerCallExpressionForGeneration * ptr (void) const { return (const cPtr_readerCallExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_readerCallExpressionForGeneration (const cPtr_readerCallExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_readerCallExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_readerCallExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_methodKind & inOperand2,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                            const class GALGAS_stringlist & inOperand4,
                                                                            const class GALGAS_string & inOperand5,
                                                                            const class GALGAS_semanticExpressionListForGeneration & inOperand6,
                                                                            const class GALGAS_bool & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_readerCallExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration reader_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readerCallExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readerCallExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @readerCallExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_readerCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mReceiverExpression ;
  public : GALGAS_stringlist mAttribute_mFieldList ;
  public : GALGAS_string mAttribute_mReaderName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressions ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_readerCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_methodKind & in_mKind,
                                                   const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                   const GALGAS_stringlist & in_mFieldList,
                                                   const GALGAS_string & in_mReaderName,
                                                   const GALGAS_semanticExpressionListForGeneration & in_mExpressions,
                                                   const GALGAS_bool & in_mHasCompilerArgument
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind reader_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeSemanticInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSemanticInstructionList (const class GALGAS_analysisContext constinArgument0,
                                             const class GALGAS_localConstantList constinArgument1,
                                             const class GALGAS_localInitializedVariableList constinArgument2,
                                             const class GALGAS_semanticInstructionListAST constinArgument3,
                                             const class GALGAS_location constinArgument4,
                                             class GALGAS_variableMap & ioArgument5,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument6,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@semanticInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticInstructionAST_analyzeSemanticInstruction) (const class cPtr_semanticInstructionAST * inObject,
                                                                                           const class GALGAS_analysisContext constinArgument0,
                                                                                           class GALGAS_semanticInstructionListForGeneration & ioArgument1,
                                                                                           class GALGAS_variableMap & ioArgument2,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSemanticInstruction (const int32_t inClassIndex,
                                                     categoryMethodSignature_semanticInstructionAST_analyzeSemanticInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSemanticInstruction (const class cPtr_semanticInstructionAST * inObject,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_analysisContext constinArgument0,
                                               const class GALGAS_semanticExpressionAST constinArgument1,
                                               const class GALGAS_semanticExpressionAST constinArgument2,
                                               const class GALGAS_location constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               class GALGAS_variableMap & ioArgument5,
                                               class GALGAS_semanticExpressionForGeneration & outArgument6,
                                               class GALGAS_semanticExpressionForGeneration & outArgument7,
                                               class GALGAS_bool & outArgument8,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeRoutineArguments'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineArguments (const class GALGAS_analysisContext constinArgument0,
                                      const class GALGAS_lstring constinArgument1,
                                      const class GALGAS_string constinArgument2,
                                      const class GALGAS_formalParameterSignature constinArgument3,
                                      const class GALGAS_actualParameterListAST constinArgument4,
                                      class GALGAS_variableMap & ioArgument5,
                                      class GALGAS_semanticInstructionListForGeneration & ioArgument6,
                                      class GALGAS_actualParameterListForGeneration & outArgument7,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@actualParameterAST checkAgainstFormalArgument'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_actualParameterAST_checkAgainstFormalArgument) (const class cPtr_actualParameterAST * inObject,
                                                                                       const class GALGAS_analysisContext constinArgument0,
                                                                                       const class GALGAS_lstring constinArgument1,
                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                                                       const class GALGAS_formalArgumentPassingModeAST constinArgument3,
                                                                                       class GALGAS_variableMap & ioArgument4,
                                                                                       class GALGAS_actualParameterListForGeneration & ioArgument5,
                                                                                       class GALGAS_stringset & ioArgument6,
                                                                                       class GALGAS_semanticInstructionListForGeneration & ioArgument7,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_checkAgainstFormalArgument (const int32_t inClassIndex,
                                                     categoryMethodSignature_actualParameterAST_checkAgainstFormalArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_checkAgainstFormalArgument (const class cPtr_actualParameterAST * inObject,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    const GALGAS_lstring constin_inFormalSelector,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inFormalArgumentType,
                                                    const GALGAS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    GALGAS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                    GALGAS_stringset & io_ioExclusiveVariableSet,
                                                    GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checkMethodImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_checkMethodImplementationInSuperClasses (const class GALGAS_lstring & constinArgument0,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Function 'checkModifierImplementationInSuperClasses'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_checkModifierImplementationInSuperClasses (const class GALGAS_lstring & constinArgument0,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'checkExpressionIsBoolean'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkExpressionIsBoolean (const class GALGAS_analysisContext constinArgument0,
                                       const class GALGAS_location constinArgument1,
                                       const class GALGAS_semanticExpressionForGeneration constinArgument2,
                                       class GALGAS_semanticExpressionForGeneration & outArgument3,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @structFieldAccessExpressionForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structFieldAccessExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_structFieldAccessExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_structFieldAccessExpressionForGeneration * ptr (void) const { return (const cPtr_structFieldAccessExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structFieldAccessExpressionForGeneration (const cPtr_structFieldAccessExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structFieldAccessExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structFieldAccessExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                   const class GALGAS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structFieldAccessExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStructFieldName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldAccessExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @structFieldAccessExpressionForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structFieldAccessExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;
  public : GALGAS_string mAttribute_mStructFieldName ;

//--- Constructor
  public : cPtr_structFieldAccessExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                          const GALGAS_location & in_mLocation,
                                                          const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                          const GALGAS_string & in_mStructFieldName
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mStructFieldName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkMethodSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMethodSignatures (const class GALGAS_formalParameterListForGeneration constinArgument0,
                                    const class GALGAS_location constinArgument1,
                                    const class GALGAS_formalParameterSignature constinArgument2,
                                    const class GALGAS_location constinArgument3,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category Getter '@formalArgumentPassingModeAST formalArgumentMessage' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_formalArgumentMessage (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@formalArgumentPassingModeAST string' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_string (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkReaderSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkReaderSignatures (const class GALGAS_formalInputParameterListForGeneration constinArgument0,
                                    const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                    const class GALGAS_location constinArgument2,
                                    const class GALGAS_functionSignature constinArgument3,
                                    const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                    const class GALGAS_location constinArgument5,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_L_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'forbiddenKeysForMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringset function_forbiddenKeysForMap (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'buildLocalVariableMapAndSignature'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLocalVariableMapAndSignature (const class GALGAS_semanticContext constinArgument0,
                                                const class GALGAS_formalParameterListAST constinArgument1,
                                                class GALGAS_variableMap & ioArgument2,
                                                class GALGAS_formalParameterListForGeneration & outArgument3,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineBody'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineBody (const class GALGAS_analysisContext constinArgument0,
                                 const class GALGAS_formalParameterListAST constinArgument1,
                                 const class GALGAS_localConstantList constinArgument2,
                                 const class GALGAS_typedPropertyList constinArgument3,
                                 const class GALGAS_typedPropertyList constinArgument4,
                                 const class GALGAS_string constinArgument5,
                                 const class GALGAS_semanticInstructionListAST constinArgument6,
                                 const class GALGAS_location constinArgument7,
                                 class GALGAS_semanticInstructionListForGeneration & outArgument8,
                                 class GALGAS_formalParameterListForGeneration & outArgument9,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeFunctionBody'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionBody (const class GALGAS_analysisContext constinArgument0,
                                  const class GALGAS_formalInputParameterListAST constinArgument1,
                                  const class GALGAS_typedPropertyList constinArgument2,
                                  const class GALGAS_string constinArgument3,
                                  const class GALGAS_semanticInstructionListAST constinArgument4,
                                  const class GALGAS_lstring constinArgument5,
                                  const class GALGAS_lstring constinArgument6,
                                  const class GALGAS_location constinArgument7,
                                  class GALGAS_formalInputParameterListForGeneration & outArgument8,
                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument9,
                                  class GALGAS_string & outArgument10,
                                  class GALGAS_semanticInstructionListForGeneration & outArgument11,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'buildPredefinedTypes'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_predefinedTypes function_buildPredefinedTypes (const class GALGAS_semanticContext & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performSemanticAnalysis (const class GALGAS_string constinArgument0,
                                      const class GALGAS_semanticDeclarationListAST constinArgument1,
                                      const class GALGAS_semanticContext constinArgument2,
                                      class GALGAS_semanticDeclarationSortedListForGeneration & outArgument3,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@semanticDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationAST_semanticAnalysis) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                 const class GALGAS_string constinArgument0,
                                                                                 const class GALGAS_semanticContext constinArgument1,
                                                                                 const class GALGAS_predefinedTypes constinArgument2,
                                                                                 class GALGAS_semanticDeclarationSortedListForGeneration & ioArgument3,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_semanticDeclarationAST_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const class cPtr_semanticDeclarationAST * inObject,
                                          const GALGAS_string constin_inProductDirectory,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          const GALGAS_predefinedTypes constin_inPredefinedTypes,
                                          GALGAS_semanticDeclarationSortedListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'syntaxFileGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeader'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeader (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                 const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                 const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeaderGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                         const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const class GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const class GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const class GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'enterNonterminalNonTerminalInMapAndCheck'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterNonterminalNonTerminalInMapAndCheck (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_nonterminalLabelMap constinArgument1,
                                                       class GALGAS_nonterminalMap & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildNonterminalDeclarationsMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildNonterminalDeclarationsMap (const class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                              const class GALGAS_semanticContext constinArgument1,
                                              class GALGAS_nonterminalMap & outArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeSyntaxInstructionList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSyntaxInstructionList (const class GALGAS_analysisContext constinArgument0,
                                           const class GALGAS_bool constinArgument1,
                                           const class GALGAS_terminalMap constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_nonterminalMap constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_syntaxInstructionList constinArgument6,
                                           const class GALGAS_location constinArgument7,
                                           const class GALGAS_stringset constinArgument8,
                                           class GALGAS_variableMap & ioArgument9,
                                           class GALGAS_uint & ioArgument10,
                                           class GALGAS_semanticInstructionListForGeneration & outArgument11,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@syntaxInstructionAST analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction) (const class cPtr_syntaxInstructionAST * inObject,
                                                                                       const class GALGAS_analysisContext constinArgument0,
                                                                                       const class GALGAS_bool constinArgument1,
                                                                                       const class GALGAS_terminalMap constinArgument2,
                                                                                       const class GALGAS_string constinArgument3,
                                                                                       const class GALGAS_nonterminalMap constinArgument4,
                                                                                       const class GALGAS_string constinArgument5,
                                                                                       const class GALGAS_stringset constinArgument6,
                                                                                       class GALGAS_semanticInstructionListForGeneration & ioArgument7,
                                                                                       class GALGAS_variableMap & ioArgument8,
                                                                                       class GALGAS_uint & ioArgument9,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSyntaxInstruction (const int32_t inClassIndex,
                                                   categoryMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSyntaxInstruction (const class cPtr_syntaxInstructionAST * inObject,
                                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                                  const GALGAS_bool constin_inHasTranslateFeature,
                                                  const GALGAS_terminalMap constin_inTerminalMap,
                                                  const GALGAS_string constin_inLexiqueName,
                                                  const GALGAS_nonterminalMap constin_inNonterminalMap,
                                                  const GALGAS_string constin_inComponentName,
                                                  const GALGAS_stringset constin_inIndexNameSet,
                                                  GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                  GALGAS_variableMap & io_ioVariableMap,
                                                  GALGAS_uint & io_ioSelectMethodCount,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'semanticAnalysisOfRuleLabel'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfRuleLabel (const class GALGAS_formalParameterListAST constinArgument0,
                                          const class GALGAS_syntaxInstructionList constinArgument1,
                                          const class GALGAS_analysisContext constinArgument2,
                                          const class GALGAS_terminalMap constinArgument3,
                                          const class GALGAS_bool constinArgument4,
                                          const class GALGAS_string constinArgument5,
                                          const class GALGAS_nonterminalMap constinArgument6,
                                          const class GALGAS_string constinArgument7,
                                          const class GALGAS_location constinArgument8,
                                          const class GALGAS_stringset constinArgument9,
                                          class GALGAS_uint & ioArgument10,
                                          class GALGAS_formalParameterListForGeneration & outArgument11,
                                          class GALGAS_formalParameterSignature & outArgument12,
                                          class GALGAS_semanticInstructionListForGeneration & outArgument13,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfSyntaxComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfSyntaxComponent (const class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                const class GALGAS_syntaxRuleListAST constinArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_semanticContext constinArgument4,
                                                const class GALGAS_predefinedTypes constinArgument5,
                                                const class GALGAS_terminalMap constinArgument6,
                                                const class GALGAS_stringset constinArgument7,
                                                const class GALGAS_bool constinArgument8,
                                                const class GALGAS_bool constinArgument9,
                                                class GALGAS_syntaxDeclarationForGeneration & outArgument10,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateProcedure'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateProcedure (const class GALGAS_bool constinArgument0,
                                const class GALGAS_string constinArgument1,
                                class GALGAS_stringset & ioArgument2,
                                class GALGAS_formalParameterListForGeneration inArgument3,
                                const class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                const class GALGAS_bool constinArgument5,
                                const class GALGAS_string constinArgument6,
                                const class GALGAS_bool constinArgument7,
                                const class GALGAS_bool constinArgument8,
                                const class GALGAS_bool constinArgument9,
                                class GALGAS_string & outArgument10,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@unifiedTypeMap-proxy addHeaderFileName'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_addHeaderFileName (const class GALGAS_unifiedTypeMap_2D_proxy inObject,
                                       class GALGAS_stringset & io_ioInclusions,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateFunction'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFunction (const class GALGAS_string constinArgument0,
                               class GALGAS_stringset & ioArgument1,
                               const class GALGAS_formalInputParameterListForGeneration constinArgument2,
                               const class GALGAS_semanticInstructionListForGeneration constinArgument3,
                               const class GALGAS_string constinArgument4,
                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                               const class GALGAS_string constinArgument6,
                               const class GALGAS_bool constinArgument7,
                               class GALGAS_string & outArgument8,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateCategoryModifier'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryModifier (const class GALGAS_string constinArgument0,
                                       const class GALGAS_string constinArgument1,
                                       const class GALGAS_string constinArgument2,
                                       class GALGAS_stringset & ioArgument3,
                                       const class GALGAS_formalParameterListForGeneration constinArgument4,
                                       const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                       class GALGAS_string & outArgument6,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryMethod'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryMethod (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class GALGAS_stringset & ioArgument2,
                                     const class GALGAS_string constinArgument3,
                                     const class GALGAS_formalParameterListForGeneration constinArgument4,
                                     const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                     class GALGAS_string & outArgument6,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryReader'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryReader (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class GALGAS_stringset & ioArgument2,
                                     const class GALGAS_string constinArgument3,
                                     const class GALGAS_formalInputParameterListForGeneration constinArgument4,
                                     const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                     const class GALGAS_string constinArgument6,
                                     const class GALGAS_string constinArgument7,
                                     const class GALGAS_string constinArgument8,
                                     class GALGAS_string & outArgument9,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'typeGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                  const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GALGAS_bool & in_IS_5F_CONCRETE,
                                                                                  const class GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const class GALGAS_getterMap & in_READER_5F_MAP,
                                                                                  const class GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const class GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const class GALGAS_uint & in_SUPPORTED_5F_OPERATORS,
                                                                                  const class GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'typeGenerationTemplate genericTypeImplementation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (class C_Compiler * inCompiler,
                                                                                    const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const class GALGAS_uint & in_SUPPORTED_5F_OPERATORS
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate externTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                               const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const class GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const class GALGAS_string & in_CODE
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate graphTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & in_TYPE,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const class GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_uint & in_DIMENSION
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_uint & in_DIMENSION,
                                                                                          const class GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader1'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                            const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader2'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const class GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate classTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                              const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                              const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part1'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part2'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate classTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                          const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                          COMMA_LOCATION_ARGS) ;

#endif
