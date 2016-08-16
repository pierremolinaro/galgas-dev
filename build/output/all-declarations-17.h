#ifndef all_2D_declarations_2D__31__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-16.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateBlockInstructionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateBlockInstructionForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateBlockInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_templateBlockInstructionForGeneration * ptr (void) const { return (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateBlockInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBlockInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @templateBlockInstructionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateBlockInstructionForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;
  public : GALGAS_location mAttribute_mLocation ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mBlockInstructionList ;

//--- Constructor
  public : cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mBlockInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @templateInstructionExpressionForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionExpressionForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_templateInstructionExpressionForGeneration * ptr (void) const { return (const cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionExpressionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @templateInstructionExpressionForGeneration class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionExpressionForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;

//--- Constructor
  public : cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @templateInstructionForeachForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionForeachForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionForeachForGeneration (void) ;

//---
  public : inline const class cPtr_templateInstructionForeachForGeneration * ptr (void) const { return (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionForeachForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionForeachForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand4,
                                                                                        const class GALGAS_string & inOperand5,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand6,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand7
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mAfterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBeforeInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBetweenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratorCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mIndexCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAscending (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @templateInstructionForeachForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsAscending ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;
  public : GALGAS_string mAttribute_mEnumeratorCppName ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mBeforeInstructionList ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mDoInstructionList ;
  public : GALGAS_string mAttribute_mIndexCppName ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mBetweenInstructionList ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mAfterInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                         const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                         const GALGAS_string & in_mEnumeratorCppName,
                                                         const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                         const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                         const GALGAS_string & in_mIndexCppName,
                                                         const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                         const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAscending (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumeratorCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mBeforeInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mIndexCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mBetweenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mAfterInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @templateInstructionGetColumnLocationForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionGetColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionGetColumnLocationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionGetColumnLocationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionGetColumnLocationForGeneration * ptr (void) const { return (const cPtr_templateInstructionGetColumnLocationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionGetColumnLocationForGeneration (const cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionGetColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionGetColumnLocationForGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Pointer class for @templateInstructionGetColumnLocationForGeneration class                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionGetColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @templateInstructionGotoColumnLocationForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionGotoColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionGotoColumnLocationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionGotoColumnLocationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionGotoColumnLocationForGeneration * ptr (void) const { return (const cPtr_templateInstructionGotoColumnLocationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionGotoColumnLocationForGeneration (const cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionGotoColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionGotoColumnLocationForGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Pointer class for @templateInstructionGotoColumnLocationForGeneration class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionGotoColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateInstructionIfForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionIfForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionIfForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionIfForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionIfForGeneration * ptr (void) const { return (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionIfForGeneration (const cPtr_templateInstructionIfForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionIfForGeneration constructor_new (const class GALGAS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                                   const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionIfForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @templateInstructionIfForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionIfForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_templateInstructionIfBranchListForGeneration mAttribute_mTemplateInstructionIfBranchList ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mElseInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                    const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListForGeneration getter_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionStringForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionStringForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionStringForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionStringForGeneration * ptr (void) const { return (const cPtr_templateInstructionStringForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionStringForGeneration (const cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionStringForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionStringForGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @templateInstructionStringForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mTemplateString ;

//--- Constructor
  public : cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionSwitchForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionSwitchForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionSwitchForGeneration (void) ;

//---
  public : inline const class cPtr_templateInstructionSwitchForGeneration * ptr (void) const { return (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionSwitchForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionSwitchForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                       const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mSwitchExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @templateInstructionSwitchForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionSwitchForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mSwitchExpression ;
  public : GALGAS_templateInstructionSwitchBranchListForGeneration mAttribute_mTemplateInstructionSwitchBranchList ;

//--- Constructor
  public : cPtr_templateInstructionSwitchForGeneration (const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                        const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListForGeneration getter_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract extension method '@templateExpressionAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis) (const class cPtr_templateExpressionAST * inObject,
                                                                                           const class GALGAS_lstring constinArgument0,
                                                                                           class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                           const class GALGAS_templateAnalysisContext constinArgument2,
                                                                                           class GALGAS_semanticExpressionForGeneration & outArgument3,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_templateExpressionAnalysis (const int32_t inClassIndex,
                                                      extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_templateExpressionAnalysis (const class cPtr_templateExpressionAST * inObject,
                                                     const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                     GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension getter '@lexicalExpressionAST generateConditionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalExpressionAST_generateConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                class GALGAS_lexiqueAnalysisContext inArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateConditionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_lexicalExpressionAST_generateConditionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                               GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                      class C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                             enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                     class C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateRoutineArgument (const int32_t inClassIndex,
                                                   enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                         class GALGAS_string inArgument0,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateDefaultSendCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                 GALGAS_string in_inScannerClassName,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension getter '@lexicalInstructionAST generateInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_lexicalInstructionAST_generateInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                   class GALGAS_string inArgument0,
                                                                                                   class GALGAS_lexiqueAnalysisContext inArgument1,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_generateInstructionCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalInstructionAST_generateInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_generateInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                 GALGAS_string in_inScannerClassName,
                                                                 GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

#endif
