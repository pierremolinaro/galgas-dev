#ifndef all_2D_declarations_2D__31__38__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__38__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-17.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @selectInstructionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selectInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--- Constructor
  public : GALGAS_selectInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectInstructionForGeneration * ptr (void) const { return (const cPtr_selectInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selectInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_uint & inOperand2,
                                                                         const class GALGAS_listOfSemanticInstructionListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mChoiceIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSemanticInstructionListForGeneration reader_mListOfSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @selectInstructionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selectInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mSyntaxComponentName ;
  public : GALGAS_uint mAttribute_mChoiceIndex ;
  public : GALGAS_listOfSemanticInstructionListForGeneration mAttribute_mListOfSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_selectInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_string & in_mSyntaxComponentName,
                                                const GALGAS_uint & in_mChoiceIndex,
                                                const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mChoiceIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSemanticInstructionListForGeneration reader_mListOfSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syntaxSendInstructionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxSendInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--- Constructor
  public : GALGAS_syntaxSendInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_syntaxSendInstructionForGeneration * ptr (void) const { return (const cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syntaxSendInstructionForGeneration (const cPtr_syntaxSendInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxSendInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxSendInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxSendInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @syntaxSendInstructionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_syntaxSendInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;

//--- Constructor
  public : cPtr_syntaxSendInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @terminalCheckInstructionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalCheckInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--- Constructor
  public : GALGAS_terminalCheckInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_terminalCheckInstructionForGeneration * ptr (void) const { return (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_terminalCheckInstructionForGeneration (const cPtr_terminalCheckInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalCheckInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalCheckInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_terminalCheckAssignementList & inOperand3,
                                                                                const class GALGAS_lstringlist & inOperand4,
                                                                                const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalCheckInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mIndexingKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueIdentifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList reader_mTerminalCheckAssignementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @terminalCheckInstructionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_string mAttribute_mLexiqueIdentifier ;
  public : GALGAS_terminalCheckAssignementList mAttribute_mTerminalCheckAssignementList ;
  public : GALGAS_lstringlist mAttribute_mIndexingKeyList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public : cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mTerminalName,
                                                       const GALGAS_string & in_mLexiqueIdentifier,
                                                       const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                       const GALGAS_lstringlist & in_mIndexingKeyList,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueIdentifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_terminalCheckAssignementList reader_mTerminalCheckAssignementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mIndexingKeyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @typeMethodInstructionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeMethodInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_typeMethodInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeMethodInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeMethodInstructionForGeneration * ptr (void) const { return (const cPtr_typeMethodInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeMethodInstructionForGeneration (const cPtr_typeMethodInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeMethodInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeMethodInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_actualParameterListForGeneration & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeMethodInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @typeMethodInstructionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typeMethodInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_typeMethodInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_lstring & in_mMethodName,
                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                    const GALGAS_bool & in_mHasCompilerArgument
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration reader_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @warningInstructionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_warningInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_warningInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_warningInstructionForGeneration * ptr (void) const { return (const cPtr_warningInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_warningInstructionForGeneration (const cPtr_warningInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_warningInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_warningInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_warningInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUseLocationReader (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mWarningExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @warningInstructionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_warningInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mReceiverExpression ;
  public : GALGAS_bool mAttribute_mUseLocationReader ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mWarningExpression ;

//--- Constructor
  public : cPtr_warningInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                 const GALGAS_bool & in_mUseLocationReader,
                                                 const GALGAS_semanticExpressionForGeneration & in_mWarningExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUseLocationReader (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mWarningExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @templateClassToTypeOperandAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateClassToTypeOperandAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateClassToTypeOperandAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateClassToTypeOperandAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateClassToTypeOperandAST * ptr (void) const { return (const cPtr_templateClassToTypeOperandAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateClassToTypeOperandAST (const cPtr_templateClassToTypeOperandAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateClassToTypeOperandAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateClassToTypeOperandAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateClassToTypeOperandAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateClassToTypeOperandAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateClassToTypeOperandAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @templateClassToTypeOperandAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateClassToTypeOperandAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_templateClassToTypeOperandAST (const GALGAS_lstring & in_mTypeName
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @templateFileWrapperWithStaticPathAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateFileWrapperWithStaticPathAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateFileWrapperWithStaticPathAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateFileWrapperWithStaticPathAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateFileWrapperWithStaticPathAST * ptr (void) const { return (const cPtr_templateFileWrapperWithStaticPathAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateFileWrapperWithStaticPathAST (const cPtr_templateFileWrapperWithStaticPathAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateFileWrapperWithStaticPathAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateFileWrapperWithStaticPathAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_uint & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateFileWrapperWithStaticPathAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mFileIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFileWrapperName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFileWrapperWithStaticPathAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperWithStaticPathAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @templateFileWrapperWithStaticPathAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateFileWrapperWithStaticPathAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFileWrapperName ;
  public : GALGAS_uint mAttribute_mFileIndex ;

//--- Constructor
  public : cPtr_templateFileWrapperWithStaticPathAST (const GALGAS_lstring & in_mFileWrapperName,
                                                      const GALGAS_uint & in_mFileIndex
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFileWrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mFileIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateIfThenElseExpressionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateIfThenElseExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateIfThenElseExpressionAST (void) ;

//---
  public : inline const class cPtr_templateIfThenElseExpressionAST * ptr (void) const { return (const cPtr_templateIfThenElseExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateIfThenElseExpressionAST (const cPtr_templateIfThenElseExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateIfThenElseExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateIfThenElseExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_templateExpressionAST & inOperand1,
                                                                          const class GALGAS_templateExpressionAST & inOperand2,
                                                                          const class GALGAS_templateExpressionAST & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateIfThenElseExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST reader_mElseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST reader_mIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST reader_mThenExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateIfThenElseExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateIfThenElseExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @templateIfThenElseExpressionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateIfThenElseExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mAttribute_mIfExpression ;
  public : GALGAS_templateExpressionAST mAttribute_mThenExpression ;
  public : GALGAS_templateExpressionAST mAttribute_mElseExpression ;

//--- Constructor
  public : cPtr_templateIfThenElseExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                 const GALGAS_templateExpressionAST & in_mIfExpression,
                                                 const GALGAS_templateExpressionAST & in_mThenExpression,
                                                 const GALGAS_templateExpressionAST & in_mElseExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mElseExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
