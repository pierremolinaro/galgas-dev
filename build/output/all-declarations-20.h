#ifndef all_2D_declarations_2D__32__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-19.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @expressionCollectionValueForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionCollectionValueForGeneration : public GALGAS_abstractCollectionValueElementForGeneration {
//--- Constructor
  public : GALGAS_expressionCollectionValueForGeneration (void) ;

//---
  public : inline const class cPtr_expressionCollectionValueForGeneration * ptr (void) const { return (const cPtr_expressionCollectionValueForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionCollectionValueForGeneration (const cPtr_expressionCollectionValueForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionCollectionValueForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_expressionCollectionValueForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionCollectionValueForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValueForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @expressionCollectionValueForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionCollectionValueForGeneration : public cPtr_abstractCollectionValueElementForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;

//--- Constructor
  public : cPtr_expressionCollectionValueForGeneration (const GALGAS_location & in_mExpressionLocation,
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
//                                    @expressionListCollectionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionListCollectionForGeneration : public GALGAS_abstractCollectionValueElementForGeneration {
//--- Constructor
  public : GALGAS_expressionListCollectionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_expressionListCollectionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_expressionListCollectionForGeneration * ptr (void) const { return (const cPtr_expressionListCollectionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionListCollectionForGeneration (const cPtr_expressionListCollectionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionListCollectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_expressionListCollectionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionListForGeneration & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration reader_mExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @expressionListCollectionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionListCollectionForGeneration : public cPtr_abstractCollectionValueElementForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                       const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @nonTerminalInstructionForGrammarAnalysis class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--- Constructor
  public : GALGAS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_nonTerminalInstructionForGrammarAnalysis * ptr (void) const { return (const cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_nonTerminalInstructionForGrammarAnalysis (const cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mNonterminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNonterminalSymbolName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalInstructionForGrammarAnalysis class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @repeatInstructionForGrammarAnalysis class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_repeatInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--- Constructor
  public : GALGAS_repeatInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_repeatInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_repeatInstructionForGrammarAnalysis * ptr (void) const { return (const cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_repeatInstructionForGrammarAnalysis (const cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_repeatInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_repeatInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_branchListForGrammarAnalysis & inOperand1,
                                                                              const class GALGAS_uint & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mAddedNonTerminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis reader_mRepeatBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstructionForGrammarAnalysis class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;

#include "separateHeaderFor_repeatInstructionForGrammarAnalysis.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @selectInstructionForGrammarAnalysis class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selectInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--- Constructor
  public : GALGAS_selectInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectInstructionForGrammarAnalysis * ptr (void) const { return (const cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectInstructionForGrammarAnalysis (const cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selectInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_branchListForGrammarAnalysis & inOperand1,
                                                                              const class GALGAS_uint & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mAddedNonTerminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis reader_mSelectBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGrammarAnalysis class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;

#include "separateHeaderFor_selectInstructionForGrammarAnalysis.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @terminalInstructionForGrammarAnalysis class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--- Constructor
  public : GALGAS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_terminalInstructionForGrammarAnalysis * ptr (void) const { return (const cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_terminalInstructionForGrammarAnalysis (const cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_uint & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mTerminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalSymbolName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualParameterForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_inputActualParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualParameterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualParameterForGeneration * ptr (void) const { return (const cPtr_inputActualParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_string & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mInputActualCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualParameterForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @inputActualParameterForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mInputActualCppName ;

//--- Constructor
  public : cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                   const GALGAS_string & in_mInputActualCppName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mInputActualCppName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputJokerParameterForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputJokerParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_inputJokerParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputJokerParameterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputJokerParameterForGeneration * ptr (void) const { return (const cPtr_inputJokerParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputJokerParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputJokerParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                           const class GALGAS_string & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mInputActualCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputJokerParameterForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @inputJokerParameterForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputJokerParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mInputActualCppName ;

//--- Constructor
  public : cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const GALGAS_string & in_mInputActualCppName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mInputActualCppName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outputActualParameterForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_outputActualParameterForGeneration (void) ;

//---
  public : inline const class cPtr_outputActualParameterForGeneration * ptr (void) const { return (const cPtr_outputActualParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mOutputActualParameterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputActualParameterForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @outputActualParameterForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mOutputActualParameterExpression ;

//--- Constructor
  public : cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                    const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mOutputActualParameterExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @outputInputActualParameterForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outputInputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_outputInputActualParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputActualParameterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputActualParameterForGeneration * ptr (void) const { return (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outputInputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2,
                                                                                  const class GALGAS_unifiedTypeMapProxyList & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOutputInputVariableCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_mTypeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputActualParameterForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @outputInputActualParameterForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputInputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mOutputInputVariableCppName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mTypeList ;

//--- Constructor
  public : cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                         const GALGAS_string & in_mOutputInputVariableCppName,
                                                         const GALGAS_lstringlist & in_mStructAttributeList,
                                                         const GALGAS_unifiedTypeMapProxyList & in_mTypeList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOutputInputVariableCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyList reader_mTypeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
