#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @strictGreaterExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_strictGreaterExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_strictGreaterExpressionAST (void) ;

//---
  public : inline const class cPtr_strictGreaterExpressionAST * ptr (void) const { return (const cPtr_strictGreaterExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_strictGreaterExpressionAST (const cPtr_strictGreaterExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_strictGreaterExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_strictGreaterExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_strictGreaterExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_strictGreaterExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_strictGreaterExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @strictGreaterExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_strictGreaterExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_strictGreaterExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @strictLowerExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_strictLowerExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_strictLowerExpressionAST (void) ;

//---
  public : inline const class cPtr_strictLowerExpressionAST * ptr (void) const { return (const cPtr_strictLowerExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_strictLowerExpressionAST (const cPtr_strictLowerExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_strictLowerExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_strictLowerExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_strictLowerExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_strictLowerExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_strictLowerExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @strictLowerExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_strictLowerExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_strictLowerExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @rightShiftExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_rightShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_rightShiftExpressionAST (void) ;

//---
  public : inline const class cPtr_rightShiftExpressionAST * ptr (void) const { return (const cPtr_rightShiftExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_rightShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_rightShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1,
                                                                        const class GALGAS_semanticExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rightShiftExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @rightShiftExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_rightShiftExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                         const GALGAS_semanticExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @leftShiftExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_leftShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_leftShiftExpressionAST (void) ;

//---
  public : inline const class cPtr_leftShiftExpressionAST * ptr (void) const { return (const cPtr_leftShiftExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_leftShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_leftShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_semanticExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_leftShiftExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @leftShiftExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_leftShiftExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @addExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_addExpressionAST (void) ;

//---
  public : inline const class cPtr_addExpressionAST * ptr (void) const { return (const cPtr_addExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_addExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @addExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @addExpressionNoOverflowAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_addExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_addExpressionNoOverflowAST * ptr (void) const { return (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_addExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @addExpressionNoOverflowAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @subExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_subExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_subExpressionAST (void) ;

//---
  public : inline const class cPtr_subExpressionAST * ptr (void) const { return (const cPtr_subExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_subExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_subExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @subExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_subExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @subExpressionNoOverflowAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_subExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_subExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_subExpressionNoOverflowAST * ptr (void) const { return (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_subExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @subExpressionNoOverflowAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_subExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @multiplicationExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_multiplicationExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_multiplicationExpressionAST (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionAST * ptr (void) const { return (const cPtr_multiplicationExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionAST (const cPtr_multiplicationExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multiplicationExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_semanticExpressionAST & inOperand1,
                                                                            const class GALGAS_semanticExpressionAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @multiplicationExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_multiplicationExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                             const GALGAS_semanticExpressionAST & in_mRightExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @multiplicationExpressionNoOverflowAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_multiplicationExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_multiplicationExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionNoOverflowAST * ptr (void) const { return (const cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionNoOverflowAST (const cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multiplicationExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @multiplicationExpressionNoOverflowAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_multiplicationExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @divisionExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_divisionExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_divisionExpressionAST (void) ;

//---
  public : inline const class cPtr_divisionExpressionAST * ptr (void) const { return (const cPtr_divisionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionAST (const cPtr_divisionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_divisionExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @divisionExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_divisionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @divisionExpressionNoOverflowAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_divisionExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_divisionExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_divisionExpressionNoOverflowAST * ptr (void) const { return (const cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionNoOverflowAST (const cPtr_divisionExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_divisionExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @divisionExpressionNoOverflowAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_divisionExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionAST & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @moduloExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_moduloExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_moduloExpressionAST (void) ;

//---
  public : inline const class cPtr_moduloExpressionAST * ptr (void) const { return (const cPtr_moduloExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_moduloExpressionAST (const cPtr_moduloExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduloExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_moduloExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_moduloExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduloExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @moduloExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_moduloExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_moduloExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                     const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                     const GALGAS_semanticExpressionAST & in_mRightExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @unaryMinusExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unaryMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryMinusExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryMinusExpressionAST * ptr (void) const { return (const cPtr_unaryMinusExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unaryMinusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @unaryMinusExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @unaryMinusNoOverflowExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unaryMinusNoOverflowExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryMinusNoOverflowExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryMinusNoOverflowExpressionAST * ptr (void) const { return (const cPtr_unaryMinusNoOverflowExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryMinusNoOverflowExpressionAST (const cPtr_unaryMinusNoOverflowExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryMinusNoOverflowExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unaryMinusNoOverflowExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryMinusNoOverflowExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusNoOverflowExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @unaryMinusNoOverflowExpressionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_unaryMinusNoOverflowExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_unaryMinusNoOverflowExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                   const GALGAS_semanticExpressionAST & in_mExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @unaryPlusExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unaryPlusExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryPlusExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryPlusExpressionAST * ptr (void) const { return (const cPtr_unaryPlusExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryPlusExpressionAST (const cPtr_unaryPlusExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryPlusExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unaryPlusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryPlusExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @unaryPlusExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_unaryPlusExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_unaryPlusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @notExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_notExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_notExpressionAST (void) ;

//---
  public : inline const class cPtr_notExpressionAST * ptr (void) const { return (const cPtr_notExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notExpressionAST (const cPtr_notExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_notExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @notExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_notExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_notExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @complementExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_complementExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_complementExpressionAST (void) ;

//---
  public : inline const class cPtr_complementExpressionAST * ptr (void) const { return (const cPtr_complementExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_complementExpressionAST (const cPtr_complementExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_complementExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_complementExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_complementExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_complementExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @complementExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_complementExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_complementExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifExpressionAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_ifExpressionAST (void) ;

//---
  public : inline const class cPtr_ifExpressionAST * ptr (void) const { return (const cPtr_ifExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2,
                                                                const class GALGAS_semanticExpressionAST & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mElseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mThenExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mIfExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mThenExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mElseExpression ;

//--- Constructor
  public : cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mIfExpression,
                                 const GALGAS_semanticExpressionAST & in_mThenExpression,
                                 const GALGAS_semanticExpressionAST & in_mElseExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mElseExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @dynamicTypeComparisonKind enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dynamicTypeComparisonKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_dynamicTypeComparisonKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_inherited,
    kEnum_strictlyInherited
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dynamicTypeComparisonKind extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_dynamicTypeComparisonKind constructor_equal (LOCATION_ARGS) ;

  public : static class GALGAS_dynamicTypeComparisonKind constructor_inherited (LOCATION_ARGS) ;

  public : static class GALGAS_dynamicTypeComparisonKind constructor_strictlyInherited (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dynamicTypeComparisonKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInherited (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictlyInherited (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynamicTypeComparisonKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@formalArgumentPassingModeAST string' (as function)                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_string (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension getter '@formalArgumentPassingModeAST formalArgumentMessage' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_formalArgumentMessage (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension getter '@formalArgumentPassingModeAST formalArgumentString' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_formalArgumentString (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @actualParameterAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualParameterAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_actualParameterAST (void) ;

//---
  public : inline const class cPtr_actualParameterAST * ptr (void) const { return (const cPtr_actualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_actualParameterAST (const cPtr_actualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualParameterAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @actualParameterAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_actualParameterAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_actualParameterAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outputInputJokerParameterAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outputInputJokerParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputInputJokerParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputJokerParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputJokerParameterAST * ptr (void) const { return (const cPtr_outputInputJokerParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputJokerParameterAST (const cPtr_outputInputJokerParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputJokerParameterAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outputInputJokerParameterAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputJokerParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mJokerIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mQualifierLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputJokerParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @outputInputJokerParameterAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputInputJokerParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_location mAttribute_mQualifierLocation ;
  public : GALGAS_uint mAttribute_mJokerIndex ;

//--- Constructor
  public : cPtr_outputInputJokerParameterAST (const GALGAS_location & in_mQualifierLocation,
                                              const GALGAS_uint & in_mJokerIndex
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mQualifierLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mJokerIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @inputJokerActualParameterAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputJokerActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputJokerActualParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputJokerActualParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputJokerActualParameterAST * ptr (void) const { return (const cPtr_inputJokerActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputJokerActualParameterAST (const cPtr_inputJokerActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputJokerActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputJokerActualParameterAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mJokerIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mQualifierLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputJokerActualParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @inputJokerActualParameterAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputJokerActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_location mAttribute_mQualifierLocation ;
  public : GALGAS_uint mAttribute_mJokerIndex ;

//--- Constructor
  public : cPtr_inputJokerActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                              const GALGAS_uint & in_mJokerIndex
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mQualifierLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mJokerIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @actualParameterListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_actualParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_actualParameterListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_actualParameterAST & in_mActualParameter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualParameterListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actualParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_actualParameterListAST constructor_listWithValue (const class GALGAS_actualParameterAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_actualParameterAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST add_operation (const GALGAS_actualParameterListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_actualParameterAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_actualParameterAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_actualParameterAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_actualParameterAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_actualParameterAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_actualParameterAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterAST getter_mActualParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_actualParameterListAST ;
  friend class cEnumerator_new_actualParameterListAST ;
 
} ; // End of GALGAS_actualParameterListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_actualParameterListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_actualParameterListAST (const GALGAS_actualParameterListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_actualParameterAST current_mActualParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actualParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_actualParameterListAST {
//--- Constructor
  public : cEnumerator_new_actualParameterListAST (const GALGAS_actualParameterListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_actualParameterListAST (void) ;

//--- No copy
  private : cEnumerator_new_actualParameterListAST (const cEnumerator_new_actualParameterListAST &) ;
  private : cEnumerator_new_actualParameterListAST & operator = (const cEnumerator_new_actualParameterListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_actualParameterAST current_mActualParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actualParameterListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_actualParameterListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @actualParameterListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_actualParameterAST mAttribute_mActualParameter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_actualParameterListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_actualParameterListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_actualParameterListAST_2D_element (const GALGAS_actualParameterAST & in_mActualParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actualParameterListAST_2D_element constructor_new (const class GALGAS_actualParameterAST & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actualParameterListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterAST getter_mActualParameter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualParameterListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractInputParameter class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractInputParameter : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractInputParameter (void) ;

//---
  public : inline const class cPtr_abstractInputParameter * ptr (void) const { return (const cPtr_abstractInputParameter *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractInputParameter (const cPtr_abstractInputParameter * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractInputParameter extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractInputParameter & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractInputParameter class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInputParameter ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @abstractInputParameter class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractInputParameter : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractInputParameter (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputParameterAnonymousVariable class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputParameterAnonymousVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterAnonymousVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterAnonymousVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterAnonymousVariable * ptr (void) const { return (const cPtr_inputParameterAnonymousVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterAnonymousVariable extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputParameterAnonymousVariable constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterAnonymousVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterAnonymousVariable class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @inputParameterAnonymousVariable class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputParameterAnonymousVariable : public cPtr_abstractInputParameter {
//--- Attributes

//--- Constructor
  public : cPtr_inputParameterAnonymousVariable (LOCATION_ARGS) ;

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
//                                          @actualInputParameterListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualInputParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_actualInputParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_actualInputParameterListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mActualSelector,
                                                  const class GALGAS_abstractInputParameter & in_mInputParameter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualInputParameterListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actualInputParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_actualInputParameterListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_abstractInputParameter & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualInputParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractInputParameter & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_actualInputParameterListAST add_operation (const GALGAS_actualInputParameterListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_abstractInputParameter constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_abstractInputParameter & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_abstractInputParameter & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_abstractInputParameter & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_abstractInputParameter & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_abstractInputParameter & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractInputParameter getter_mInputParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualInputParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualInputParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualInputParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_actualInputParameterListAST ;
  friend class cEnumerator_new_actualInputParameterListAST ;
 
} ; // End of GALGAS_actualInputParameterListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_actualInputParameterListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_actualInputParameterListAST (const GALGAS_actualInputParameterListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public : class GALGAS_abstractInputParameter current_mInputParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actualInputParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_actualInputParameterListAST {
//--- Constructor
  public : cEnumerator_new_actualInputParameterListAST (const GALGAS_actualInputParameterListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_actualInputParameterListAST (void) ;

//--- No copy
  private : cEnumerator_new_actualInputParameterListAST (const cEnumerator_new_actualInputParameterListAST &) ;
  private : cEnumerator_new_actualInputParameterListAST & operator = (const cEnumerator_new_actualInputParameterListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public : class GALGAS_abstractInputParameter current_mInputParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actualInputParameterListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_actualInputParameterListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualInputParameterListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @actualInputParameterListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualInputParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_abstractInputParameter mAttribute_mInputParameter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_actualInputParameterListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_actualInputParameterListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_actualInputParameterListAST_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                          const GALGAS_abstractInputParameter & in_mInputParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualInputParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actualInputParameterListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_abstractInputParameter & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actualInputParameterListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractInputParameter getter_mInputParameter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualInputParameterListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualInputParameterListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticDeclarationListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_semanticDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_semanticDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_semanticDeclarationListAST constructor_listWithValue (const class GALGAS_semanticDeclarationAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticDeclarationAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_semanticDeclarationListAST add_operation (const GALGAS_semanticDeclarationListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticDeclarationAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticDeclarationAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticDeclarationAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticDeclarationAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticDeclarationAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticDeclarationAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_semanticDeclarationListAST ;
  friend class cEnumerator_new_semanticDeclarationListAST ;
 
} ; // End of GALGAS_semanticDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_semanticDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_semanticDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_semanticDeclarationListAST {
//--- Constructor
  public : cEnumerator_new_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_semanticDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_new_semanticDeclarationListAST (const cEnumerator_new_semanticDeclarationListAST &) ;
  private : cEnumerator_new_semanticDeclarationListAST & operator = (const cEnumerator_new_semanticDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_semanticDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_semanticDeclarationListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @semanticDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticDeclarationAST mAttribute_mSemanticDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticDeclarationListAST_2D_element (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticDeclarationListAST_2D_element constructor_new (const class GALGAS_semanticDeclarationAST & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationAST getter_mSemanticDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @formalTemplateInputParameterListAST list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalTemplateInputParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formalTemplateInputParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formalTemplateInputParameterListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalTemplateSelector,
                                                  const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName,
                                                  const class GALGAS_bool & in_mIsUnused
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalTemplateInputParameterListAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_formalTemplateInputParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_formalTemplateInputParameterListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2,
                                                                                              const class GALGAS_bool & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalTemplateInputParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalTemplateInputParameterListAST add_operation (const GALGAS_formalTemplateInputParameterListAST & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_bool constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_bool & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalTemplateSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalTemplateInputParameterListAST ;
  friend class cEnumerator_new_formalTemplateInputParameterListAST ;
 
} ; // End of GALGAS_formalTemplateInputParameterListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formalTemplateInputParameterListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mFormalTemplateSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalTemplateInputParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_formalTemplateInputParameterListAST {
//--- Constructor
  public : cEnumerator_new_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_formalTemplateInputParameterListAST (void) ;

//--- No copy
  private : cEnumerator_new_formalTemplateInputParameterListAST (const cEnumerator_new_formalTemplateInputParameterListAST &) ;
  private : cEnumerator_new_formalTemplateInputParameterListAST & operator = (const cEnumerator_new_formalTemplateInputParameterListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mFormalTemplateSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalTemplateInputParameterListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_formalTemplateInputParameterListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @formalTemplateInputParameterListAST_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalTemplateInputParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalTemplateSelector ;
  public : GALGAS_lstring mAttribute_mFormalArgumentTypeName ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;
  public : GALGAS_bool mAttribute_mIsUnused ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_formalTemplateInputParameterListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_formalTemplateInputParameterListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formalTemplateInputParameterListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formalTemplateInputParameterListAST_2D_element (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                  const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                  const GALGAS_lstring & in_mFormalArgumentName,
                                                                  const GALGAS_bool & in_mIsUnused) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalTemplateInputParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_formalTemplateInputParameterListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2,
                                                                                               const class GALGAS_bool & inOperand3
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formalTemplateInputParameterListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalTemplateSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalTemplateInputParameterListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @filewrapperTemplateListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_filewrapperTemplateListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFilewrapperTemplateName,
                                                  const class GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                  const class GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperTemplateListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_filewrapperTemplateListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_filewrapperTemplateListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListAST add_operation (const GALGAS_filewrapperTemplateListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_formalTemplateInputParameterListAST constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_filewrapperTemplateListAST ;
  friend class cEnumerator_new_filewrapperTemplateListAST ;
 
} ; // End of GALGAS_filewrapperTemplateListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_filewrapperTemplateListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
  public : class GALGAS_formalTemplateInputParameterListAST current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperTemplateListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_filewrapperTemplateListAST {
//--- Constructor
  public : cEnumerator_new_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_filewrapperTemplateListAST (void) ;

//--- No copy
  private : cEnumerator_new_filewrapperTemplateListAST (const cEnumerator_new_filewrapperTemplateListAST &) ;
  private : cEnumerator_new_filewrapperTemplateListAST & operator = (const cEnumerator_new_filewrapperTemplateListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
  public : class GALGAS_formalTemplateInputParameterListAST current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperTemplateListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_filewrapperTemplateListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @filewrapperTemplateListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFilewrapperTemplateName ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplatePath ;
  public : GALGAS_formalTemplateInputParameterListAST mAttribute_mFilewrapperTemplateFormalInputParameters ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperTemplateListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperTemplateListAST_2D_element (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                         const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                         const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperTemplateListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @syntaxInstructionList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxInstructionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_syntaxInstructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxInstructionList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_syntaxInstructionList constructor_listWithValue (const class GALGAS_syntaxInstructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList add_operation (const GALGAS_syntaxInstructionList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_syntaxInstructionAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_syntaxInstructionAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_syntaxInstructionAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_syntaxInstructionAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxInstructionList ;
  friend class cEnumerator_new_syntaxInstructionList ;
 
} ; // End of GALGAS_syntaxInstructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxInstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxInstructionList (const GALGAS_syntaxInstructionList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_syntaxInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_syntaxInstructionList {
//--- Constructor
  public : cEnumerator_new_syntaxInstructionList (const GALGAS_syntaxInstructionList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_syntaxInstructionList (void) ;

//--- No copy
  private : cEnumerator_new_syntaxInstructionList (const cEnumerator_new_syntaxInstructionList &) ;
  private : cEnumerator_new_syntaxInstructionList & operator = (const cEnumerator_new_syntaxInstructionList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_syntaxInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxInstructionList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_syntaxInstructionList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syntaxInstructionList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_syntaxInstructionAST mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxInstructionList_2D_element constructor_new (const class GALGAS_syntaxInstructionAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionAST getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxInstructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @nonTerminalLabelListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_nonTerminalLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_nonTerminalLabelListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLabelName,
                                                  const class GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                  const class GALGAS_location & in_mEndOfArgumentLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalLabelListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_nonTerminalLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_nonTerminalLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_formalParameterListAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalLabelListAST add_operation (const GALGAS_nonTerminalLabelListAST & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_formalParameterListAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_formalParameterListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_formalParameterListAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalParameterListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonTerminalLabelListAST ;
  friend class cEnumerator_new_nonTerminalLabelListAST ;
 
} ; // End of GALGAS_nonTerminalLabelListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonTerminalLabelListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonTerminalLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_nonTerminalLabelListAST {
//--- Constructor
  public : cEnumerator_new_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_nonTerminalLabelListAST (void) ;

//--- No copy
  private : cEnumerator_new_nonTerminalLabelListAST (const cEnumerator_new_nonTerminalLabelListAST &) ;
  private : cEnumerator_new_nonTerminalLabelListAST & operator = (const cEnumerator_new_nonTerminalLabelListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonTerminalLabelListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_nonTerminalLabelListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @nonTerminalLabelListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLabelName ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalArgumentList ;
  public : GALGAS_location mAttribute_mEndOfArgumentLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonTerminalLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonTerminalLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                      const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                      const GALGAS_location & in_mEndOfArgumentLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_nonTerminalLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_formalParameterListAST & inOperand1,
                                                                                   const class GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalLabelListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @nonterminalDeclarationListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_nonterminalDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_nonterminalDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mNonterminalName,
                                                  const class GALGAS_nonTerminalLabelListAST & in_mLabels
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_nonterminalDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_nonterminalDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonterminalDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_nonterminalDeclarationListAST add_operation (const GALGAS_nonterminalDeclarationListAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_nonTerminalLabelListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_nonTerminalLabelListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonTerminalLabelListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonterminalDeclarationListAST ;
  friend class cEnumerator_new_nonterminalDeclarationListAST ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonterminalDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public : class GALGAS_nonTerminalLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonterminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_nonterminalDeclarationListAST {
//--- Constructor
  public : cEnumerator_new_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_nonterminalDeclarationListAST (void) ;

//--- No copy
  private : cEnumerator_new_nonterminalDeclarationListAST (const cEnumerator_new_nonterminalDeclarationListAST &) ;
  private : cEnumerator_new_nonterminalDeclarationListAST & operator = (const cEnumerator_new_nonterminalDeclarationListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public : class GALGAS_nonTerminalLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonterminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_nonterminalDeclarationListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @nonterminalDeclarationListAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mNonterminalName ;
  public : GALGAS_nonTerminalLabelListAST mAttribute_mLabels ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonterminalDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonterminalDeclarationListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                                            const GALGAS_nonTerminalLabelListAST & in_mLabels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_nonterminalDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonterminalDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_mLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @syntaxRuleLabelListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxRuleLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxRuleLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxRuleLabelListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLabelName,
                                                  const class GALGAS_formalParameterListAST & in_mFormalArguments,
                                                  const class GALGAS_location & in_mEndOfArgumentLocation,
                                                  const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                  const class GALGAS_location & in_mEndOfInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxRuleLabelListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxRuleLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_syntaxRuleLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalParameterListAST & inOperand1,
                                                                                 const class GALGAS_location & inOperand2,
                                                                                 const class GALGAS_syntaxInstructionList & inOperand3,
                                                                                 const class GALGAS_location & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxRuleLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_syntaxInstructionList & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxRuleLabelListAST add_operation (const GALGAS_syntaxRuleLabelListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_formalParameterListAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_syntaxInstructionList constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_formalParameterListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_syntaxInstructionList & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 class GALGAS_syntaxInstructionList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_formalParameterListAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_syntaxInstructionList & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalParameterListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               class GALGAS_syntaxInstructionList & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              class GALGAS_syntaxInstructionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxRuleLabelListAST ;
  friend class cEnumerator_new_syntaxRuleLabelListAST ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxRuleLabelListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxRuleLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_syntaxRuleLabelListAST {
//--- Constructor
  public : cEnumerator_new_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_syntaxRuleLabelListAST (void) ;

//--- No copy
  private : cEnumerator_new_syntaxRuleLabelListAST (const cEnumerator_new_syntaxRuleLabelListAST &) ;
  private : cEnumerator_new_syntaxRuleLabelListAST & operator = (const cEnumerator_new_syntaxRuleLabelListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxRuleLabelListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_syntaxRuleLabelListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syntaxRuleLabelListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxRuleLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLabelName ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalArguments ;
  public : GALGAS_location mAttribute_mEndOfArgumentLocation ;
  public : GALGAS_syntaxInstructionList mAttribute_mSyntaxInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxRuleLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxRuleLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                     const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                     const GALGAS_location & in_mEndOfArgumentLocation,
                                                     const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                     const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxRuleLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxRuleLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_formalParameterListAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2,
                                                                                  const class GALGAS_syntaxInstructionList & inOperand3,
                                                                                  const class GALGAS_location & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxRuleLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @syntaxRuleListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxRuleListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mNonterminalName,
                                                  const class GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxRuleListAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxRuleListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_syntaxRuleListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxRuleListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxRuleListAST add_operation (const GALGAS_syntaxRuleListAST & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_syntaxRuleLabelListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxRuleListAST ;
  friend class cEnumerator_new_syntaxRuleListAST ;
 
} ; // End of GALGAS_syntaxRuleListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxRuleListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleLabelListAST current_mLabelList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxRuleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_syntaxRuleListAST {
//--- Constructor
  public : cEnumerator_new_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_syntaxRuleListAST (void) ;

//--- No copy
  private : cEnumerator_new_syntaxRuleListAST (const cEnumerator_new_syntaxRuleListAST &) ;
  private : cEnumerator_new_syntaxRuleListAST & operator = (const cEnumerator_new_syntaxRuleListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleLabelListAST current_mLabelList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxRuleListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_syntaxRuleListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syntaxRuleListAST_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mNonterminalName ;
  public : GALGAS_syntaxRuleLabelListAST mAttribute_mLabelList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxRuleListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxRuleListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                                const GALGAS_syntaxRuleLabelListAST & in_mLabelList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxRuleListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxRuleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_mLabelList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxRuleListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @listOfSyntaxInstructionList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listOfSyntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_listOfSyntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_listOfSyntaxInstructionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                  const class GALGAS_location & in_mEndOf_5F_instructions
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listOfSyntaxInstructionList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_listOfSyntaxInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_listOfSyntaxInstructionList constructor_listWithValue (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                      const class GALGAS_location & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_listOfSyntaxInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionList & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList add_operation (const GALGAS_listOfSyntaxInstructionList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_syntaxInstructionList & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_syntaxInstructionList & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_syntaxInstructionList & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionList & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionList & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_listOfSyntaxInstructionList ;
  friend class cEnumerator_new_listOfSyntaxInstructionList ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_listOfSyntaxInstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_listOfSyntaxInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_listOfSyntaxInstructionList {
//--- Constructor
  public : cEnumerator_new_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_listOfSyntaxInstructionList (void) ;

//--- No copy
  private : cEnumerator_new_listOfSyntaxInstructionList (const cEnumerator_new_listOfSyntaxInstructionList &) ;
  private : cEnumerator_new_listOfSyntaxInstructionList & operator = (const cEnumerator_new_listOfSyntaxInstructionList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_listOfSyntaxInstructionList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_listOfSyntaxInstructionList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @listOfSyntaxInstructionList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listOfSyntaxInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_syntaxInstructionList mAttribute_mSyntaxInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_instructions ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listOfSyntaxInstructionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                          const GALGAS_location & in_mEndOf_5F_instructions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listOfSyntaxInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_listOfSyntaxInstructionList_2D_element constructor_new (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                       const class GALGAS_location & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listOfSyntaxInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @collectionValueElementList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_collectionValueElementList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_collectionValueElementList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractCollectionValueElement & in_mElement
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_collectionValueElementList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_collectionValueElementList constructor_listWithValue (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_collectionValueElementList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementList add_operation (const GALGAS_collectionValueElementList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractCollectionValueElement constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractCollectionValueElement & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractCollectionValueElement & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElement getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_collectionValueElementList ;
  friend class cEnumerator_new_collectionValueElementList ;
 
} ; // End of GALGAS_collectionValueElementList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_collectionValueElementList : public cGenericAbstractEnumerator {
  public : cEnumerator_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_abstractCollectionValueElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_collectionValueElementList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_collectionValueElementList {
//--- Constructor
  public : cEnumerator_new_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_collectionValueElementList (void) ;

//--- No copy
  private : cEnumerator_new_collectionValueElementList (const cEnumerator_new_collectionValueElementList &) ;
  private : cEnumerator_new_collectionValueElementList & operator = (const cEnumerator_new_collectionValueElementList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_abstractCollectionValueElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_collectionValueElementList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_collectionValueElementList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @abstractCollectionValueElement class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCollectionValueElement : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractCollectionValueElement (void) ;

//---
  public : inline const class cPtr_abstractCollectionValueElement * ptr (void) const { return (const cPtr_abstractCollectionValueElement *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCollectionValueElement (const cPtr_abstractCollectionValueElement * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCollectionValueElement extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElement class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElement ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @abstractCollectionValueElement class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCollectionValueElement : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractCollectionValueElement (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @collectionValueElementList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_collectionValueElementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractCollectionValueElement mAttribute_mElement ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_collectionValueElementList_2D_element (const GALGAS_abstractCollectionValueElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_collectionValueElementList_2D_element constructor_new (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_collectionValueElementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElement getter_mElement (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueElementList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @expressionCollectionValue class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionCollectionValue : public GALGAS_abstractCollectionValueElement {
//--- Constructor
  public : GALGAS_expressionCollectionValue (void) ;

//---
  public : inline const class cPtr_expressionCollectionValue * ptr (void) const { return (const cPtr_expressionCollectionValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionCollectionValue (const cPtr_expressionCollectionValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionCollectionValue extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_expressionCollectionValue constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionCollectionValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @expressionCollectionValue class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionCollectionValue : public cPtr_abstractCollectionValueElement {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;
  public : GALGAS_location mAttribute_mExpressionLocation ;

//--- Constructor
  public : cPtr_expressionCollectionValue (const GALGAS_semanticExpressionAST & in_mExpression,
                                           const GALGAS_location & in_mExpressionLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @expressionListCollectionValue class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionListCollectionValue : public GALGAS_abstractCollectionValueElement {
//--- Constructor
  public : GALGAS_expressionListCollectionValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_expressionListCollectionValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_expressionListCollectionValue * ptr (void) const { return (const cPtr_expressionListCollectionValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionListCollectionValue (const cPtr_expressionListCollectionValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionListCollectionValue extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_expressionListCollectionValue constructor_new (const class GALGAS_actualOutputExpressionList & inOperand0,
                                                                              const class GALGAS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionListCollectionValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @expressionListCollectionValue class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionListCollectionValue : public cPtr_abstractCollectionValueElement {
//--- Attributes
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressionList ;
  public : GALGAS_location mAttribute_mEndOfExpressionLocation ;

//--- Constructor
  public : cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                               const GALGAS_location & in_mEndOfExpressionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList getter_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @galgas3SyntaxComponentListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_SyntaxComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_SyntaxComponentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSyntaxComponentName,
                                                  const class GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                  const class GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                                  const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                  const class GALGAS_syntaxRuleListAST & in_mRuleList,
                                                  const class GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                                  const class GALGAS_bool & in_mHasTranslateFeature
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxComponentListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_SyntaxComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_galgas_33_SyntaxComponentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_lstringlist & inOperand2,
                                                                                           const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                           const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                                           const class GALGAS_semanticDeclarationListAST & inOperand5,
                                                                                           const class GALGAS_bool & inOperand6
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                      const class GALGAS_syntaxRuleListAST & inOperand4,
                                                      const class GALGAS_semanticDeclarationListAST & inOperand5,
                                                      const class GALGAS_bool & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxComponentListAST add_operation (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_nonterminalDeclarationListAST constinArgument3,
                                                       class GALGAS_syntaxRuleListAST constinArgument4,
                                                       class GALGAS_semanticDeclarationListAST constinArgument5,
                                                       class GALGAS_bool constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                                  class GALGAS_syntaxRuleListAST & outArgument4,
                                                  class GALGAS_semanticDeclarationListAST & outArgument5,
                                                  class GALGAS_bool & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                                 class GALGAS_syntaxRuleListAST & outArgument4,
                                                 class GALGAS_semanticDeclarationListAST & outArgument5,
                                                 class GALGAS_bool & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                                       class GALGAS_syntaxRuleListAST & outArgument4,
                                                       class GALGAS_semanticDeclarationListAST & outArgument5,
                                                       class GALGAS_bool & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                               class GALGAS_syntaxRuleListAST & outArgument4,
                                               class GALGAS_semanticDeclarationListAST & outArgument5,
                                               class GALGAS_bool & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                              class GALGAS_syntaxRuleListAST & outArgument4,
                                              class GALGAS_semanticDeclarationListAST & outArgument5,
                                              class GALGAS_bool & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mImportedComponentFileNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImportedLexiqueFilePathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_mSemanticDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_SyntaxComponentListAST ;
  friend class cEnumerator_new_galgas_33_SyntaxComponentListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_SyntaxComponentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mImportedComponentFileNameList (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public : class GALGAS_semanticDeclarationListAST current_mSemanticDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_SyntaxComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_galgas_33_SyntaxComponentListAST {
//--- Constructor
  public : cEnumerator_new_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_galgas_33_SyntaxComponentListAST (void) ;

//--- No copy
  private : cEnumerator_new_galgas_33_SyntaxComponentListAST (const cEnumerator_new_galgas_33_SyntaxComponentListAST &) ;
  private : cEnumerator_new_galgas_33_SyntaxComponentListAST & operator = (const cEnumerator_new_galgas_33_SyntaxComponentListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mImportedComponentFileNameList (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public : class GALGAS_semanticDeclarationListAST current_mSemanticDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_SyntaxComponentListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_galgas_33_SyntaxComponentListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @galgas_33_SyntaxComponentListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxComponentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSyntaxComponentName ;
  public : GALGAS_lstring mAttribute_mImportedLexiqueFilePath ;
  public : GALGAS_lstringlist mAttribute_mImportedComponentFileNameList ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;
  public : GALGAS_semanticDeclarationListAST mAttribute_mSemanticDeclarationList ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_SyntaxComponentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_SyntaxComponentListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                               const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                               const GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                                               const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                               const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                                               const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxComponentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_SyntaxComponentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_lstringlist & inOperand2,
                                                                                            const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                            const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                                            const class GALGAS_semanticDeclarationListAST & inOperand5,
                                                                                            const class GALGAS_bool & inOperand6
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mImportedComponentFileNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImportedLexiqueFilePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_mSemanticDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @galgas3SyntaxExtensionListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxExtensionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_SyntaxExtensionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_SyntaxExtensionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSyntaxComponentName,
                                                  const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                  const class GALGAS_syntaxRuleListAST & in_mRuleList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxExtensionListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_SyntaxExtensionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_galgas_33_SyntaxExtensionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                           const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                      const class GALGAS_syntaxRuleListAST & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxExtensionListAST add_operation (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                                       class GALGAS_syntaxRuleListAST constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                  class GALGAS_syntaxRuleListAST & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                 class GALGAS_syntaxRuleListAST & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                       class GALGAS_syntaxRuleListAST & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                               class GALGAS_syntaxRuleListAST & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                              class GALGAS_syntaxRuleListAST & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_SyntaxExtensionListAST ;
  friend class cEnumerator_new_galgas_33_SyntaxExtensionListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_SyntaxExtensionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_galgas_33_SyntaxExtensionListAST {
//--- Constructor
  public : cEnumerator_new_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_galgas_33_SyntaxExtensionListAST (void) ;

//--- No copy
  private : cEnumerator_new_galgas_33_SyntaxExtensionListAST (const cEnumerator_new_galgas_33_SyntaxExtensionListAST &) ;
  private : cEnumerator_new_galgas_33_SyntaxExtensionListAST & operator = (const cEnumerator_new_galgas_33_SyntaxExtensionListAST &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_galgas_33_SyntaxExtensionListAST_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @galgas_33_SyntaxExtensionListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSyntaxComponentName ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                               const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GALGAS_syntaxRuleListAST & in_mRuleList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                            const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @syntaxExtensions list map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxExtensions : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_syntaxExtensions (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxExtensions extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxExtensions constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                      const class GALGAS_syntaxRuleListAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_listForKey (const class GALGAS_string & constinOperand0
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxExtensions ;
  friend class cEnumerator_new_syntaxExtensions ;
 
} ; // End of GALGAS_syntaxExtensions class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxExtensions : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_galgas_33_SyntaxExtensionListAST current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxExtensions_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_syntaxExtensions {
//--- Constructor
  public : cEnumerator_new_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_syntaxExtensions (void) ;

//--- No copy
  private : cEnumerator_new_syntaxExtensions (const cEnumerator_new_syntaxExtensions &) ;
  private : cEnumerator_new_syntaxExtensions & operator = (const cEnumerator_new_syntaxExtensions &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_galgas_33_SyntaxExtensionListAST current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxExtensions_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_syntaxExtensions_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @syntaxExtensions_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxExtensions_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_key ;
  public : GALGAS_galgas_33_SyntaxExtensionListAST mAttribute_mList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxExtensions_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxExtensions_2D_element (const GALGAS_string & in_key,
                                               const GALGAS_galgas_33_SyntaxExtensionListAST & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxExtensions_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syntaxExtensions_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxExtensions_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @prologueEpilogueList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prologueEpilogueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_prologueEpilogueList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_prologueEpilogueList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prologueEpilogueList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prologueEpilogueList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_prologueEpilogueList constructor_listWithValue (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                               const class GALGAS_location & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_prologueEpilogueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_prologueEpilogueList add_operation (const GALGAS_prologueEpilogueList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionListAST & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionListAST & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionListAST & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionListAST & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionListAST & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_prologueEpilogueList ;
  friend class cEnumerator_new_prologueEpilogueList ;
 
} ; // End of GALGAS_prologueEpilogueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_prologueEpilogueList : public cGenericAbstractEnumerator {
  public : cEnumerator_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_prologueEpilogueList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_prologueEpilogueList {
//--- Constructor
  public : cEnumerator_new_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_prologueEpilogueList (void) ;

//--- No copy
  private : cEnumerator_new_prologueEpilogueList (const cEnumerator_new_prologueEpilogueList &) ;
  private : cEnumerator_new_prologueEpilogueList & operator = (const cEnumerator_new_prologueEpilogueList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_prologueEpilogueList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_prologueEpilogueList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @prologueEpilogueList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prologueEpilogueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticInstructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prologueEpilogueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prologueEpilogueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prologueEpilogueList_2D_element constructor_new (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                                const class GALGAS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prologueEpilogueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prologueEpilogueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @programRuleList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_programRuleList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_programRuleList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_programRuleList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSourceFileExtension,
                                                  const class GALGAS_lstring & in_mSourceFileHelp,
                                                  const class GALGAS_lstring & in_mSourceFileVariableName,
                                                  const class GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                                  const class GALGAS_lstring & in_mReferenceGrammar,
                                                  const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_programRuleList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_programRuleList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_programRuleList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_bool & inOperand3,
                                                                          const class GALGAS_lstring & inOperand4,
                                                                          const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                          const class GALGAS_location & inOperand6
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_programRuleList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      const class GALGAS_semanticInstructionListAST & inOperand5,
                                                      const class GALGAS_location & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_programRuleList add_operation (const GALGAS_programRuleList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_bool constinArgument3,
                                                       class GALGAS_lstring constinArgument4,
                                                       class GALGAS_semanticInstructionListAST constinArgument5,
                                                       class GALGAS_location constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_lstring & outArgument4,
                                                  class GALGAS_semanticInstructionListAST & outArgument5,
                                                  class GALGAS_location & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_semanticInstructionListAST & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_bool & outArgument3,
                                                       class GALGAS_lstring & outArgument4,
                                                       class GALGAS_semanticInstructionListAST & outArgument5,
                                                       class GALGAS_location & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               class GALGAS_semanticInstructionListAST & outArgument5,
                                               class GALGAS_location & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_semanticInstructionListAST & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReferenceGrammarAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileExtensionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileHelpAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileVariableNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSourceFileVariableNameIsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_programRuleList ;
  friend class cEnumerator_new_programRuleList ;
 
} ; // End of GALGAS_programRuleList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_programRuleList : public cGenericAbstractEnumerator {
  public : cEnumerator_programRuleList (const GALGAS_programRuleList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mSourceFileExtension (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSourceFileHelp (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSourceFileVariableName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReferenceGrammar (LOCATION_ARGS) const ;
  public : class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_programRuleList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_programRuleList {
//--- Constructor
  public : cEnumerator_new_programRuleList (const GALGAS_programRuleList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_programRuleList (void) ;

//--- No copy
  private : cEnumerator_new_programRuleList (const cEnumerator_new_programRuleList &) ;
  private : cEnumerator_new_programRuleList & operator = (const cEnumerator_new_programRuleList &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mSourceFileExtension (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSourceFileHelp (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSourceFileVariableName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReferenceGrammar (LOCATION_ARGS) const ;
  public : class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_programRuleList_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_programRuleList_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @programRuleList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_programRuleList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSourceFileExtension ;
  public : GALGAS_lstring mAttribute_mSourceFileHelp ;
  public : GALGAS_lstring mAttribute_mSourceFileVariableName ;
  public : GALGAS_bool mAttribute_mSourceFileVariableNameIsUnused ;
  public : GALGAS_lstring mAttribute_mReferenceGrammar ;
  public : GALGAS_semanticInstructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_programRuleList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_programRuleList_2D_element (const GALGAS_lstring & in_mSourceFileExtension,
                                              const GALGAS_lstring & in_mSourceFileHelp,
                                              const GALGAS_lstring & in_mSourceFileVariableName,
                                              const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                              const GALGAS_lstring & in_mReferenceGrammar,
                                              const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                              const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_programRuleList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_programRuleList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_bool & inOperand3,
                                                                           const class GALGAS_lstring & inOperand4,
                                                                           const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                           const class GALGAS_location & inOperand6
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_programRuleList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReferenceGrammar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileExtension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileHelp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programRuleList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas_33_DeclarationAST struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_DeclarationAST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticDeclarationListAST mAttribute_mDeclarationList ;
  public : GALGAS_galgas_33_SyntaxComponentListAST mAttribute_mSyntaxComponentList ;
  public : GALGAS_syntaxExtensions mAttribute_mSyntaxExtensions ;
  public : GALGAS_galgas_33_GUIComponentListAST mAttribute_mGUIComponentList ;
  public : GALGAS_prologueEpilogueList mAttribute_mPrologueDeclarationList ;
  public : GALGAS_programRuleList mAttribute_mSourceRuleList ;
  public : GALGAS_prologueEpilogueList mAttribute_mEpilogueDeclarationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_DeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_DeclarationAST (const GALGAS_semanticDeclarationListAST & in_mDeclarationList,
                                            const GALGAS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                            const GALGAS_syntaxExtensions & in_mSyntaxExtensions,
                                            const GALGAS_galgas_33_GUIComponentListAST & in_mGUIComponentList,
                                            const GALGAS_prologueEpilogueList & in_mPrologueDeclarationList,
                                            const GALGAS_programRuleList & in_mSourceRuleList,
                                            const GALGAS_prologueEpilogueList & in_mEpilogueDeclarationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_DeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_DeclarationAST constructor_new (const class GALGAS_semanticDeclarationListAST & inOperand0,
                                                                         const class GALGAS_galgas_33_SyntaxComponentListAST & inOperand1,
                                                                         const class GALGAS_syntaxExtensions & inOperand2,
                                                                         const class GALGAS_galgas_33_GUIComponentListAST & inOperand3,
                                                                         const class GALGAS_prologueEpilogueList & inOperand4,
                                                                         const class GALGAS_programRuleList & inOperand5,
                                                                         const class GALGAS_prologueEpilogueList & inOperand6
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_DeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_mDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_mEpilogueDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_mGUIComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_mPrologueDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_mSourceRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_mSyntaxComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxExtensions getter_mSyntaxExtensions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_DeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_DeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @functionSignature_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_string mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionSignature_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                             const class GALGAS_string & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionSignature_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@constructorMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;

//--- Constructor
  public : cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                       const GALGAS_functionSignature & in_mArgumentTypeList,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @constructorMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_functionSignature & in_mArgumentTypeList,
                                             const GALGAS_bool & in_mHasCompilerArgument,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_functionSignature & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @methodQualifier enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodQualifier : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_methodQualifier (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_isAbstract,
    kEnum_isBasic,
    kEnum_isBasicFinal,
    kEnum_isInherited,
    kEnum_isOverriding,
    kEnum_isOverridingAbstract
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodQualifier extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_methodQualifier constructor_isAbstract (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isBasic (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isBasicFinal (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isInherited (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isOverriding (LOCATION_ARGS) ;

  public : static class GALGAS_methodQualifier constructor_isOverridingAbstract (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodQualifier & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsAbstract (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsBasicFinal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsInherited (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIsOverridingAbstract (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodQualifier class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodQualifier ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @methodKind enum                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_methodKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_definedAsMember,
    kEnum_definedAsExtension
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodKind extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_methodKind constructor_definedAsExtension (LOCATION_ARGS) ;

  public : static class GALGAS_methodKind constructor_definedAsMember (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefinedAsExtension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDefinedAsMember (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@getterMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_getterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_getterMap (const GALGAS_lstring & inKey,
                                  const GALGAS_methodKind & in_mKind,
                                  const GALGAS_functionSignature & in_mArgumentTypeList,
                                  const GALGAS_location & in_mDeclarationLocation,
                                  const GALGAS_bool & in_mHasCompilerArgument,
                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                  const GALGAS_methodQualifier & in_mQualifier,
                                  const GALGAS_string & in_mErrorMessage
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @getterMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_getterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_getterMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_methodKind & in_mKind,
                                        const GALGAS_functionSignature & in_mArgumentTypeList,
                                        const GALGAS_location & in_mDeclarationLocation,
                                        const GALGAS_bool & in_mHasCompilerArgument,
                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                        const GALGAS_methodQualifier & in_mQualifier,
                                        const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_methodKind & inOperand1,
                                                                     const class GALGAS_functionSignature & inOperand2,
                                                                     const class GALGAS_location & inOperand3,
                                                                     const class GALGAS_bool & inOperand4,
                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                     const class GALGAS_methodQualifier & inOperand6,
                                                                     const class GALGAS_string & inOperand7
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mArgumentTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @formalParameterSignature list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formalParameterSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formalParameterSignature (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterSignature extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_formalParameterSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_formalParameterSignature constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                   const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                   const class GALGAS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                      const class GALGAS_string & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterSignature add_operation (const GALGAS_formalParameterSignature & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                       class GALGAS_formalArgumentPassingModeAST constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                  class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                       class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterSignature ;
  friend class cEnumerator_new_formalParameterSignature ;
 
} ; // End of GALGAS_formalParameterSignature class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formalParameterSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;


//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalParameterSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#ifdef NEW_ENUMERATOR
class cEnumerator_new_formalParameterSignature {
//--- Constructor
  public : cEnumerator_new_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Virtual destructor
  public : ~ cEnumerator_new_formalParameterSignature (void) ;

//--- No copy
  private : cEnumerator_new_formalParameterSignature (const cEnumerator_new_formalParameterSignature &) ;
  private : cEnumerator_new_formalParameterSignature & operator = (const cEnumerator_new_formalParameterSignature &) ;

//--- 
  public : inline bool hasCurrentObject (void) const { return mIndex < mEnumerationArray.count () ; }
  public : inline bool hasNextObject (void) const { return (mIndex + 1) < mEnumerationArray.count () ; }
  public : inline void gotoNextObject (void) { mIndex ++ ; }
  public : inline void rewind (void) { mIndex = 0 ; }
  public : inline int32_t index (void) const { return mIndex ; }
  public : inline void gotoIndex (const int32_t inIndex) { mIndex = inIndex ; }

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalParameterSignature_2D_element current (LOCATION_ARGS) const ;

//--- Private data members
  private : TC_UniqueArray <GALGAS_formalParameterSignature_2D_element> mEnumerationArray ;
  private : int32_t mIndex ;
} ;

#endif

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @formalParameterSignature_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_formalArgumentPassingModeAST mAttribute_mFormalArgumentPassingMode ;
  public : GALGAS_string mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formalParameterSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                       const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                       const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_formalParameterSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                    const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                    const class GALGAS_string & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formalParameterSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalParameterSignature_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;

#endif
