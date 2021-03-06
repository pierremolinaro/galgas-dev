#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_selfSetterCallInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_selfSetterCallInstructionForGeneration * ptr (void) const { return (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfSetterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selfSetterCallInstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_methodKind & inOperand3,
                                                                                       const class GALGAS_actualParameterListForGeneration & inOperand4,
                                                                                       const class GALGAS_bool & inOperand5
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (class GALGAS_actualParameterListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_methodKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelfCppName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSetterName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfSetterCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfSetterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mSelfCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_lstring mProperty_mSetterName ;
  public : GALGAS_methodKind mProperty_mKind ;
  public : GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public : GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                        const GALGAS_lstring & in_mSetterName,
                                                        const GALGAS_methodKind & in_mKind,
                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelfCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSetterName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_methodKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_typeMethodCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeMethodCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeMethodCallInstructionForGeneration * ptr (void) const { return (const cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeMethodCallInstructionForGeneration (const cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeMethodCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeMethodCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_actualParameterListForGeneration & inOperand2,
                                                                                       const class GALGAS_bool & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (class GALGAS_actualParameterListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMethodName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @typeMethodCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mMethodName ;
  public : GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public : GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_lstring & in_mMethodName,
                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMethodName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_localVariableDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableDeclarationForGeneration * ptr (void) const { return (const cPtr_localVariableDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_localVariableDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                      const class GALGAS_string & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCppVariableName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMVariableType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mVariableType ;
  public : GALGAS_string mProperty_mCppVariableName ;

//--- Constructor
  public : cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mVariableType,
                                                       const GALGAS_string & in_mCppVariableName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMVariableType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCppVariableName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : static class GALGAS_terminalCheckInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_string & inOperand2,
                                                                                      const class GALGAS_terminalCheckAssignementList & inOperand3,
                                                                                      const class GALGAS__32_lstringlist & inOperand4,
                                                                                      const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                      const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalCheckInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inArgument0
                                                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGrammarInstructionSyntaxDirectedTranslationToken (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inArgument0
                                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexingKeyList (class GALGAS__32_lstringlist inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueIdentifier (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTerminalCheckAssignementList (class GALGAS_terminalCheckAssignementList inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTerminalName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mIndexingKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueIdentifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_mTerminalCheckAssignementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @terminalCheckInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mProperty_mTerminalName ;
  public : GALGAS_string mProperty_mLexiqueIdentifier ;
  public : GALGAS_terminalCheckAssignementList mProperty_mTerminalCheckAssignementList ;
  public : GALGAS__32_lstringlist mProperty_mIndexingKeyList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public : cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mTerminalName,
                                                       const GALGAS_string & in_mLexiqueIdentifier,
                                                       const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                       const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTerminalName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLexiqueIdentifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueIdentifier (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_terminalCheckAssignementList getter_mTerminalCheckAssignementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTerminalCheckAssignementList (GALGAS_terminalCheckAssignementList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS__32_lstringlist getter_mIndexingKeyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIndexingKeyList (GALGAS__32_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGrammarInstructionSyntaxDirectedTranslationToken (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : static class GALGAS_terminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_uint & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMTerminalSymbolIndex (class GALGAS_uint inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTerminalSymbolName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalSymbolName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalInstructionForGrammarAnalysis class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : static class GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_uint & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolIndex (class GALGAS_uint inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonterminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalSymbolName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRuleVertically'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const class GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                            const class GALGAS_string constin_inSyntaxCompnentName,
                                            class GALGAS_string & io_ioGeneratedCode,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_escapeForTex (const class GALGAS_string & constinArgument0,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR galgas3ProjectGrammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'project_header' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_header_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_header_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_header_ (GALGAS_luint & outArgument0,
                                               GALGAS_luint & outArgument1,
                                               GALGAS_luint & outArgument2,
                                               GALGAS_lstring & outArgument3,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgas_33_Scanner *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR galgas3Grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_galgas_33_Grammar : public cParser_galgas_33_ExpressionSyntax,
                                   public cParser_galgas_33_ParameterArgumentSyntax,
                                   public cParser_galgas_33_InstructionsSyntax,
                                   public cParser_galgas_33_DeclarationsSyntax,
                                   public cParser_galgas_33_LexiqueComponentSyntax,
                                   public cParser_galgas_33_OptionComponentSyntax,
                                   public cParser_galgas_33_GuiComponentSyntax,
                                   public cParser_galgas_33_SyntaxComponentSyntax,
                                   public cParser_galgas_33_GrammarComponentSyntax,
                                   public cParser_galgas_33_ProgramDeclarations {
//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_parameter_5F_list_ (GALGAS_actualParameterListAST & outArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'branchOfParseWhithInstruction' non terminal
//--- 'parse' label
  public : virtual void nt_branchOfParseWhithInstruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_branchOfParseWhithInstruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_branchOfParseWhithInstruction_ (GALGAS_syntaxInstructionList & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_instruction_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_instruction_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_instruction_5F_branch_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'collection_value_element' non terminal
//--- 'parse' label
  public : virtual void nt_collection_5F_value_5F_element_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_collection_5F_value_5F_element_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_collection_5F_value_5F_element_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'declaration_with_private' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_with_5F_private_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_5F_with_5F_private_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_with_5F_private_ (const GALGAS_bool inArgument0,
                                                            GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'expression_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_and_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_5F_and_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_and_ (GALGAS_semanticExpressionAST & outArgument0,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'expression_or' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_or_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_5F_or_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_or_ (GALGAS_semanticExpressionAST & outArgument0,
                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'extern_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_function_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_function_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_function_5F_declaration_ (GALGAS_externFunctionListAST & ioArgument0,
                                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'extern_routine_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_routine_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_routine_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_routine_5F_declaration_ (GALGAS_externRoutineListAST & ioArgument0,
                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_constructor' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_constructor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_constructor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_constructor_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_cpp_classdeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (GALGAS_string & outArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_cpp_predeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_cpp_5F_predeclaration_ (GALGAS_string & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_getter' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_getter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_getter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_getter_ (GALGAS_externTypeGetterList & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_method' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_method_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_method_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_method_ (GALGAS_externTypeMethodList & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_setter' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_setter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_setter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_setter_ (GALGAS_externTypeSetterList & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'filewrapper_binary_files' non terminal
//--- 'parse' label
  public : virtual void nt_filewrapper_5F_binary_5F_files_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_filewrapper_5F_binary_5F_files_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_filewrapper_5F_binary_5F_files_ (GALGAS_lstringlist & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'filewrapper_templates' non terminal
//--- 'parse' label
  public : virtual void nt_filewrapper_5F_templates_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_filewrapper_5F_templates_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_filewrapper_5F_templates_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                      C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'filewrapper_text_files' non terminal
//--- 'parse' label
  public : virtual void nt_filewrapper_5F_text_5F_files_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_filewrapper_5F_text_5F_files_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_filewrapper_5F_text_5F_files_ (GALGAS_lstringlist & outArgument0,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_element_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_element_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_parameter_5F_list_ (GALGAS_formalParameterListAST & outArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'grammar_instruction_core' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_instruction_5F_core_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_instruction_5F_core_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_instruction_5F_core_ (const GALGAS_location inArgument0,
                                                            const GALGAS_lstring inArgument1,
                                                            const GALGAS_lstring inArgument2,
                                                            GALGAS_semanticInstructionAST & outArgument3,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'grammar_start_symbol_label' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'gui_attributes' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_attributes_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_attributes_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_attributes_ (GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'gui_with_lexique_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (GALGAS_withLexiqueListAST & ioArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'gui_with_option_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_with_5F_option_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'if_expression' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_if_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_expression_ (GALGAS_ifExpressionList & outArgument0,
                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'if_instruction_core' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_5F_core_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_if_5F_instruction_5F_core_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_5F_core_ (GALGAS_semanticInstructionAST & outArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'insert_or_replace_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'issue_fixit' non terminal
//--- 'parse' label
  public : virtual void nt_issue_5F_fixit_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_issue_5F_fixit_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_issue_5F_fixit_ (GALGAS_fixitListAST & outArgument0,
                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'label_formal_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_label_5F_formal_5F_parameter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_label_5F_formal_5F_parameter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_label_5F_formal_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_explicit_5F_rule_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_expression_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_factor_ (GALGAS_lexicalExpressionAST & outArgument0,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_function_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_function_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_function_5F_declaration_ (GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_function_expression' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_function_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_function_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_function_5F_expression_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_function_factor' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_function_5F_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_function_5F_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_function_5F_factor_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_function_term' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_function_5F_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_function_5F_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_function_5F_term_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_implicit_5F_rule_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_indexing_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_indexing_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_indexing_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_indexing_5F_declaration_ (GALGAS_indexingListAST & ioArgument0,
                                                                C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_instruction_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_declaration_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_entry_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_entry_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_entry_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                      C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_message_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_message_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_message_5F_declaration_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_send_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_send_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_send_5F_instruction_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_term_ (GALGAS_lexicalExpressionAST & outArgument0,
                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'map_insert_setter_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'match_entry' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_entry_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_entry_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_entry_ (GALGAS_matchEntryListAST & ioArgument0,
                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'match_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_instruction_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_instruction_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_instruction_5F_branch_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'nonterminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_nonterminal_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_nonterminal_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_nonterminal_5F_declaration_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'option_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_option_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_option_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_option_5F_declaration_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'optional_type' non terminal
//--- 'parse' label
  public : virtual void nt_optional_5F_type_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_optional_5F_type_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_optional_5F_type_ (GALGAS_lstring & outArgument0,
                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_output_5F_expression_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_output_5F_expression_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_primary_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_semanticExpressionAST & outArgument0,
                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_property_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_property_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_property_5F_declaration_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                                C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'remove_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_remove_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_remove_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_remove_5F_declaration_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public : virtual void nt_repeat_5F_while_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_repeat_5F_while_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_repeat_5F_while_5F_branch_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'search_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_search_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_search_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_search_5F_declaration_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_ (GALGAS_semanticInstructionAST & outArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_beginning_with_identifier' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (const GALGAS_bool inArgument0,
                                                                                        GALGAS_semanticInstructionAST & outArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_inc_dec' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (const GALGAS_bool inArgument0,
                                                                   GALGAS_semanticInstructionAST & outArgument1,
                                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_list_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'shared_map_attribute' non terminal
//--- 'parse' label
  public : virtual void nt_shared_5F_map_5F_attribute_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_shared_5F_map_5F_attribute_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_shared_5F_map_5F_attribute_ (GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'shared_map_override' non terminal
//--- 'parse' label
  public : virtual void nt_shared_5F_map_5F_override_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_shared_5F_map_5F_override_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_shared_5F_map_5F_override_ (GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'shared_map_search_method_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'shared_map_state_list' non terminal
//--- 'parse' label
  public : virtual void nt_shared_5F_map_5F_state_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_shared_5F_map_5F_state_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_shared_5F_map_5F_state_5F_list_ (GALGAS_mapStateList & ioArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'shared_map_state_transition' non terminal
//--- 'parse' label
  public : virtual void nt_shared_5F_map_5F_state_5F_transition_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_shared_5F_map_5F_state_5F_transition_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_shared_5F_map_5F_state_5F_transition_ (GALGAS_mapStateTransitionList & ioArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_start_5F_symbol_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_DeclarationAST & ioArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_galgas_33_DeclarationAST & ioArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'style_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_style_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_style_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_style_5F_declaration_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public : virtual void nt_switch_5F_case_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_switch_5F_case_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_switch_5F_case_ (GALGAS_lstringlist & outArgument0,
                                            GALGAS_switchExtractedValuesListAST & outArgument1,
                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_instruction_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_instruction_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_instruction_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_instruction_5F_list_ (GALGAS_syntaxInstructionList & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_rule_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_rule_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_rule_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_rule_5F_declaration_ (GALGAS_syntaxRuleListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_rule_label' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_rule_5F_label_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_rule_5F_label_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_rule_5F_label_ (const GALGAS_lstring inArgument0,
                                                     GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_delimitor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_delimitor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_delimitor_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_replacement_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_replacement_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_replacement_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_declaration_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'terminal_instruction_indexing' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_instruction_5F_indexing_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_instruction_5F_indexing_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_instruction_5F_indexing_ (GALGAS__32_lstringlist & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'with_instruction_core' non terminal
//--- 'parse' label
  public : virtual void nt_with_5F_instruction_5F_core_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_with_5F_instruction_5F_core_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_with_5F_instruction_5F_core_ (const GALGAS_location inArgument0,
                                                         const GALGAS_semanticExpressionAST inArgument1,
                                                         const GALGAS_location inArgument2,
                                                         const GALGAS_lstring inArgument3,
                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_68 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_69 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_70 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_71 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_72 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_73 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_74 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_75 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_76 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_77 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_78 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_79 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_80 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_43 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_44 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_45 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_46 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_47 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_48 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_49 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_50 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_51 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_52 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_53 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_54 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_2 (C_Lexique_galgas_33_Scanner *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
